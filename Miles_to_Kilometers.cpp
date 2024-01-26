# include <iostream>
using namespace std;

# include "Miles_to_Kilometers.h"

Miles_to_Kilometers::Miles_to_Kilometers()						// Dafault Constructor			
{
    cout << "You have choosen to convert distance from Miles to Kilometers" << endl;
}

Miles_to_Kilometers::Miles_to_Kilometers(float distance)		// Constructor with argument
{
    float result = distance * 1.621371;
    cout << "The value of distance after conversion in Kilometers is: " << result << endl;
}