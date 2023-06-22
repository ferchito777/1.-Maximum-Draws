#include <iostream>

using namespace std;

int calcularMinimoDibujos(int numColoresCalcetines) {
    // Se necesita remover numColoresCalcetines + 1 calcetines para garantizar un par coincidente
    return numColoresCalcetines + 1;
}

int main() {
    int numCasosPrueba;
    cin >> numCasosPrueba; // Lee el numero de casos de prueba

    for (int i = 0; i < numCasosPrueba; i++) {
        int numColoresCalcetines;
        cin >> numColoresCalcetines; // Lee el numero de colores de calcetines

        int resultado = calcularMinimoDibujos(numColoresCalcetines);

        cout << resultado << endl;
    }

    return 0;
}

