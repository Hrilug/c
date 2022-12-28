#include <stdio.h>

typedef struct num{
    unsigned char name[];   
    int id;
}Num;


int main(){
    num a;
    a.name="hrilug";
    a.id=666;

    printf("NAME:%s,ID:%d",a.name,a.id);
}
