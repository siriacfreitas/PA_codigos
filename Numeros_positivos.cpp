#include <iostream>

using namespace std;

int main()
{
    float  numero_escrito;
    float numeros_guardados=0;
    int  escritas=0;
    do{
        cout << "Escreva um número:";
        cin >> numero_escrito;
        if(numero_escrito >=0){
        numeros_guardados += numero_escrito;
        escritas ++;
        }
    } while (numero_escrito >=0);
    cout << "A média dos valores positivos e nulos é:";
    cout << (numeros_guardados/escritas);

    return 0;
}
