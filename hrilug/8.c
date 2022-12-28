#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct
{
    int id;
    char name[5];
} Airx;

int main()
{
    Airx a;
    Airx b;
    a.id = 1;
    b.id = 2;
    strcpy(a.name, "A");
    strcpy(b.name, "B");

    Airx users[2]={a,b};
    int i=0;
    printf("users-list:");
    while (i<=1){
        printf("(%s,%d)",users[i].name,users[i].id);
    i++;
    }

    //printf("%s,%s", a.name, b.name);
}