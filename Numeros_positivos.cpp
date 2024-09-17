#include <iostream>

using namespace std;

int main(void) // pq esse void ?
{
    double  numero_escrito;
    double numeros_guardados=0;
    int  escritas=0;
    do{
        cout << "Escreva um número:";
        cin >> numero_escrito;
        if(numero_escrito >=0.0){
        numeros_guardados += numero_escrito;
        escritas ++;
        }
    } while (numero_escrito >=0.0);

     if (escritas==0)
  {
    // cerr: stream normalmente utilizada para msgs de erro
    cerr << "Nao foi digitado nenhum valor. Impossivel calcular media"
         << endl;
    return 1; // pq retornar 1?

  }

    cout << "A média dos valores positivos e nulos é:";
    cout << (numeros_guardados/escritas);


    return 0;
}
