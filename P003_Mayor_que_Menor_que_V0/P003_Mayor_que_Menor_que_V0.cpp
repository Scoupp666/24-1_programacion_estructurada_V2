// P002_Mayor_que_Menor_que_V0.cpp 
// Diego Delfin Garibi, zap994, 22/09/2023 
// Se desea un algoritmo para obtener el valor mayor y el valor menor

#include <iostream>
#include <math.h>
int main()
{
    int num1 = 0;
    int num2 = 0;
    std::cout << "usuario dame un numero\n";
    std::cin >> num1;
    std::cout << "usuario dame otro numero\n";
    std::cin >> num2;
    if (num1 > num2)
    {
        std::cout << num1 << " es mayor que " << num2;
    }
    else {
        std::cout << num1 << " es menor que " << num2;
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