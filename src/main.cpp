#include <iostream>
#include <locale>

#include "utils/getDigitOnBarcode.cpp"
#include "utils/getSumOfTheBarcodeDigits.cpp"

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  string code;

  cout << "Informe o código de 13 dígitos: ";
  cin >> code;

  int firstDigit = getDigit(code, 0);

  if (firstDigit == 0 || code.length() != 13)
  {
    cout << "Código possui tamanho inválido ou se inicia com zero (0)!";
    return 0;
  }

  int verifyingDigit = getDigit(code, 12);
  int sumOfTheDigits = getSumOfTheDigits(code);
  int barcodeValue = (sumOfTheDigits / 10 + 1) * 10;

  barcodeValue -= sumOfTheDigits;

  if (barcodeValue == 10)
  {
    barcodeValue = 0;
  }

  if (barcodeValue == verifyingDigit)
  {
    cout << "Código confere!";
  }
  else
  {
    cout << "Código não confere!";
  }

  return 0;
}
