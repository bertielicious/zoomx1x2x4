#include "config.h"
#include "setColumnAddress.h"
/* Overview: function can zoom any 8 x 8 bitmap by 1, 2,3 or 4 times.
 * Input: uint8_t LSbyte, uint8_t MSbyte, uint8_t col, uint8_t zoomFactor
 * Output: struct zoomPix containing a.zoomedByte1, a.zoomedByte2, a.col
 *******************************************************************************************************************/
zoomPix zoomChar(uint8_t unzoomedByte, uint8_t zoomFactor)
{
    zoomPix a;
    uint8_t byteBit7, byteBit6, byteBit5, byteBit4, byteBit3, byteBit2, byteBit1, byteBit0;
    
    if(zoomFactor == 2)
    {
        byteBit0 = (unzoomedByte & 0b00000001); // calculates page 0 zoomed byte, a byte at a time with every function call
        byteBit1 = byteBit0;
        byteBit2 = (unzoomedByte & 0b00000010);
        byteBit3 = byteBit2;
        byteBit4 = (unzoomedByte & 0b00000100);
        byteBit5 = byteBit4;
        byteBit6 = (unzoomedByte & 0b00001000);
        byteBit7 = byteBit6;
        a.zoomedByte0 = (byteBit7<<4) | (byteBit6<<3) | (byteBit5<<3) |  (byteBit4<<2) | (byteBit3<<2) |  (byteBit2<<1) | (byteBit1<<1) | byteBit0;

        byteBit0 = (unzoomedByte & 0b00010000)>>4;    // calculates page 1 zoomed byte, a byte at a time with every function call
        byteBit1 = byteBit0;
        byteBit2 = (unzoomedByte & 0b00100000)>>4;
        byteBit3 = byteBit2;
        byteBit4 = (unzoomedByte & 0b01000000)>>4;
        byteBit5 = byteBit4;
        byteBit6 = (unzoomedByte & 0b10000000)>>4;
        byteBit7 = byteBit6;
 
        a.zoomedByte1 = (byteBit7<<4) | (byteBit6<<3) | (byteBit5<<3) |  (byteBit4<<2) | (byteBit3<<2) |  (byteBit2<<1) | (byteBit1<<1) | byteBit0;
    }
   /* if(zoomFactor == 3)
    {
        byteBit0 = (unzoomedByte & 0b00000001); // calculates page 0 zoomed byte, a byte at a time with every function call
        byteBit1 = byteBit0;
        byteBit2 = (unzoomedByte & 0b00000010);
        byteBit3 = byteBit2;
        byteBit4 = (unzoomedByte & 0b00000100);
        byteBit5 = byteBit4;
        byteBit6 = (unzoomedByte & 0b00001000);
        byteBit7 = byteBit6;
        a.zoomedByte0 = (byteBit7)<<4 | (byteBit6<<3) | (byteBit5<<3) |  (byteBit4<<2) | (byteBit3<<2) |  (byteBit2<<1) | (byteBit1<<1) | byteBit0;

        byteBit0 = (unzoomedByte & 0b00010000)>>4;    // calculates page 1 zoomed byte, a byte at a time with every function call
        byteBit1 = byteBit0;
        byteBit2 = (unzoomedByte & 0b00100000)>>4;
        byteBit3 = byteBit2;
        byteBit4 = (unzoomedByte & 0b01000000)>>4;
        byteBit5 = byteBit4;
        byteBit6 = (unzoomedByte & 0b10000000)>>4;
        byteBit7 = byteBit6;
 
        a.zoomedByte1 = (byteBit7)<<4 | (byteBit6<<3) | (byteBit5<<3) |  (byteBit4<<2) | (byteBit3<<2) |  (byteBit2<<1) | (byteBit1<<1) | byteBit0;
    }*/
    if(zoomFactor == 4)
    {
        byteBit0 = (unzoomedByte & 0b00000001); // calculates page 0 zoomed byte, a byte at a time with every function call
        byteBit1 = byteBit0;
        byteBit2 = byteBit0;
        byteBit3 = byteBit0;
       
        byteBit4 = (unzoomedByte & 0b00000010);
        byteBit5 = byteBit4;
        byteBit6 = byteBit4;
        byteBit7 = byteBit4;
        a.zoomedByte0 = (byteBit7<<4) | (byteBit6<<3) | (byteBit5<<3) |  (byteBit4<<2) | (byteBit3<<2) |  (byteBit2<<1) | (byteBit1<<1) | byteBit0;
       // a.zoomedByte0 = ((byteBit7/8)<<7) | ((byteBit6<<6)/8) | ((byteBit5<<5)/4) |  ((byteBit4<<4)/4) | ((byteBit3<<3)/2) |  ((byteBit2<<2)/2) | ((byteBit1<<1)) | byteBit0;
        
        byteBit0 = (unzoomedByte & 0b00000100); // calculates page 0 zoomed byte, a byte at a time with every function call
        byteBit1 = byteBit0;
        byteBit2 = byteBit0;
        byteBit3 = byteBit0;
       
        byteBit4 = (unzoomedByte & 0b00001000);
        byteBit5 = byteBit4;
        byteBit6 = byteBit4;
        byteBit7 = byteBit4;
        a.zoomedByte1 = (byteBit7<<4) | (byteBit6<<3) | (byteBit5<<3) |  (byteBit4<<2) | (byteBit3<<2) |  (byteBit2<<1) | (byteBit1<<1) | byteBit0;
       // a.zoomedByte1 = ((byteBit7/8)<<7) | ((byteBit6<<6)/8) | ((byteBit5<<5)/4) |  ((byteBit4<<4)/4) | ((byteBit3<<3)/2) |  ((byteBit2<<2)/2) | ((byteBit1<<1)) | byteBit0;
        byteBit0 = (unzoomedByte & 0b00010000)>>4; // calculates page 0 zoomed byte, a byte at a time with every function call
        byteBit1 = byteBit0;
        byteBit2 = byteBit0;
        byteBit3 = byteBit0;
       
        byteBit4 = (unzoomedByte & 0b00100000)>>4;
        byteBit5 = byteBit4;
        byteBit6 = byteBit4;
        byteBit7 = byteBit4;
        a.zoomedByte2 = (byteBit7<<4) | (byteBit6<<3) | (byteBit5<<3) |  (byteBit4<<2) | (byteBit3<<2) |  (byteBit2<<1) | (byteBit1<<1) | byteBit0;
        //a.zoomedByte2 =((byteBit7/8)<<7) | ((byteBit6<<6)/8) | ((byteBit5<<5)/4) |  ((byteBit4<<4)/4) | ((byteBit3<<3)/2) |  ((byteBit2<<2)/2) | ((byteBit1<<1)) | byteBit0;
        byteBit0 = (unzoomedByte & 0b01000000)>>4; // calculates page 0 zoomed byte, a byte at a time with every function call
        byteBit1 = byteBit0;
        byteBit2 = byteBit0;
        byteBit3 = byteBit0;
       
        byteBit4 = (unzoomedByte & 0b10000000)>>4;
        byteBit5 = byteBit4;
        byteBit6 = byteBit4;
        byteBit7 = byteBit4;
        a.zoomedByte3 = (byteBit7<<4) | (byteBit6<<3) | (byteBit5<<3) |  (byteBit4<<2) | (byteBit3<<2) |  (byteBit2<<1) | (byteBit1<<1) | byteBit0;
    }  //a.zoomedByte3 = ((byteBit7/8)<<7) | ((byteBit6<<6)/8) | ((byteBit5<<5)/4) |  ((byteBit4<<4)/4) | ((byteBit3<<3)/2) |  ((byteBit2<<2)/2) | ((byteBit1<<1)) | byteBit0;
       return a;    // returns zoomedByte0 (page0) and zoomedByte1 (page1) and colP0, colP1 to the caller
}
