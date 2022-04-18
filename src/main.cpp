#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  // Declaração de variáveis.
  long long int codigo;
  int somaDosDigitos, soma, D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12;

  cout << "Informe o código de 13 dígitos: ";
  cin >> codigo;

  /*
    Atribui o valor de um determinado caracter do código
    para um determinado dígito. Obs.: O D0 corresponde
    ao 13º dígito do código e o D1 ao 12º dígito, assim
    por diante.
  */
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

  // Verifica o tamanho do código informado.
  if (D12 == 0 || codigo / 1000000000000 >= 10)
  {
    cout << "Código possui tamanho inválido ou se inicia com dígito zero!";

    return 0;
  }

  // Multiplicação dos dígitos ímpares do código por 3.
  D1 = D1 * 3;
  D3 = D3 * 3;
  D5 = D5 * 3;
  D7 = D7 * 3;
  D9 = D9 * 3;
  D11 = D11 * 3;

  somaDosDigitos = D1 + D2 + D3 + D4 + D5 + D6 + D7 + D8 + D9 + D10 + D11 + D12;

  soma = (somaDosDigitos / 10 + 1) * 10;
  soma = soma - somaDosDigitos;

  // Atribui zero a varíavel soma, caso a mesma seja igual a 10.
  if (soma == 10)
  {
    soma = 0;
  }

  // Verifica se o valor da soma é igual ao dígito verificador.
  if (soma == D0)
  {
    cout << "Código confere!";
  }
  else
  {
    cout << "Código não confere!";
  }

  return 0;
}
