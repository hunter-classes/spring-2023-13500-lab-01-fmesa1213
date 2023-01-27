/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab1B
Wrote a program that asks the user to input three integer numbers, and prints out the smallest of the three.
*/

#include <iostream>
using namespace std;

int main()
{
  int first;
  int second;
  int third;
  
  cout << "Enter the first number: " << endl;
  cin >> first;
  
  cout << "Enter the second number: " << endl;
  cin >> second;
  
  cout << "Enter the third number: " << endl;
  cin >> third;
  
  
  if ((first < second) && (first < third))
  {
  cout << "The smaller of the three is " << first << endl;
  }

  else if ((second < first) && (second < third))
  {
  cout << "The smaller of the three is " << second << endl;
  }

  else 
  {
  cout << "The smaller of the three is " << third << endl;
  }
  return 0;
}
