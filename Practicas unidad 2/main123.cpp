#include <iostream>
#include <vector>
#include <locale>

using namespace std;

typedef vector<vector<double> >matriz;

void imprimir(const matriz& matriz) {
    int filas = matriz.size();
    int colum = matriz[0].size();

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < colum; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void gaussJordan(matriz& matriz) {
    int filas = matriz.size();
    int colum = matriz[0].size();

    for (int i = 0; i < filas; i++) {
        // Encuentra el pivote
        int filapivote = i;
        for (int j = i + 1; j < filas; j++) {
            if (abs(matriz[j][i]) > abs(matriz[filapivote][i])) {
                filapivote = j;
            }
        }

        // Verificar si el pivote es cero
        if (matriz[filapivote][i] == 0) {
            cout << "El sistema no tiene solución única." << endl;
            return;
        }

        // Intercambia filas
        swap(matriz[i], matriz[filapivote]);

        // Normaliza la fila del pivote
        double pivotElement = matriz[i][i];
        for (int j = i; j < colum; j++) {
            matriz[i][j] /= pivotElement;
        }

        // Elimina los elementos por debajo y por encima del pivote
        for (int j = 0; j < filas; j++) {
            if (j != i) {
                double factor = matriz[j][i];
                for (int k = i; k < colum; k++) {
                    matriz[j][k] -= factor * matriz[i][k];
                }
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "");
    matriz coeficientes(3, vector<double>(4, 0.0));

    cout << "Ingrese los coeficientes de las ecuaciones:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Ecuación " << i + 1 << ":" << endl;
        cout << "Ingrese el coeficiente para X: ";
        cin >> coeficientes[i][0];

        cout << "Ingrese el coeficiente para Y: ";
        cin >> coeficientes[i][1];

        cout << "Ingrese el coeficiente para Z: ";
        cin >> coeficientes[i][2];

        cout << "Ingrese el resultado: ";
        cin >> coeficientes[i][3];

        cout << endl;
    }

    cout << "Matriz de coeficientes ingresada:" << endl;
    imprimir(coeficientes);

    gaussJordan(coeficientes);

    cout << "Solución del sistema de ecuaciones:" << endl;
    cout << "X = " << coeficientes[0][3] << endl;
    cout << "Y = " << coeficientes[1][3] << endl;
    cout << "Z = " << coeficientes[2][3] << endl;

    return 0;
}
