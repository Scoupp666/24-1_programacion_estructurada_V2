// P013_Bucles_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 14/10/2023
// El login en un videojuego se repite si el usuario no ingresó los datos correctos. Si ingreso los datos correctos volver a pedir los datos.

#include <iostream>
#include <string> 
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string usuario_correcto = "Usuario";
    std::string contrasena_correcta = "1234567890";
    std::string usuario;
    std::string contrasena;
    bool continuar = true; 

    do
    {
        std::cout << "bienvenido a Halo\n";
        std::cout << "inicia sesion\n";
        std::cout << "nombre de usuario\n";
        std::cin >> usuario;
        std::cout << "contraseña\n";
        std::cin >> contrasena;

        if (usuario == usuario_correcto && contrasena == contrasena_correcta) 
        {
            std::cout << "bienvenido\n";
            std::cout << "usuario y contraseña correctos\n";
            std::cout << "disfrute del juego\n";
        }
        else
        {
            std::cout << "usuario o contraseña incorrectos\n";
        }
        std::cout << "desea intentar de nuevo?\n";
        std::cin >> continuar;
        system("cls");
    } 
    while (continuar == true);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
