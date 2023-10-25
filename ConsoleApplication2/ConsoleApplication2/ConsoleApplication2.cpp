// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <windows.h>
#include <locale.h>
#include <math.h> 
#include <string>

int main()
{
    std::string pikachu;
    std::string charizard;
    std::string respuesta;
    bool pokemon;
    bool repetir = true;
    int hp = 5;
    int ataque = 1;
    int defensa = 1;
    int opc = 0;
    std::cout << "Que pokemon escoges (1).- pikachu, (0).- charizard\n";
    std::cin >> pokemon;

    if (pokemon)
    {
        std::cout << "Has escogido a pikachu, vas a pelear contra charizard\n";
    }
    else
    {
        std::cout << "Has escogido a charizard, vas a pelear contra pikachu\n";
    }
    std::cout << "Ambos tienen 5 vidas, valorenlas\n";

    std::cout << "atacas o defiendes?\n";
    std::cin >> respuesta;
    switch (opc)
    {
    case 1:
        if (ataque == true) 
        {
            std::cout << "Has atacado a charizard\n";
            std::cout << "Esperando...\n";
            std::cout << "Charizard ha perdido una vida\n";
        }
        else
        {
            std::cout << "Charizard ha decidido atacarte pero te has defendido\n";
            std::cout << "Espera...\n";
            std::cout << "No has perdido vida\n";
        }
        break; 
    }
    case 2:
    {
        if (defensa == true)
    }
    std::cout << "ganaste\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
