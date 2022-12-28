#include <iostream>


class Airx
{
    public: 
        char pin;
        char name;

    void init(char pin_,char name_);
};

void Airx::init(char pin_,char name_)
{
  pin = pin_;
  name = name_;
}

int main(){
    Airx a;
    a.init("A2","ADC1");
    printf("%s",a.pin);    
}
