#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  long long int codigo, somaInicial, somaFinal, digito01, digito02, digito03, digito04, digito05, digito06, digito07, digito08, digito09, digito10, digito11, digito12, digito13;

  cout << "Informe o código de 13 dígitos: ";
  cin >> codigo;

  digito13 = codigo % 10;
  digito12 = codigo / 10 % 10;
  digito11 = codigo / 100 % 10;
  digito10 = codigo / 1000 % 10;
  digito09 = codigo / 10000 % 10;
  digito08 = codigo / 100000 % 10;
  digito07 = codigo / 1000000 % 10;
  digito06 = codigo / 10000000 % 10;
  digito05 = codigo / 100000000 % 10;
  digito04 = codigo / 1000000000 % 10;
  digito03 = codigo / 10000000000 % 10;
  digito02 = codigo / 100000000000 % 10;
  digito01 = codigo / 1000000000000 % 10;

  digito12 = digito12 * 3;
  digito10 = digito10 * 3;
  digito08 = digito08 * 3;
  digito06 = digito06 * 3;
  digito04 = digito04 * 3;
  digito02 = digito02 * 3;

  somaInicial = digito01 + digito02 + digito03 + digito04 + digito05 + digito06 + digito07 + digito08 + digito09 + digito10 + digito11 + digito12;

  somaFinal = somaInicial / 10;
  somaFinal = somaFinal + 1;
  somaFinal = somaFinal * 10;
  somaFinal = somaFinal - somaInicial;

  if (somaFinal == digito13)
  {
    cout << "Código confere!";
  }
  else
  {
    cout << "Código não confere!";
  }

  return 0;
}
