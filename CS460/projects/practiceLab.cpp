/****************************************************************************
* Program:
*    Lab 00T2, Practice Lab Submission
*    Brother Jones, CS460
* Author:
*    Alex Shnyrov
* Summary:
*    Program that takes a user input line by line until empty string is
*    entered, and then outputs to the user how many lines started with
*   a capital letter
*****************************************************************************
*****************************************************************************
*
* Changes made to my code for the re-submission:
*   No changes were made
*
*****************************************************************************/


#include <iostream>
#include <string>
#include <istream>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Main function
 * takes a user input line by line until empty string is entered,
 * and then outputs to the user how many lines started with a capital letter
 ***********************************************************************/
int main()
{
   int counter = 0;
   string input;
   do
   {
      cout << "Enter a string: ";
      getline(cin, input);

      if (input.empty())
         break;

      if (isalpha(input[0]) && isupper(input[0]))
         counter++;
   }
   while (true);

   if (counter == 0)
      cout << "No strings starting with an upper case letter were seen." ;
   else if (counter == 1)
      cout << "One string starting with an upper case letter was seen.";
   else
      cout << "You entered " << counter
           << " strings that started with an upper case letter.";
   cout << endl;

   return 0;
}
