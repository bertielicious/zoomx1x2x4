 #include "config.h"
#include "selectDigit.h"
#include "oLedWrite.h"
void write8x8ToOled(uchar numeral)// numeral is the 0 to 9 numeral needing to be displayed on the oLed display
{                                               // *number is a pointer holding the start address of the 8x8 bit map selected
   /* int i;
    int byteBit7, byteBit6, byteBit5, byteBit4, byteBit3, byteBit2, byteBit1, byteBit0;
    int *number;
    
        number = selectDigit(numeral);    // call function selectDigit which selects the correct 8x8 bit map array for each value of j, and returns the address of the first element of the  bit map array to pointer *number
        for (i = 0; i < 8; i++)     // write the selected 8x8 bit map array to the display, using pointer *number which contains the 1st element of the bit map array eg array[0]]
        {
            oLedWrite(SH1106_WRITE_ADDRESS_COMMAND, DISPLAY_DATA_ONE_CTRL_BYTE_DATA_BYTES_TO_FOLLOW, *number);// write the first array element to the display
            number++; // write the 2nd - 8th element of the array to the display
        }*/
}