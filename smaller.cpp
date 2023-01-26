/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab1A

Wrote a program that that asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include <iostream>
using namespace std;

int main()
{
  int first;
  int second;
  cout << "Enter the first number: " << endl;
  cin >> first;
  cout << "Enter the second number: " << endl;
  cin >> second;
  
  if (first < second)
  {
    cout << "The smaller of the two is " << first << "." << endl;
  }
  
  else 
   {
    cout << "The smaller of the two is " << second << "." << endl;
  }
  return 0;
  }
