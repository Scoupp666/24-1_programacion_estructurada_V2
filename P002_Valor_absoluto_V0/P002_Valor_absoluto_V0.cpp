// P002_Valor_absoluto_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 24/9/2023
//Se desea un algoritmo para obtener el valor absoluto de un número

#include <iostream>
#include <math.h>
int main()
{
	int num1;
	int num2 = 0;
	std::cout << "dame 1 numero para saber su valor absoluto\n";
	std::cin >> num1;
	if (num1 > num2)
	{
		std::cout << "el valor absoluto de tu numero es" << num1; 
	}
	else
	{
		num1 = num1 * (-1);
		std::cout << "el valor absoluto de tu numero es" << num1; 
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
