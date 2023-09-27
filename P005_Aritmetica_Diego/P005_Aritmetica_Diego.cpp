// P005_Aritmeticos_V0.cpp :
// Mauricio Cabrera
// Esta practica será un repaso de los operadores aritmeticos, Raiz y Potencia.


#include <iostream>
#include <math.h>

    int main()
    {
        //Declaración de variables
        float a = 0;
        float b = 0;
        float c = 0;
        float d = 0;
        //Solicitud de valor de numero
        std::cout << "Ingresa un numero: \n";
        //Esperar el dato del usuario
        std::cin >> a;
        //Solicitud de potencia
        std::cout << "Ingresa la potencia a la que lo quieres elevar: \n";
        //Espera del dato de potencia
        std::cin >> b;
        //Función pow(numero, potencia)
        //Para obtener la raiz debemos elevar el numero a la
        //fracción de potencia que queramos.
        //para raiz cuadrada pow(X,1/2)
        c = pow(a, b);
        std::cout << "La potencia es: " << c << std::endl;
        d = sqrt(c);
        c = pow(c, .3333);
        std::cout << "La raiz cuadrada del resultado es: " << c <<
            std::endl << d;
        std::cin.ignore();
        std::cout << "ingresa un numero: \n";
        std::cin >> a;
        std::cout << "ingresa el numero por el que lo quieres sumar: \n";
        std::cin >> b;
        a + b = c;
        std::cout << "El resultado de la suma es" << c << std::endl;
        a - b = c;
        std::cout << "El resultado ed la resta es" << c << std::endl;
        a * b + c;
        std::cout << "El resultado de la multiplicacion es" << c << std::endl;
        a / b = 0;
        std::cout << "El resultado de la division es" << c << std::endl;

    }

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
