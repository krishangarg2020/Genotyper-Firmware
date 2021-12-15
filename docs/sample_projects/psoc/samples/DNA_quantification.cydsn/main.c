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
#include"project.h"
int main()
{
 
    /* Start the TIA component */
   TIA_1_Start();


    /* Set the Resistive feedback to 40k ohms */
   TIA_1_SetResFB(TIA_1_RES_FEEDBACK_80K);

    /* Set the capacitive feedback to 3.3pF */
   TIA_1_SetCapFB(TIA_1_CAP_FEEDBACK_3_3PF);
   PGA_Inv_1_Start();

    
    for(;;)
    {
    }
}


/* [] END OF FILE */
