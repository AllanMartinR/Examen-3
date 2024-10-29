
#include <iostream>
using namespace std;

/**esta es la funcion para el factorial si n es menor o igual a 1 devuelve 1
porque el factorial de 1 y 0 es 1, cuando no se cumple esa exepcion se utiliza
la formula que dice que el factorial de un n es igual al n por el factorial de n-1*/
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

/**Esta es la funcion para el banco, deja a los usuarios elegir si quieren consultar,
retirar o no hacer nada, solamente deja retirar dinero si el monto es menor o igual a
la cantidad de dinero que tienen en su cuenta, en este caso 20k*/
void cajeroAutomatico() {
    int saldo = 20000;
    int opcion, retiro;/**se guardan los datos de que opcion realizara y la cantidad del retiro.*/

    do {
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar efectivo" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccinar una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "El saldo actual es: " << saldo <<"$"<< endl;
                break;
            case 2:
                cout << "Ingresa la cantidad a retirar: $";
                cin >> retiro;
                if (retiro <= saldo) {
                    saldo -= retiro;
                    cout << "Retiro Completado con exito. Su saldo actual es: $" << saldo << endl;
                } else {
                    cout << "Saldo insuficiente." << endl;
                }
                break;
            case 3:
                cout << "Saliendo" << endl;
                break;
            default:
                cout << "Opcion invalida, por favor intente de nuevo." << endl;
        }
    } while (opcion != 3);
}

int main() {
    int opcionPrincipal;/**seleccionar que es lo que desea hacer*/

    do {
        cout << "1. Factorial" << endl;
        cout << "2. Cajero Automatico" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcionPrincipal;

        switch (opcionPrincipal) {
            case 1: {
                int numero;
                cout << "Ingrese un numero para calcular su factorial: ";
                cin >> numero;
                cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
                break;
            }
            case 2:
                cajeroAutomatico();
                break;
            case 3:
                cout << "Saliendo" << endl;
                break;
            default:
                cout << "Opción inválida, ingresa una opcion valida." << endl;
        }
    } while (opcionPrincipal != 3);

    return 0;
}
