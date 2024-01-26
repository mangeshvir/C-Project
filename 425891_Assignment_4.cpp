 /*
   	Assignment 4
	Name : Mangesh Dattatray Virkar
	Matrikel-Nr: 425891
	E-mail ID: mangeshvirkar95@gmail.com , huc84mof@rhrk.uni-kl.de
	
Programme has been written for the same problem statement as of Assignment no 2 by using Class and Object and making each function as a seperate header file. 

-------------------------------------------------------------------------------------------------------------------------------------------------
Problem : You are a programmer for Converters –R- Us. Your supervisor needs you to write a program that can convert:
Fahrenheit to Celsius 
Celsius to Fahrenheit
Miles to Kilometers
Kilometers to Miles
Depending on what letter is entered, and then enter the value to be converted, do the conversion and then output the results.
------------------------------------------------------------------------------------------------------------------------------------------------------
Solution : Following devloped program allow user to convert the various unit of temperature and distance measurement.  
 
   
*/ 

// Here is a simple program to perform above operations.
 
//In-built Header Files

#include <iostream>          
#include<iomanip>  

using namespace std;

// Now, Let's call the user defined  header files

# include "Celsius_to_Fahrenheit.h"
# include "Fahrenheit_to_Celsius.h"
# include "Kilometers_to_Miles.h"
# include "Miles_to_Kilometers.h"

int main()
{
    char F, C, K, M;              	// User Choices  
  	char choice;  					// Stores User's Choice
	float input;           			// Stores Value of entity to be converted as per the selected choice 
  	char useAgain = 'Y';    		// Rerun the program
  	cout << "This programme can convert temperature from Celsius to Fahrenheit and Vice-versa,also it can convert distance from Mile to Kilometer and vice-versa. What would you like to convert?"<< endl;
	cout <<setprecision(5);
	
	
	
	while ( useAgain == 'Y'|| useAgain == 'y')
	    {
  			cout << "\nPlease choose the operation you would wish to perform.\n" << endl;
			cout << "Press F to convert Celsius to Fahrenheit and press enter.\n";
			cout << "Press C to convert Fahrenheit to Celsius and press enter.\n";
			cout << "Press M to convert Kilometer to Mile and press enter.\n";
			cout << "Press K to convert Mile to Kilometer and press enter.\n\n";
			cout << "Your Choice = ";
    		cin >> choice;
    		
    		
    		if(choice == 'F'|| choice == 'f')                               // Celsius to Fahrenheit
      		    {
				Celsius_to_Fahrenheit o1;                                   // Class object
    			cout << "Please enter the value of temperature in Celsius: " << endl;
    			cin >> input;                                               // Takes value of temperature in Celsius from user and stores it in input variable
    			cout << "You have entered the value of temperature in Celsius is: " << input << endl;
    			o1 = Celsius_to_Fahrenheit(input);                          // Passing temperature in Celsius as an argument to parameterized construcor   
         		}
         		         		
			else if(choice == 'C'|| choice == 'c')                           // Fahrenheit to Celsius 
       			{ 
				 Fahrenheit_to_Celsius o1;                                   // Class object
    			 cout << "Please enter the value of temperature in Fahrenheit: " << endl;
    			 cin >> input;                                               // Takes value of temperature in Fahrenheit from user and stores it in input variable
    			 cout << "You have entered the value of temperature in Fahrenheit is: " << input << endl;
   				 o1 = Fahrenheit_to_Celsius(input);                          // Passing temperature in Fahrenheit as an argument to parameterized construcor
        		}
         		
         		
        	else if(choice == 'M'|| choice == 'm')                            // Kilometer to Miles
      			{ 
         		 Kilometers_to_Miles o1;                                      // Class object
    			 cout << "Please enter the value of distance in Kilometers: " << endl;
    			 cin >> input;                                                // Takes value of distance in Kilometers from user and stores it in input variable
    			 cout << "You have entered the value of distance in Kilometers is: " << input << endl;
    			 o1 = Kilometers_to_Miles(input);                             // Passing distance in Kilometers as an argument to parameterized construcor          
         		}
	
	
			else if(choice == 'K'|| choice == 'k')                             // Miles to Kilometers
      			{ 
        		 Miles_to_Kilometers o1;                                        // Class object
    			 cout << "Please enter the value of distance in Miles: " << endl;
    			 cin >> input;                                                  // Takes value of distance in Miles from user and stores it in input variable
    			 cout << "You have entered the value of distance in Miles is: " << input << endl;
   				 o1 = Miles_to_Kilometers(input);                               // Passing distance in Miles as an argument to parameterized construcor
				}
         		
	
        	else
	    	{
	    		cout <<"\nYou have entered an invalid input."<<endl;
			} 
			
			cout << "\nPress Y to use the converter again, else N or anything else to exit. (Y/N)? ";
			cin >> useAgain;
						 	
    	}
    	cout << "\nThank you for using this converter program.";
    	
    return 0;

}