#include <stdio.h>

unsigned floatScale2(unsigned uf){
    int sign = (uf & (1 << 31));
    int exp = (uf & 0x7f800000);
    int frac = (uf & 0x007fffff);
    return sign | exp | frac;
}

int main(void){

  printf("%x", floatScale2(0xffffffff));
}