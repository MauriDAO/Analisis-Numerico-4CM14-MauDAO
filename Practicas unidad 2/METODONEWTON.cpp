#include <iostream>
#include <cmath>
using namespace std;

double funcion(double x) {
    return pow(x,3)+ 2*pow(x,2)-x - 25; 
}

double derivada(double x) {
    double h = 0.0001;
    return (funcion(x + h) - funcion(x)) / h;
}

double metodoNewton(double x0, double error) {
    double x = x0;
    int iter = 0;

    while (abs(funcion(x)) > error) {
        x = x - (funcion(x) / derivada(x));
        iter++;
        if (abs(funcion(x)) <= error) {
            cout << "Se alcanzo la convergencia en la iteracion " << iter << "." << endl;
        }
    }
	return x;
}

int main() {
    double x0; 
    double error; 

	cout << "***METODO DE NEWTON***\n";
    cout <<"\nIngrese x0: ";
    cin >> x0;

    cout << "Ingrese la tolerancia: ";
    cin >> error;


    double raiz = metodoNewton(x0, error);
    cout << "La raiz aproximada es: " << raiz << endl;

    return 0;
}




