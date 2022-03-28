#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  long long int codigo, somaDosDigitos, soma, D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12;
  string codigoComoString;

  cout << "Informe o código de 13 dígitos: ";
  cin >> codigo;

  codigoComoString = to_string(codigo);

  if (codigoComoString.length() != 13)
  {
    cout << "Código possui tamanho inválido!";

    return 0;
  }

  D0 = codigo % 10;
  D1 = codigo / 10 % 10;
  D2 = codigo / 100 % 10;
  D3 = codigo / 1000 % 10;
  D4 = codigo / 10000 % 10;
  D5 = codigo / 100000 % 10;
  D6 = codigo / 1000000 % 10;
  D7 = codigo / 10000000 % 10;
  D8 = codigo / 100000000 % 10;
  D9 = codigo / 1000000000 % 10;
  D10 = codigo / 10000000000 % 10;
  D11 = codigo / 100000000000 % 10;
  D12 = codigo / 1000000000000 % 10;

  D1 = D1 * 3;
  D3 = D3 * 3;
  D5 = D5 * 3;
  D7 = D7 * 3;
  D9 = D9 * 3;
  D11 = D11 * 3;

  somaDosDigitos = D1 + D2 + D3 + D4 + D5 + D6 + D7 + D8 + D9 + D10 + D11 + D12;

  soma = ((somaDosDigitos / 10) + 1) * 10;
  soma = soma - somaDosDigitos;

  if (soma == D0 || (soma >= 10 && soma % 10 == D0))
  {
    cout << "Código confere!";
  }
  else
  {
    cout << "Código não confere!";
  }

  return 0;
}
