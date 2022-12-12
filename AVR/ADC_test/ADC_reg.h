/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef _ADC_REG_H
#define _ADC_REG_H

/*ADC MultiplexerSelection Register ADMUX*/
#define    ADMUX       *((volatile u8 *) 0x27)


/* ADC Control andStatus Register ADCSRA */
#define    ADCSRA      *((volatile u8 *) 0x26)

/*The ADC Data Register ADCL and ADCH*/
#define    ADCL        *((volatile u8 *) 0x24)
#define    ADCH        *((volatile u8 *) 0x25)

/* Special FunctionIO Register  SFIOR */
#define    SFIOR       *((volatile u8 *) 0x50)

#define    ADC_DATA    *((volatile u16 *) 0x24)


/*bits in ADMUX Register */
#define     REFS1       7      /*   voltage Reference Selection Bits          */
#define     REFS0       6      /*   voltage Reference Selection Bits          */
#define     ADLAR       5      /*   ADC Left Adjust Result                    */
#define     MUX4        4      /*   Analog Channel and Gain Selection Bits    */
#define     MUX3        3      /*   Analog Channel and Gain Selection Bits    */
#define     MUX2        2      /*   Analog Channel and Gain Selection Bits    */
#define     MUX1        1      /*   Analog Channel and Gain Selection Bits    */
#define     MUX0        0      /*   Analog Channel and Gain Selection Bits    */

/*bits in ADCSRA  Register */
#define     ADEN         7      /*       ADC Enable                           */
#define     ADSC         6      /*       ADC Start Conversion                 */
#define     ADATE        5      /*       ADC Auto Trigger Enable              */
#define     ADIF         4      /*       ADC Interrupt Flag                   */
#define     ADIE         3      /*       ADC Interrupt Enable                 */
#define     ADPS2        2      /*       ADC Prescaler Select Bits            */
#define     ADPS1        1      /*       ADC Prescaler Select Bits            */
#define     ADPS0        0      /*       ADC Prescaler Select Bits            */


#endif
