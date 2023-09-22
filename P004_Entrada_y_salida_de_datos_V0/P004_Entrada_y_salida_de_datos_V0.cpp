// P004_Entrada_y_salida_de_datos
// Diego Delfin Garibi, zap994, 22/9/2023
//Realizar un consultorio médico el cual solicite:



#include <iostream>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool sintoma1, sintoma2, sintoma3 = true;
    std::string Nombre;
    std::string Relato;
    char sexo;
    int edad;
    int peso;
    float altura;
    float IMC;



    std::cout << "Bienvenido al consultorio del dr. chapatin!\n";


    std::cout << "tienes dolor de pansa donde si es 1 y donde no es 0\n";
    std::cin >> sintoma1;
    std::cout << "tienes diarrea donde si es 1 y donde no es 0";
    std::cin >> sintoma2;
    std::cout << "tienes covid19 donde si es 1 y donde no es 0";
    std::cin >> sintoma3;


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln