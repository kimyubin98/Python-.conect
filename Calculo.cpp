#include <iostream>
#include <string>

using namespace std;

float calcularTotal(float cantidad, float precioUnitario, char unidad) {
    if (unidad == 'k') {
        cantidad *= 1000; // Convertir kilos a gramos
    }
    return cantidad * precioUnitario;
}

int main() {
    float cantidad, precioUnitario;
    char unidad;

    // Solicitar al usuario la cantidad y unidad de medida (gramos o kilos)
    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;
    cout << "¿La cantidad es en gramos o kilos? (g/k): ";
    cin >> unidad;

    // Convertir a minúscula
    unidad = tolower(unidad);

    // Solicitar el precio unitario del producto
    cout << "Ingrese el precio unitario del producto: ";
    cin >> precioUnitario;

    // Calcular el monto total a pagar
    float totalPagar = calcularTotal(cantidad, precioUnitario, unidad);

    // Mostrar el monto total a pagar
    cout << "El monto total a pagar es: " << totalPagar << endl;

    return 0;
}
