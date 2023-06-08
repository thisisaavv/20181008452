#include <iostream>
using namespace std;

float multa_obrero(int);
float seguro_social(int);

int main(int argc, char *argv[]) {
	int piezas_fabricadas, piezas_faltantes;
	float multa, sueldo_bruto, sueldo_neto, descuento_seguro_social;
	piezas_faltantes = 0;
	multa = 0;

	std::cout << "Cuantas piezas frabrico el obrero: ";
	std::cin >> piezas_fabricadas;

	
	if (piezas_fabricadas >= 200)
		sueldo_bruto = piezas_fabricadas * 70;
	else {
		piezas_faltantes = 200 - piezas_fabricadas;
		multa = multa_obrero(piezas_faltantes);
		sueldo_bruto = (piezas_fabricadas * 70) - multa;
		descuento_seguro_social = seguro_social(sueldo_bruto);
		sueldo_neto = 0;
	}

	std::cout << "Sueldo Bruto: " << sueldo_bruto << " el faltante de piezas es " << piezas_faltantes << " y la multa es de " << multa << ".\n";
	std::cout << "Seguro Social: " << seguro_social << "\n";
	std::cout << "Sueldo Neto: " << sueldo_neto << "\n";

	return 0;
}

float multa_obrero(int faltante) {
	float respuesta;
	respuesta = faltante * 30;

	return respuesta;
}

float seguro_social(int sueldo) {
	return sueldo;
}
