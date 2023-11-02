// P016_Captura_de_libros_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 30/10/2023
// Guardar Videojuegos en un arreglo Finito (3 juegos por lo menos).





#include <iostream>
#include <string>
    

    int main() 
    {
        std::string Juegos[4]; 
        std::string autor[4]; 
        std::string Developer[4]; 
        std::string Fechaestreno[4]; 
        int repetir = 1;

        do {
            std::cout << "Ingresa los datos de los juegos\n";

            for (int i = 0; i < 4; i++) {
                if (i >= 1) {
                    std::cin.ignore();
                }
                std::cout << "Como se llama el juego " << i + 1 << "? ";
                getline(std::cin, Juegos[i]);
                std::cout << "Quien es su autor? ";
                getline(std::cin, autor[i]);
                std::cout << "Quien es el desarrollador? ";
                getline(std::cin, Developer[i]);
                std::cout << "Cuando fue su fecha de estreno? ";
                std::cin >> Fechaestreno[i];
            }

            std::cout << "\n";

            for (int j = 0; j < 4; j++) {
                std::cout << "Detalles del juego " << j + 1 << ":\n";
                std::cout << "Nombre del juego: " << Juegos[j] << ":\n";
                std::cout << "Autor: " << autor[j] << ":\n";
                std::cout << "Desarrollador: " << Developer[j] << ":\n";
                std::cout << "Fecha de estreno: " << Fechaestreno[j] << ":\n"; 
            }

            std::cout << "Deseas repetir el algoritmo? 1 - si, 0 - no\n";
            std::cin >> repetir;
            system("cls");

        } while (repetir == 1);

        return 0;
    }



