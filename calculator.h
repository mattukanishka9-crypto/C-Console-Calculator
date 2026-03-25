#ifndef CALCULATOR_H 
#define CALCULATOR_H

#include <iostream>
#include <cmath>

class calculator 
{
    private :

    float value1 , value2 ;

    public :

    void setvalues ( float num1 , float num2 ) ;
    float addition () ;
    float subtraction () ; 
    float multiplication () ;
    float division () ;
    float modulus () ;
    float power () ;
    float squareroot () ;

} ;

#endif