// P001_Hola_Mundo_V2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Diego Delfin Garibi, zap994, 4/10/2023
// Aprender sintaxis de definición de variables

#include <iostream>
#include <string>




int main()
{
    //Variables creación 
    //tipo de variable "nombre de la variable" = "inicialización 
    bool mi_primer_booleano = true;
    int mi_primer_entero = 0;
    float mi_primer_flotante = 0.0;
    char mi_primer_caracter = 'a';
    char mi_primer_cadenadecaracteres[100] = "Hola vato";
    std::string mi_primer_string = "alo chavalitos";

    //Mostrar al usuario lo que creamos de variables 
    std::cout << "Muy buenos días espero estes bien\n";
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_booleano << std::endl;
    std::cout << "En el entero tienes guardado: " <<
        mi_primer_entero << std::endl;
    std::cout << "En el flotante tienes guardado: " <<
        mi_primer_flotante << std::endl;
    std::cout << "En el caracter tienes guardado: " <<
        mi_primer_caracter << std::endl;
    std::cout << "En la cadena tienes guardado: " <<
        mi_primer_cadenadecaracteres[100] << std::endl;
    std::cout << "En el string tienes guardado: " <<
        mi_primer_string << std::endl;

    //Solicitar al usuario cambios
        //Solicitar al usuario cambios
    std::cout << "usuario dame por favor un 0 o 1;" <<
        std::endl;
    std::cin >> mi_primer_booleano;
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_booleano << std::endl;
    std::cout << "Usuario dame por favor un numero: " <<
        std::endl;
    std::cin >> mi_primer_entero;
    std::cout << "Tu numero guardado sera:" <<
        mi_primer_entero << std::endl;
    std::cout << "Usuario dame tu numero con decimal: " <<
        std::endl;
    std::cin >> mi_primer_flotante;
    std::cout << std::endl;
    std::cout << "tu numero con decimal sera: " <<
        mi_primer_flotante << std::endl;
    std::cout << "Usuario dame un caracter: " <<
        std::endl;
    std::cin >> mi_primer_caracter;
    std::cout << "tu caracter guardado sera: " <<
        mi_primer_caracter << std::endl;
    std::cout << "Muy bien ahora dame una cadena de caracteres" <<
        std::endl;
    std::cin >> mi_primer_cadenadecaracteres; 
    std::cout << "tu cadena de caracteres sera:" <<
        mi_primer_cadenadecaracteres << std::endl; 
    std::cout << "ahora dame un oracion" <<
        std::endl;
    std::cin >> mi_primer_string;
    std::cout << "asi que tu oracion sera: " <<
        mi_primer_string << std::endl;
    

    //Realizar operaciones 
    float a, b, c;
    a = 10;
    b = 5;
    c = a / b;
    std::cout << "\n usuario dame por favor el resultado de la division; " << c << std::endl;
    c = a + b;
    std::cout << "\n usuario dame por favor el resultado de la suma;" << c;
    c = a - b;
    std::cout << "\n usuario dame por favor el resultado resta;" << c;
    c = a * b;
    std::cout << "\n usuario dame por favor el resultado de la multiplicacion;" << c;
    float d, e;
    d = 100;
    e = sqrt(100);
    std::cout << "\n El resultado de la raiz cuadrada es: " << e << std::endl;
    d = pow(100, 2);
    std::cout << "\n El resultado de la potencia es: " << d << std::endl;


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
