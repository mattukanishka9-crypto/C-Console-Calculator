
#include "calculator.h"

#include <iostream>
#include <cmath>

using namespace std ;

void calculator :: setvalues(float num1 , float num2)
{
    value1 = num1 ;
    value2 = num2 ;
}
int choice ;

float calculator :: addition ()
{
    return value1 + value2 ;
}

float calculator :: subtraction ()
{
    return value1 - value2 ;
}

float calculator :: multiplication ()
{
    return value1 * value2 ;
}

float calculator :: division ()
{

    if ( value2 == 0 )
    {
        cout << " \n !! DIVISION BY 0 IS NOT ALLOWED !! " ;
        return 0 ;
    }
    
    return value1 / value2 ;
} 

float calculator :: modulus ()
{
    return fmod ( value1 , value2 ) ;
}

float calculator :: power ()
{
    if ( value1 == 0 && value2 <= 0 )
    {
        cout << " \n !! 0 CANNOT BE RAISED TO ZERO OR NEGATIVE POWER !! " ;
        return 0 ;
    }
    return pow( value1 , value2 ) ;
}

float calculator :: squareroot ()
{
    if ( value1 < 0 )
    {
        cout << " \n !! SQUARE ROOT OF NEGATIVE NUMBER IS NOT ALLOWED !! " ;
        return 0 ;
    }
    
    return sqrt ( value1 ) ;
}


// ADD THIS PART

int main() {
    calculator calc;
    float a, b;

    cout << "=== Console Calculator ===\n\n";
    cout << "Enter First number  : ";
    cin >> a;
    cout << "Enter Second number : ";
    cin >> b;

    calc.setvalues(a, b);

    cout << "\n 1. ADDITION " ;
    cout << "\n 2. SUBTRACTION " ;
    cout << "\n 3. MULTIPLICATION  " ;
    cout << "\n 4. DIVISION " ;
    cout << "\n 5. MODULUS" ;
    cout << "\n 6. POWER " ;
    cout << "\n 7. SQUAREROOT " ;

    cout << "\n ENTER THE CHOICE :  " ;

    cin  >> choice ;

    switch ( choice ) 
    {
        case 1 : 
        cout << "\n RESULT OF ADDITION : " << calc.addition() ;
        break ;

        case 2 :
        cout << "\n RESULT OF SUBTRACTION : " << calc.subtraction() ;
        break ;
        
        case 3 : 
        cout << "\n RESULT OF MULTIPLICATION : " << calc.multiplication() ;
        break ;
    
        case 4 : 
        cout << "\n RESULT OF DIVISION : " << calc.division() ;
        break ;

        case 5 :
        cout << "\n RESULT OF MODULUS : " << calc.modulus() ;
        break ;

        case 6 :
        cout << "\n RESULT OF POWER : " << calc.power() ;
        break ;

        case 7 :
        cout << "\n RESULT OF SQUAREROOT : " << calc.squareroot() ;
        break ;

        default :
        cout << "\n !!! INVALID CHOICE !!! " ;
    }


    cout << "\nPress Enter to exit...\n";
    cin.get();
    cin.get();   // extra get() often needed on Windows

    return 0;
}
