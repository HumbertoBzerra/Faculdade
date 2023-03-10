#include <iostream>
#include <math.h>
using namespace std;

void soma(){

    int n1, n2, res;

    cout << "Esse programa vai somar dois numeros." << endl;
    cout << "Digite o 1 numero" << endl;
    cin >> n1;
    cout << "Digite o 2 numero" << endl;
    cin >> n2;

    res = n1 + n2;

    cout << "O Resultado e: " << res << endl;

    system("pause");

}

void tabuada(){
  
    double n1;
  
    cout << "Digite um numero, o programa vai fazer sua tabuada. " << endl;
    cin >> n1;
    cout << "-------------------------" << endl;
    cout << n1 << " x 1 = " <<n1*1 << endl <<n1 << " x 2 = "<< n1*2 << endl <<n1 << " x 3 = " << n1*3 << endl <<n1 << " x 4 = " << n1*4 << endl << n1 << " x 5 = " << n1*5 << endl << n1 << " x 6 = " << n1*6 << endl << n1 << " x 7 = "
    << n1*7 << endl<< n1 << " x 8 = " <<  n1*8 << endl << n1 << " x 9 =  " << n1*9 << endl << n1 << " x 10 = " << n1*10 << endl;

    cout << "-------------------------\n\n";
    
    system("pause");

}

void calculado(){

    double n1, n2, n3, n4;

    cout << "Esse programa vai calcular a pontecia de expoente 2 dos numeros digitados\n";
    cout << "------------------------------------------\n";
    cout << "Digite o 1 Valor\n";
    cin >> n1;
    cout << "Digite o 2 Valor\n";
    cin >> n2;
    cout << "Digite o 3 Valor\n";
    cin >> n3;
    cout << "Digite o 4 Valor\n\n\n";
    cin >> n4;

    cout << n1 << "^2= " << *(long *)&&pow(n1, 2) << "\n" << n2 << "^2= " << pow(n2, 2) << "\n" << n3 << "^2= " << pow(n3, 2) << "\n" << n4 << "^2= " << pow(n4, 2) << "\n\n";

    system("pause");

}


int main(){

    calculado();

   return 0;
}