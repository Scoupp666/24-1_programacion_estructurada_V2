// P015_Batalla_Pokemon_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 24/10/2023
// Realizar un simulador de batalla Pokémon.

#include <iostream>
#include <windows.h>
#include <locale.h>
#include <math.h> 
#include <string>
#include <cstdlib> 

int main()
{
    int pikachu; 
    int charizard; 
    std::string respuesta;
    bool pokemon;
    bool repetir = true;
    int random = 0;
    int hp1 = 2;
    int hp2 = 2;
    int ataque = 1;
    int defensa = 1;
    int opc = 0;
    std::cout << "Que pokemon escoges (1).- pikachu, (0).- charizard\n";
    std::cin >> pokemon;
    while (repetir)
    {
        if (pokemon)
        {
            std::cout << "Has escogido a pikachu, vas a pelear contra charizard\n";
        }
        else
        {
            std::cout << "Has escogido a charizard, vas a pelear contra pikachu\n";
        }
        std::cout << "Ambos tienen 5 vidas, valorenlas\n";
        std::cout << "Puedes escoger atacar o defender\n";
         
        switch (opc) 
        {
        case 1:
            std::cout << "Ambos tienen 5 vidas, valorenlas\n";

            std::cout << "atacas o defiendes?\n";
            std::cin >> respuesta;
            if (ataque == true)
            {
                std::cout << "Has atacado a charizard\n";
                std::cout << "Esperando...\n";
                std::cout << "Charizard ha perdido una vida\n";
                hp2 = charizard - ataque;
                std::cout << "Has ganado\n";
            }
            else
            {
                std::cout << "Has escogido defensa\n";
                std::cout << "Espera...\n";
                std::cout << "Tu salud se mantiene\n";
            }
            break;

        case 2:

            std::cout << "atacas o defiendes?\n";
            std::cin >> respuesta;

            std::cout << "Has escogido defensa\n";
            std::cout << "Espera...\n";
            std::cout << "Charizard decidio atacarte";
            std::cout << "Espera...\n";
            std::cout << "Tu salud se mantiene\n";
            break;
        }
        std::cout << "Deseas repetir el algoritmo? 0.- NO 1.- SI: ";
        std::cin >> repetir; 
        system("cls");
    }
    return 0; 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
