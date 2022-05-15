#include <iostream>

using namespace std;

int getSumOfTheDigits(string barcode)
{
  int sum = 0;

  for (int i = 0; i < barcode.length(); i++)
  {
    if (i != 12)
    {
      int digit = getDigit(barcode, i);
      
      if (i % 2 == 0)
      {
        sum += digit;
      }
      else
      {
        sum += digit * 3;
      }
    }
  }

  return sum;
}