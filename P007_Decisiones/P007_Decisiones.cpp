// P007_Decisiones_(IF-ELSE-SWITCH CASE)_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 2/10/2023
// Hacer un programa que te solicite el numero de peleadores en una arena y te de el número de batallas que se tendrán para obtener a 1 ganador dependiendo del sistema de combate. 1.- Royal Rumble 2.- Eliminatoria directa 3.- Grupos, semifinal y final

#include <iostream>
#include <locale> 
#include <string>

int main()
{
	setlocale(LC_ALL, "es_MX . UTF-8");
	int opc = 0;
	int num1 = 0;
	std::cout << " que opcion escoges? 1.- Royal Rumble, 2.- Eliminatoria directa, 3.- Semifinal y final ";
	std::cin >> opc;
	switch (opc)
	{
	case 1:
		std::cout << " Has escogido Royal Rumble, cuantos peleadores habra en la pelea?";
		std::cin >> num1;
		std::cout << " La cantidad de peleas para llegar a un ganador es: " << num1 - 1;
		break;
	case 2:
		std::cout << "Has escogido Eliminatoria directa, cuantos peleadores habra en la pelea?";
		std::cin >> num1;
		std::cout << " La cantidad de peleas para llegar a un ganador es: " << num1 - 1;
		break;
	case 3:
		std::cout << " Has escogido Semifinal y final ";
		std::cin >> num1;
		std::cout << " La cantidad de rondas para llegar a un ganador es: " << num1 - 1;
		break;
	default:
		std::cout << " esa opcion la conozco\n";
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
