// P014_Bucles_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 14/10/2023
// Contar desde 1000 a 0 con los 3 ciclos
// Contar hasta 100 lento
// Contar hasta 10x10

#include <iostream>
#include <windows.h>
#include <locale.h>
#include <math.h> 
#include <string> 


int main()
{
    int opc = 0;
    int i = 0;
    bool repetir = true;

    while (repetir)
    {
        std::cout << "Que opción deseas realizar? \n1,Contador rapido de 1000 a 0 \n2,Contador lento de 100 a 0 \n3, \n4 \n";
        std::cin >> opc;

        switch (opc)
        {
        case 1:
            std::cout << "Antes de iniciar el For" << std::endl;
            for (i = 1000; i >= 0; i--)
            {
                std::cout << "El contador va en: " << i << std::endl;
            }
            std::cout << "Antes de iniciar el While: " << i << std::endl;
            i = 1000;
            while (i >= 0)
            {
                std::cout << "El contador va en: " << i << std::endl;
                i--; //El i-- hace que se rebaje 1 numero que seria equivalente a decir i = i -1;
            }
            std::cout << "Antes de iniciar el DO- While: " << i << std::endl;
            i = 1000; 
            do
            {
                std::cout << "El contador va en: " << i << std::endl; 
                i--;  
            } while (i >= 0);
            break;
            
        case 2:

            break;

        case 3:
            for (i = 100; i >= 0; i = i - 1)
            {
                std::cout << "El contador va en: " << i << std::endl;
                Sleep(200);
            }
            break;

        case 4:
            for (int i = 0; i <= 100; i = i + 10)
            {
                std::cout << i << std::endl;
            }
            break;
        }
        std::cout << "Deseas repetir el algoritmo? 0.- NO 1.- SI: ";
        std::cin >> repetir;
        system("cls");
    }

}
