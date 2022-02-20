/*return the address of the first array selected to main() using an int pointer*/

#include "config.h"
int*  selectDigit(uint8_t digit)
{
    static const int zero[8] = {0x00,0x7e,0xe1,0x91,0x89,0x85,0x7e,0x00};   // static definition as address of array passed back to caller
    static const int uno[8] = {0x00,0x84,0x82,0xff,0x80,0x80,0x00,0x00};   // after the function has been left. static effectively keeps the 
    static const int dos[8] = {0x00,0xe2,0x91,0x91,0x89,0x89,0xc6,0x00};    // the array address alive even when we have left the function
    static const int treis[8] = {0x00,0x42,0x81,0x89,0x89,0x89,0x76,0x00};
    //static const int treis[8] = {0x00,0x3C,0x04,0x08,0x10,0x0C,0x24,0x18};
    static const int cuatro[8] = {0x10,0x18,0x14,0x92,0xff,0x90,0x10,0x00};
    static const int cinco[8] = {0x00,0x47,0x89,0x89,0x89,0x89,0x71,0x00};
    static const int seis[8] =  {0x00,0x7c,0x8a,0x89,0x89,0x89,0x70,0x00};
    static const int siete[8] = {0x00,0x03,0x01,0xf1,0x09,0x05,0x03,0x00};
    static const int ocho[8] = {0x00,0x76,0x89,0x89,0x89,0x89,0x76,0x00};
    static const int nueve[8] = {0x00,0x06,0x89,0x89,0x89,0x49,0x3e,0x00};
    static const int F[8] = {0x00, 0xfe, 0x11,0x11,0x11,0x01,0x00,0x00};
    static const int T[8] = {0x00, 0x00, 0x02,0x02,0xfe,0x02,0x02,0x00};
    static const int d[8] = {0x00, 0x00, 0x00,0x60,0x60,0x00,0x00,0x00};
    switch (digit)
    {
        case 0:
            return zero;    // return a pointer to the address of zero or uno or...nueve arrays
            break;
            
        case 1:
            return uno;
            break;
            
        case 2:
            return dos;
            break;
            
        case 3:
            return treis;
            break;
            
        case 4:
            return cuatro;
            break;
            
        case 5:
            return cinco;
            break;
            
        case 6:
            return seis;
            break;
            
        case 7:
            return siete;
            break;
            
        case 8:
            return ocho;
            break;
            
        case 9:
            return nueve;
            break;
            
        case 'F':
            return F;
            break;
            
        case 'T':
            return T;
            break;
            
        case 'd':
            return d;
            break;
            
    }
}
