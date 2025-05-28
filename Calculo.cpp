#include <iostream>
#include <cmath>
// Christian Uriel Gonzalez Flores 362423170
using namespace std;

int main() {
	double cantidad_invertir, interes_mensual;
	int meses_invertir;
	
	// Pedir datos al usuario
	cout << "Ingrese la cantidad a invertir: ";
	cin >> cantidad_invertir;
	
	cout << "Ingrese el interes compuesto mensual (en porcentaje): "; 
	cin >> interes mensual;
	
	cout << "Ingrese el numero de meses a invertir: ";
	cin >> meses_invertir;
	
	// Convertir el interes mensual a decimal
	interes_mensual /= 100;
	
	// Mostrar el capital al final de cada año
	for (int i = 1; i <= meses_invertir; i++) {
		// Calcular el capital al final del año i usando la fÃ3rmula del interÃ©s compuesto 
		double capital = cantidad_invertir * pow(1 + interes_mensual, 12 * i);
		cout << "Capital al final del año " << i << ": " << capital << endl;
	}
	
	return 0;
}
