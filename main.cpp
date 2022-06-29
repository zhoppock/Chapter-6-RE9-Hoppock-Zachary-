// Hoppock, Zachary
// boundsError.cpp
// November 14, 2020
// Program runs an element of an array that is unreachable
// Version #1

#include <iostream>
using namespace std;

int main()
{
  int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << values[10];

  return 0;
}