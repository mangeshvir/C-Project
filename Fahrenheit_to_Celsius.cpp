# include <iostream>
using namespace std;

# include "Fahrenheit_to_Celsius.h"

Fahrenheit_to_Celsius::Fahrenheit_to_Celsius()						// Dafault Constructor			
{
    cout << "You have choosen to convert temperature from Fahrenheit to Celsius" << endl;
}

Fahrenheit_to_Celsius::Fahrenheit_to_Celsius(float temperature)		// Constructor with argument
{
    float result = (temperature - 32) * 5/9;
    cout << "The value of temperature after conversion in Celsius is: " << result << endl;
}