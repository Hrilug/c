#include <stdio.h>
#include <stdint.h>

void exchange(uint8_t *n){
    int l=sizeof(&n);
    printf("Lenth:%d \n",l);
    for (l;l<=0;l--){
        if (n[l]=='\0'){
            n[l]='0';
        }
    }
}

void main()
{
    uint8_t str[2][2];
    exchange(str[0]);
    printf("%x ",str[0]);
    printf("%x ",str[1]);
    printf("%x ",str[2]);
}