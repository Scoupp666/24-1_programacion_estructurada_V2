// P012_Bucles_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 11/10/2023
// Ciclo de juego infinito gastar 3 vidas, preguntar al usuario si quiere continuar
// Contar hasta 100

#include <iostream>
#include <locale.h>
#include <math.h>

int main()
{ 
    int i = 0;
    int hp = 3;
    bool respuesta = true;
    bool repetir = true; 
    std::cout << "contesta 1 para si y 0 para no\n";

    while (hp > 0)
    {
    std::cout << " (1/0)\n";
    std::cin >> respuesta;
    if (respuesta == true)
    {
        std::cout << "Continuas\n";
    }
    else
    {
        hp--;
        std::cout << "Te quedan:" << hp << " Vidas\n";
    }

    }
        for (int i = 0; i <= 100; i = i + 1) 
        {
            std::cout << i << std::endl; 
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
