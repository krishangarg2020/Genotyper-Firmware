/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include<stdio.h>

int main(void) 
{
    CyGlobalIntEnable; 
  
    COM_port_Start(0,COM_port_5V_OPERATION);
    while(COM_port_GetConfiguration()==0){}
      ADC_DelSig_1_Start();
      ADC_DelSig_1_StartConvert();
    for(;;)
    {
        uint16_t adc_val=ADC_DelSig_1_GetResult16();
         char send[100];
        sprintf(send,"%d\r\n",adc_val);
        COM_port_PutString(send);
        if(adc_val>3000)
        {
            Led_Write(1);
             COM_port_PutString("LED ON\r\n");
        }
        else
        {
            Led_Write(0);
            COM_port_PutString("LED OFF\r\n");
        }
        CyDelay(100);
    }
}

/* [] END OF FILE */
