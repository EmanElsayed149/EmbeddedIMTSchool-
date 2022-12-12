/*
*Name     :Eman Elsayed
*Layer    :HAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef  _LCD_INT_H
#define  _LCD_INT_H


/*
*possibility of Argument and return 
*/



/*LCD ROW ID possibility*/
#define H_LCD_ROW0  0
#define H_LCD_ROW1  1

/*LCD COL ID possibility*/
#define H_LCD_COL00 0
#define H_LCD_COL01 1
#define H_LCD_COL02 2
#define H_LCD_COL03 3
#define H_LCD_COL04 4
#define H_LCD_COL05 5
#define H_LCD_COL06 6
#define H_LCD_COL07 7
#define H_LCD_COL08 8
#define H_LCD_COL09 9
#define H_LCD_COL10 10
#define H_LCD_COL11 11
#define H_LCD_COL12 12
#define H_LCD_COL13 13
#define H_LCD_COL14 14
#define H_LCD_COL15 15
/*


*public functions prototypes 
*/
void H_LCD_Vid_Int();
void H_LCD_Vid_Wrt_CHr(u8 Copy_u8_chr);
void H_LCD_Vid_Wrt_Str(u8 *Ptr_u8_str);
void H_LCD_Vid_Wrt_Com(u8 Copy_u8_Com);
void H_LCD_Vid_Clear();
void H_LCD_Vid_GotoRowCol(u8 Copy_u8_Row,u8 Copy_u8_COL);
void H_LCD_Vid_Wrt_Special_CHr(u8 *Ptr_u8_Pattern,u8 Copy_num_pattern,u8 Copy_u8_xpos,u8 Copy_u8_ypos);
void H_LCD_Vid_Pnt_Number(u32 num);

#endif
