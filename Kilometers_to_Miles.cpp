# include <iostream>
using namespace std;

# include "Kilometers_to_Miles.h"

Kilometers_to_Miles::Kilometers_to_Miles()						// Dafault Constructor			
{
    cout << "You have choosen to convert distance from Kilometers to Miles" << endl;
}

Kilometers_to_Miles::Kilometers_to_Miles(float distance)		// Constructor with argument
{
    float result = distance * 0.621371;
    cout << "The value of distance after conversion in Miles is: " << result << endl;
}