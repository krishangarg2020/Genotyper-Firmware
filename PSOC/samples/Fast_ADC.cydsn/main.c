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

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    const int thermocouple_input = A1;	/* AD595 O/P pin */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        int adc_val;
  float temperature;
  adc_val = analogRead(thermocouple_input);
  temperature = ( ((adc_val * 4.88) - 0.0027 ) / 10.0 );
  sprintf("Temperature = ");
  sprintf(temperature);
  sprintf("\n\n");
  cydelay(1000);
    }
}

/* [] END OF FILE */
