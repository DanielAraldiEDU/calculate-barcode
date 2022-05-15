# Calculador de Código de Barras

[![wakatime](https://wakatime.com/badge/user/920a7e43-2969-4212-82ff-1b375685ff58/project/08d18af8-ede0-4b30-bef0-dd3366673a8d.svg)](https://wakatime.com/badge/user/920a7e43-2969-4212-82ff-1b375685ff58/project/08d18af8-ede0-4b30-bef0-dd3366673a8d)

<hr></hr>

Trabalho desenvolvido com intuito de calcular o dígito verificador de um código de barras, certificando se é válido ou não.

1. Para descobrir o dígito verificador deve-se separar os 12 primeiros dígitos lidos da esquerda para direita.

> Exemplo de código de barras: 9782940199617

2. Distribua os 12 primeiros dígitos em um quadro (multiplicando os dígitos ímpares por 3) abaixo da esquerda para a direita, conforme representação abaixo:

> Exemplo de dígitos ímpares que devem ser multiplicados por 3: 7, 2, 4, 1, 9, 1.

3. Calcule a somatória dos resultados.

4. O resultado obtido será divido por 10. Considere como quociente apenas o valor inteiro.

5. Soma-se 1 ao resultado obtido.

6. Multiplica-se o resultado obtido por 10.

7. Para obter o dígito verificador, subtraia o resultado do passo 6 do resultado do passo 3.

8. Caso o resultado do dígito verificador tenha dado um resultado que for múltiplo de 10, basta substituí-lo por zero.

9. Por fim, informe ao usuário que o código de barras está:

- Correto, para os códigos que passarem por todas as verificações;
- Com dígito verificador inconsistente, para os códigos que passarem nos testes de tamanho, mas possuem um erro no dígito verificador;
- Número de dígitos inválido, para os códigos de barras que possuírem mais ou menos do que 13 dígitos.

<hr></hr>

**Obs.**: Para o desenvolvimento do código não poderão ser utilizadas variáveis compostas (arrays) e funções.
