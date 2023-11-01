// P016_Captura_de_libros_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 30/10/2023
// Guardar Videojuegos en un arreglo Finito (3 juegos por lo menos).

#include <iostream>
#include <locale.h>
#include <math.h> 
#include <string>


int main()
{
    std::string J1, j2, j3;
    std::string Juegos[3] = { "Halo", "Subnautica", "Fortnite" };
    std::string autor[3] = { "Bungie", "UWE", "Tim Sweeney" };
    std::string Developer[3] = { "Bunguie", "UWE", "Epic Games" };
    bool repetir = true;
    int Fechaestreno[3] = { 2001, 2018, 2017 }; 
    int opc = 0;
    
    std::cout << "Ingresa los datos de los juegos \n";
    for (int i = 0; i <= 3; i++)
    {
        std::cout << "Como se llama el primer juego? \n";
        getline(std::cin, Juegos[i]); 
        std::cout << "Quien es su autor? \n";
        getline(std::cin, autor[i]);
        std::cout << "Quien es el desarrollador? \n";
        getline(std::cin, Developer[i]);
        std::cout << "Cuando fue su fecha de estreno? \n";
        std::cin >> Fechaestreno[i]; 
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
