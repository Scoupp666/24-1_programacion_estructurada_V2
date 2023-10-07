// P009_Condicionales_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 5/10/2023
// Utilizar decisiones múltiples para realizar una calculadora.

#include <iostream>
#include <string>
#include <math.h>
#include <locale>
int main()
{
    setlocale(LC_ALL, "es_MX . UTF-8"); 
    int opc;
    int num1 = 0;
    int num2 = 0; 
    float a = 0, b = 0, c = 0, d = 0, e = 0;
    bool repetir = true; 
    bool seguir = true; 
    while (repetir)
    {
        std::cout << "Que operacion deseas realizar 1-suma, 2-resta, 3-multiplicacion, 4-division, 5-potencia, 6-mayor que menor que, 7- raiz, 8-valor absoluto\n";
        std::cin >> opc;
        switch (opc)
        {
        case 1:
            std::cout << "usuario dame un numero\n";
            std::cin >> a;
            std::cout << "usuario dame otro numero\n";
            std::cin >> b;
            c = a + b;
            std::cout << "El resultado de la suma es " << c << std::endl;
            break;
        case 2:
            std::cout << "usuario dame un numero\n";
            std::cin >> a;
            std::cout << "usuario dame otro numero\n";
            std::cin >> b;
            c = a - b;
            std::cout << "El resultado de la resta es " << c << std::endl;
            break;
        case 3:
            std::cout << "usuario dame un numero\n";
            std::cin >> a;
            std::cout << "usuario dame otro numero\n";
            std::cin >> b;
            c = a * b;
            std::cout << "El resultado de la multiplicacion es " << c << std::endl;
            break;
        case 4:
            std::cout << "usuario dame un numero\n";
            std::cin >> a;
            std::cout << "usuario dame otro numero\n";
            std::cin >> b;
            c = a / b;
            std::cout << "El resultado de la division es " << c << std::endl;
            break;
        case 5:
            std::cout << "usuario dame un numero\n";
            std::cin >> a;
            std::cout << "dime a que potencia lo quieres elevar\n";
            std::cin >> b;
            c = pow(a, b);
            std::cout << "La potencia es: " << c << std::endl;
            d = sqrt(c);
            c = pow(c, 1 / 2);
            break;
        case 6:
            std::cout << "usuario dame un numero\n";
            std::cin >> num1;
            std::cout << "usuario dame otro numero\n";
            std::cin >> num2;

            if (num1 == num2)
            {
                std::cout << num1 << " es igual que " << num2 << std::endl;
            }
            else
            {
                if (num1 > num2)
                {
                    std::cout << num1 << " es mayor que " << num2 << std::endl;
                }
                else
                {
                    std::cout << num1 << " es menor que " << num2 << std::endl;
                }
            }
            break;
        case 7:
            std::cout << "dime el numero al que le vamos a sacar raiz cuadrada\n";
            std::cin >> a;
            c = sqrt(a);
            std::cout << "\n El resultado de la raiz cuadrada es: " << c << std::endl;
            break;
        case 8:
            std::cout << "dame 1 numero para saber su valor absoluto\n";
            std::cin >> num1;
            if (num1 > num2)
            {
                std::cout << "el valor absoluto de tu numero es " << num1;
            }
            else
            {
                num1 = num1 * (-1);
                std::cout << "el valor absoluto de tu numero es " << num1 << std::endl; 
            }
            break;
        }
        bool seguir = true; 
        std::cout << "Deseas repetir el algoritmo? 0.- NO 1.- SI: "; 
        std::cin >> seguir; 
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
