#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    int idade;

    setlocale(LC_ALL, "Portuguese");
    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade > 0 && idade < 13){
        cout << "infantil" << endl;
    }
    else if (idade >= 13 && idade < 18){
        cout << "adolescente" << endl;
    }
    else if (idade >= 18 && idade < 60){
        cout << "adulto" << endl;
    }
    else {
        cout << "idoso" << endl;
    }

    return 0;
}