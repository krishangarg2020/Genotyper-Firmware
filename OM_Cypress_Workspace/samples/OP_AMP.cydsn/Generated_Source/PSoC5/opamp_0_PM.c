/*******************************************************************************
* File Name: opamp_0_PM.c
* Version 1.90
*
* Description:
*  This file provides the power management source code to the API for the 
*  OpAmp (Analog Buffer) component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "opamp_0.h"

static opamp_0_BACKUP_STRUCT  opamp_0_backup;


/*******************************************************************************  
* Function Name: opamp_0_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration registers.
* 
* Parameters:
*  void
* 
* Return:
*  void
*
*******************************************************************************/
void opamp_0_SaveConfig(void) 
{
    /* Nothing to save as registers are System reset on retention flops */
}


/*******************************************************************************  
* Function Name: opamp_0_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration registers.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
void opamp_0_RestoreConfig(void) 
{
    /* Nothing to restore */
}


/*******************************************************************************   
* Function Name: opamp_0_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves its configuration. Should be called 
*  just prior to entering sleep.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  opamp_0_backup: The structure field 'enableState' is modified 
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void opamp_0_Sleep(void) 
{
    /* Save OpAmp enable state */
    if((opamp_0_PM_ACT_CFG_REG & opamp_0_ACT_PWR_EN) != 0u)
    {
        /* Component is enabled */
        opamp_0_backup.enableState = 1u;
         /* Stops the component */
         opamp_0_Stop();
    }
    else
    {
        /* Component is disabled */
        opamp_0_backup.enableState = 0u;
    }
    /* Saves the configuration */
    opamp_0_SaveConfig();
}


/*******************************************************************************  
* Function Name: opamp_0_Wakeup
********************************************************************************
*
* Summary:
*  Enables block's operation and restores its configuration. Should be called
*  just after awaking from sleep.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  opamp_0_backup: The structure field 'enableState' is used to 
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void opamp_0_Wakeup(void) 
{
    /* Restore the user configuration */
    opamp_0_RestoreConfig();

    /* Enables the component operation */
    if(opamp_0_backup.enableState == 1u)
    {
        opamp_0_Enable();
    } /* Do nothing if component was disable before */
}


/* [] END OF FILE */
