// ConsoleApplication5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    float a = 0, b = 0, c = 0;
    bool seguir = true;

    do
    {
        std::cout << "si quieres ejecutar el programa presiona 2, de lo contrario escoge 1 \n";
        std::cin >> seguir;
        if (seguir == 1)
        {
            std::cout << "Dame un numero\n";
            std::cin >> a; 
            std::cout << "Dame otro numero\n"; 
            std::cin >> b; 
            c = a + b; 
            std::cout << "El resultado de la suma es " << c << 
                std::endl;  
        }
        
    } while (seguir == 2);   
}

