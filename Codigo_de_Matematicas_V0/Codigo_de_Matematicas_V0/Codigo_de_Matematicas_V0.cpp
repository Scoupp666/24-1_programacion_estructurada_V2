// Codigo_de_Matematicas_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// 
//

#include <iostream>

int main()
{
    bool seguir = true;

    while (seguir)
    {
        int opc = 0;
        int Numerodecimal;
        int Numerodecimal_2;
        int Numerobinario[32] = { 0 };  // Arreglo para almacenar la representación binaria del primer número
        int Numerobinario_2[32] = { 0 };  // Arreglo para almacenar la representación binaria del segundo número
        int Resultado[64] = { 0 };  // Aumentar el tamaño del arreglo para la multiplicación
        int Acarreo = 0;  // Variable para manejar acarreos en operaciones

        // Pedir al usuario que ingrese un número decimal y convertirlo a binario
        std::cout << "Ingrese un número decimal: ";
        std::cin >> Numerodecimal;
        for (int i = 31; i >= 0; --i)
        {
            Numerobinario[i] = Numerodecimal % 2;
            Numerodecimal /= 2;
        }

        // Mostrar la representación binaria del primer número
        std::cout << "Representación binaria en el arreglo: ";
        for (int i = 0; i < 32; ++i)
        {
            std::cout << Numerobinario[i] << " ";
        }

        // Pedir al usuario que ingrese otro número decimal y convertirlo a binario
        std::cout << "\nIngrese otro número decimal: ";
        std::cin >> Numerodecimal_2;
        for (int i = 31; i >= 0; --i)
        {
            Numerobinario_2[i] = Numerodecimal_2 % 2;
            Numerodecimal_2 /= 2;
        }

        // Mostrar la representación binaria del segundo número
        std::cout << "Representación binaria en el arreglo: ";
        for (int i = 0; i < 32; ++i)
        {
            std::cout << Numerobinario_2[i] << " ";
        }

        // Solicitar al usuario la operación a realizar
        std::cout << "\nQué operación quieres realizar\n1.- suma, \n2.- resta, \n3.- Multiplicacion\n";
        std::cin >> opc;

        Acarreo = 0; // Reiniciar Acarreo antes de cada operación

        switch (opc)
        {
        case 1:
            // Suma
            for (int i = 31; i >= 0; --i)
            {
                int suma = Numerobinario[i] + Numerobinario_2[i] + Acarreo;
                Resultado[i] = suma % 2;
                Acarreo = suma / 2;
            }
            break;
        case 2:
            // Resta
            for (int i = 31; i >= 0; --i)
            {
                int resta = Numerobinario[i] - Numerobinario_2[i] - Acarreo;
                if (resta >= 0)
                {
                    Resultado[i] = resta;
                    Acarreo = 0;
                }
                else
                {
                    Resultado[i] = 2 + resta;
                    Acarreo = 1;
                }
            }
            break;
        case 3:
            // Multiplicación
            for (int i = 0; i < 32; ++i)
            {
                for (int j = 0; j < 32; ++j)
                {
                    Resultado[i + j] += Numerobinario[j] * Numerobinario_2[i];
                }
            }

            for (int i = 0; i < 63; ++i)
            {
                Resultado[i + 1] += Resultado[i] / 2;
                Resultado[i] %= 2;
            }

            // Mostrar el resultado de la multiplicación en binario 
            std::cout << "El resultado de la multiplicación en binario es: ";
            bool inicio = false;
            for (int i = 63; i >= 0; --i)
            {
                if (Resultado[i] == 1)
                    inicio = true;
                if (inicio)
                    std::cout << Resultado[i];
            }
            break;
        }

        // Mostrar el resultado de la operación
        std::cout << "\nEl resultado de la operación es ";
        for (int i = 0; i < 32; ++i)
        {
            std::cout << Resultado[i];
        }

        // Preguntar si se desea realizar otra operación
        std::cout << "\n¿Quieres realizar otra operación? (0 para salir, 1 para continuar): ";
        std::cin >> seguir;

        if (seguir == 0)
            break;
    }

    return 0;
}



