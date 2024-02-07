#include <iostream>
#include <string>

using namespace std;


int main()
{
   double num1, num2;
   char operation;

   cout << "Enter the first number to calculate: ";
   cin >> num1;

   cout << "\nSelect the operator you are going to use: +, -, * or /: ";
   cin >> operation;

   cout << "\nEnter the second number to calculate: ";
   cin >> num2;



   switch (operation)
   {
   case '+':
      cout << num1 + num2 << endl;
      break;

   case '-':
      cout << num1 - num2 << endl;
      break;

   case '*':
      cout << num1 * num2 << endl;
      break;

   case '/':
      if (num2 != 0)
      {
         cout << num1 / num2 << endl;
      }
      else
      {
         cout << "\nError: Undefined.\n\n";
      }
      break; 

   default: 
      cout << "\nThe operation you are trying to calculate is invalid.\n\n";
   }


   system("pause");
}