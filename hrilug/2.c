#include <stdio.h>

int main(){
    unsigned char str1[]="hello world";
    unsigned char str2[]="helloworld";

    printf("%d,%d\n",sizeof(str1),sizeof(str2));
    
}