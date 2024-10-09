#include <iostream>

using namespace std;

/*

Bool: em geral, utiliza 1 byte da memória e os valores True ou False.

Char: em geral, utiliza 1 byte da memória, permite armazenar um caractere ou uma cadeia de caracteres.

Int: em geral, utiliza 4 bytes de memória e armazena números inteiros (sem casas decimais) com valores que vão de -2.147.483.648 a 2.147.483.647.

Double: em geral. utiliza 8 bytes de memória e armazena números com menos de 15 casas decimais com valores que vão de 2.e-308 a 1.79e308.

Float: em geral, utiliza 4 bytes de memória e armazena números com menos de seis casas decimais com valores que vã de 1.2e-308 a 3.4e-38.

Obs: Strings

String: é um tipo de dado (uma classe) que serve para armazenar cadeias de caracteres, ou texto.

O tamanho de memória ocupado por uma string depende da quantidade de caracteres e da codificação usada. Em geral:

Cada caractere em uma string ocupa múltiplos bytes, dependendo da codificação.

UTF-16 (padrão em muitas implementações de strings, como no .NET e Java) utiliza 2 bytes por caractere, mas caracteres especiais podem ocupar mais (até 4 bytes).

UTF-8 (usado amplamente na web e em várias linguagens como Python e JavaScript) utiliza 1 a 4 bytes por caractere, dependendo do caractere. A maioria dos caracteres ASCII (0-127) ocupa 1 byte, enquanto outros caracteres podem ocupar até 4 bytes.
 
Além disso, strings podem ter overhead (custo adicional) de armazenamento para gerenciar o objeto em si, como:

Ponteiros e metadados que mantêm o comprimento da string.

Encoding metadata, dependendo da linguagem ou framework.

Como resultado, uma string simples de 10 caracteres ASCII em UTF-16 pode ocupar aproximadamente 20 bytes, enquanto em UTF-8 pode ocupar 10 bytes.

*/

int main(){
    int inteiro = 5;
    cout << inteiro << endl;

    float real;
    real = 5.2;
    cout << real << endl;

    double real_dois;
    real_dois = 5.2e99;
    cout << real_dois << endl;

    bool booleano;
    booleano = false;
    cout << booleano << endl;

    char letra;
    letra = 'b';
    cout << letra << endl;

    string palavra;
    palavra = "bola";
    cout << palavra << endl;

    return 0;
}