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
#include <stdlib.h>
#include<stdio.h>
#include "fonction.h"
#define N 200 // on utilise 16 caracteres +1 pour le \0
char message[N] ;
#define pi 3.14159
void startup()
{
 // to fill
    Clock_Start();
    UART_Start();
    ADC_SAR_Start();
    ADC_SAR_1_Start();
    ADC_SAR_1_Start();
    
    ADC_SAR_StartConvert();
    ADC_SAR_1_StartConvert();
    Timer_Start();
    isr_StartEx(isrTimer);
    
}
CY_ISR(isrTimer)
{
    float tension1;
    uint8 valeur1 ;
    float tension2;
    uint8 valeur2 ;
    Timer_ReadStatusRegister();
    /*q11***
    char *message = (char*) malloc(N*sizeof(char));
    message="Bonjour !\r\n" ;            ****/
    /*q7***LCD_PrintString("Bonjour ! ");****/
    /*q8***
    LCD_Position(1, 0);
    LCD_PrintString("Bonjour ! ");       ****/
    /*q9***/
    /*LCD_Position(1, 0);
    LCD_PrintString(message) ;          ****/
    /*q13***
    LCD_Position(1, 0);
    LCD_PrintString(message);           ****/
    /*q15***
    uint8 a = 127;
    LCD_Position(0,1) ;
    LCD_PrintNumber(a) ;                ****/
    /*Partie 3***
    static volatile uint8 a = 0;
    char *message = (char*) malloc(N*sizeof(char));   
    a++ ;
    snprintf(message, N,"a = %d ", a);   
    LCD_Position(0,0) ;
    LCD_PrintString(message);          ****/
    /****
    static volatile uint8 a = 0;
    ADC_SAR_IsEndConversion(ADC_SAR_WAIT_FOR_RESULT);
    a = ADC_SAR_GetResult8() ;
    snprintf(message, N,"a = %d ", a);  
    LCD_Position(0,0);
    LCD_PrintString(message);           ****/
    /*Partie4***
    snprintf(message, N,"pi = %.5f ", pi);
    LCD_Position(0,0);
    LCD_PrintString(message);           ****/
    /*Partie 4.3 : voltmetre (sans UART)*/
    
    /**************************TP5*/
    //V1
    /*
    ADC_SAR_IsEndConversion(ADC_SAR_WAIT_FOR_RESULT);
    valeur  = ADC_SAR_GetResult8();
    tension = ADC_SAR_CountsTo_Volts(valeur);
    snprintf(message, N, "%.2f\r\n", tension);
    UART_PutString(message);
    */
    //V2
    ADC_SAR_IsEndConversion(ADC_SAR_WAIT_FOR_RESULT);
    ADC_SAR_1_IsEndConversion(ADC_SAR_1_WAIT_FOR_RESULT);

    valeur1 = ADC_SAR_GetResult8();
    valeur2 = ADC_SAR_1_GetResult8();

    tension1 = ADC_SAR_CountsTo_Volts(valeur1);
    tension2 = ADC_SAR_1_CountsTo_Volts(valeur2);

    sprintf(message,
        "{\"POT1\": {\"name\": \"POT1\", \"value\": %.2f},"
        "\"POT2\": {\"name\": \"POT2\", \"value\": %.2f}}\r\n",tension1, tension2);
    UART_PutString(message);
    
    
}

/* [] END OF FILE */
