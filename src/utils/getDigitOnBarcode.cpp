#include <iostream>

using namespace std;

int getDigit(string barcode, int index)
{
  char digit = barcode.at(index);
  int digitAsInt = (int)digit - 48;
  return digitAsInt;
}