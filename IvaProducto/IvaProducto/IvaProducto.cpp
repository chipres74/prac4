// IvaProducto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>	

using namespace std;

int main()
{
	cout << "==========================================================================\n";
	cout << "||Bienvendio, este programa te permite calcular el producto sin iva y el total de iva.||\n";
	cout << "==========================================================================\n";

	float Iva;
	float Costo;
	float Total;

		cout << "||Introduzca precio del producto:                                                      ||\n";
	cin >> Costo;

	Total = Costo * .16;
	Iva = Costo - Total;

	cout << "||El costo del producto sin IVA es: " << Iva << "                                          ||\n";
	cout << "==========================================================================\n";
	cout << "||El IVA es de : " << Total << "                                          ||\n";
	cout << "==========================================================================\n";

	return 0;
}
