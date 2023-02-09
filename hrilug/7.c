#include<stdio.h>

enum booler{
    False,True
}a,b;

void main(){
    a=False;
    b=(enum booler)1;
    printf("%d,%d",a,b);
}