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
    int pikachu; //Variable para pikachu vida
    int charizard; //Variable para charizard vida
    std::string respuesta; //cadena de caracteres para poder responder
    bool pokemon; //Variable que engloba a los 2 pokemones para uasr en if
    bool repetir = true;
    int random = 0; //Randomizador, sin uso
    int hp1 = 2; //Variable de vida para pikachu
    int hp2 = 2; //Variable de vida para charizard
    int ataque = 1; // puntos de ataque
    int defensa = 1; //puntos de defensa
    int opc = 0;
    while (repetir)
    {
        //en esta parte se escoge ek pokemon a usar
        std::cout << "Que pokemon escoges (1).- pikachu, (0).- charizard\n";
        std::cin >> pokemon;
        //una vez escogido el pokemon sigue la pelea, usando bucle while, switch-case y if-else
        if (pokemon == true)
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
}
