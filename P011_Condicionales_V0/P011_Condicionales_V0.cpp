// P011_Condicionales_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 9/10/2023
// Realizar preguntas para adivinar “tema libre” 

#include <iostream>
#include <string>
#include <locale>

 int main()
 {
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Piensa en un Videojuego (Halo, Fortnite, COD, Gears, Minecraft, Subnautica, No mansky, Starfield)." << std::endl;
    std::cout << "Responda 's' o 'n' a las preguntas." << std::endl;
    std::string respuesta;
    bool repetir = true;

    while (repetir)
    {
        
        //pregunta 1:
        std::cout << "Tu juego es de disparos? (s/n):\n"; 
        std::cin >> respuesta; 
        if (respuesta == "s")
        {
            //pregunta 2: 
            std::cout << "Es en primera persona? (s/n):\n";
            std::cin >> respuesta;

            if (respuesta == "s")
            {
                //pregunta 3:
                std::cout << "Hay alienigenas? (s/n):\n";
                std::cin >> respuesta;
                if (respuesta == "s")
                {
                    //respuesta 1:
                    std::cout << "El juego es Halo\n";
                }
                else
                {
                    std::cout << "El juego es COD\n";
                }
            }

            else
            {
                //pregunta 3:
                std::cout << "Es tercera persona? (s/n)\n";
                std::cin >> respuesta;

                if (respuesta == "s")
                {
                    //pregunta 4:
                    std::cout << "Se construye? (s/n)\n";
                    std::cin >> respuesta;
                    if (respuesta == "s")
                    {
                        //respuesta 2:
                        std::cout << "Entonces la respuesta es fortnite\n";
                    }
                    else
                    {
                        std::cout << "Entonces la respuesta es Gears\n";
                    }
                }
            }

        }
        else
        { 
            //pregunta 1:
            std::cout << "Es un juego de aventura? (s/n)\n";
            std::cin >> respuesta;
            if (respuesta == "s")
            {
                //pregunta 2:
                std::cout << "Se usan naves? (s/n)\n";
                std::cin >> respuesta;

                if (respuesta == "s")
                {
                    //pregunta 3: 
                    std::cout << "Es exclusivo de Xbox? (s/n)\n";
                    std::cin >> respuesta;
                    if (respuesta == "s")
                    {
                        //respuesta 3:
                        std::cout << "Es Starfield \n";
                    }
                    else
                    {
                        std::cout << "Es No mansky \n";
                    }

                }
                else
                {
                    //pregunta 2:
                    std::cout << "Es de cubos? (s/n)\n";
                    std::cin >> respuesta;
                    if (respuesta == "s")
                    {
                        //respuesta 4:
                        std::cout << "Es Minecraft \n";
                    }
                    else
                    {
                        std::cout << "Es Subnautica \n";
                    }
                }
            }
            
        }

            
        std::cout << "Deseas repetir el algoritmo? 0.- NO 1.- SI:\n"; 
        std::cin >> repetir; 
        system("cls"); 
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
