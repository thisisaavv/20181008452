#include <iostream>
using namespace std;

float multa_obrero(int);
float seguro_social(int);

int main(int argc, char *argv[]) {
	int piezas_minimas, piezas_fabricadas, piezas_faltantes;
	float multa, sueldo_bruto, sueldo_neto, deduccion_seguro_social;

	piezas_minimas = 200;
	piezas_faltantes = 0;
	multa = 0;

	std::cout << "[ENTRADA] ¿Cuántas piezas fabricó?: \n> ";
	std::cin >> piezas_fabricadas;
	std::cout << "------------------------------------------------------------";


	
	if (piezas_fabricadas >= piezas_minimas)
		sueldo_bruto = piezas_fabricadas * 70;
	else {
		piezas_faltantes = 200 - piezas_fabricadas;
		multa = multa_obrero(piezas_faltantes);
		sueldo_bruto = (piezas_fabricadas * 70) - multa;
		deduccion_seguro_social = seguro_social(sueldo_bruto);
		sueldo_neto = sueldo_bruto - deduccion_seguro_social;
	}

	std::cout << "\n\nCantidad miníma de piezas: " << piezas_minimas;
	std::cout << "\nPiezas fabricadas: " << piezas_fabricadas;
	std::cout << "\nPiezas faltantes: " << piezas_faltantes;
	std::cout << "\nMulta: " << multa;
	std::cout << "\n\nSueldo bruto: " << sueldo_bruto; 
	std::cout << "\nSeguro social: " << seguro_social;
	std::cout << "\nSueldo neto: " << sueldo_neto << "\n";

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
