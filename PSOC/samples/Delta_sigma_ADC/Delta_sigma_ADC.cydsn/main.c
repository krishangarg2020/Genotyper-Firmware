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
    // float temperature;
    COM_port_Start(0,COM_port_5V_OPERATION);
    char send[100];
    while(COM_port_GetConfiguration()==0){}
     ADC_DelSig_1_Start(); 
    for(;;)
    {
       
        ADC_DelSig_1_StartConvert();
        ADC_DelSig_1_IsEndConversion( ADC_DelSig_1_WAIT_FOR_RESULT);
        int adc_val=ADC_DelSig_1_GetResult32();
        ADC_DelSig_1_StopConvert();
       // temperature = ( ((adc_val * 4.88) - 0.0027 ) / 10.0 );
        
        sprintf(send,"%d\r\n",adc_val);
        COM_port_PutString(send);
        CyDelay(100);
    }
}

/* [] END OF FILE */
