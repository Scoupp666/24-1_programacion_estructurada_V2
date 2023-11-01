// P016_Captura_de_libros_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 30/10/2023
// Guardar Videojuegos en un arreglo Finito (3 juegos por lo menos).

#include <iostream>
#include <locale.h>
#include <math.h> 
#include <string>


int main()
{
    std::string Juegos[3];
    std::string autor[3];
    std::string Developer[3];
    int Fechaestreno[3]; 
    bool repetir = true;

    do 
    { 
        std::cout << "Ingresa los datos de los juegos \n";
        for (int i = 0; i <= 3; i++)
        {
        if (i >= 1)
        {
            std::cin.ignore();
        }
            std::cout << "Como se llama el juego?" << i + 1 << std::endl; 
            getline(std::cin, Juegos[i]); 
            std::cout << "Quien es su autor?\n";
            getline(std::cin, autor[i]); 
            std::cout << "Quien es el desarrollador?\n";
            getline(std::cin, Developer[i]); 
            std::cout << "Cuando fue su fecha de estreno?\n";
            std::cin >> Fechaestreno[i]; 
        }
        
        std::cout << "\n";

        for (int j = 0; j <= 3; j++)  
        {
            std::cout << "Como se llama el juego?" << Juegos[j] << j + 1 << std::endl;  
            std::cout << "Quien es su autor?" << autor[j] << j + 1 << std::endl; 
            std::cout << "Quien es el desarrollador?" << Developer[j] << j + 1 << std::endl;  
            std::cout << "Cuando fue su fecha de estreno?" << Fechaestreno[j] << j + 1 << std::endl; 
        }
    } while (repetir);
    {
        std::cout << "Deseas repetir el algoritmo? 1.- si, 0.- no \n";
        std::cin >> repetir; 
        system("cls"); 

        }
}

