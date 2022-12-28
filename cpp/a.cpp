#include <stdio.h>
#include<iostream>

class classmates
{
public:
    char name;
    int age;
    int height;
    int weight;

    void set(char _name, int _age, int _height, int _weight);
    double sum(void);
};

void classmates::set(char _name, int _age, int _height, int _weight)
{
    name = _name;
    age = _age;
    height = _height;
    weight = _weight;
}
double classmates::sum(void)
{
    double sum ;
    sum = height/weight;
    return sum;
}

int main()
{
    classmates a;
    a.set('a', 18, 168, 120);
    printf("%f",a.sum());
    return 0;
}