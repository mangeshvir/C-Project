# include <iostream>
using namespace std;

# include "Celsius_to_Fahrenheit.h"

Celsius_to_Fahrenheit::Celsius_to_Fahrenheit()						// Dafault Constructor			
{
    cout << "You have choosen to convert temperature from Celsius to Fahrenheit" << endl;
}

Celsius_to_Fahrenheit::Celsius_to_Fahrenheit(float temperature)				// Constructor with argument
{
    float result = (temperature * 9 / 5) + 32;
    cout << "The value of temperature after conversion in Fahrenheit is: " << result << endl;
}