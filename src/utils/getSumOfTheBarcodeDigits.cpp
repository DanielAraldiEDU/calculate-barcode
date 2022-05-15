#include <iostream>

using namespace std;

int getSumOfTheDigits(string barcode)
{
  int sum = 0;

  for (int i = 0; i < barcode.length(); i++)
  {
    if (i != 12)
    {
      if (i % 2 == 0)
      {
        int digit = getDigit(barcode, i);
        sum += digit;
      }
      else
      {
        int digit = getDigit(barcode, i);
        sum += digit * 3;
      }
    }
  }

  return sum;
}