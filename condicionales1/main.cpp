#include <iostream>
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    //1) Realice un programa que reciba por parámetros un nombre, de forma tal que si el nombre es igual
    //a su nombre el sistema le diga: Usted es el ganador!!!. De lo contrario le diga “Tu nombre podría ser mejor”.


    std::string nombre;
    std:: string miNombre = "samir";

    std::cout << "Escribe tu nombre: ";
    std::cin >> nombre;

    if (nombre == miNombre) {
        std::cout <<"Usted es el ganador";
    } else {
        std::cout <<"Tu nombre podria ser mejor";
    }

    //2) Realice un programa que reciba por parámetros dos números y evalúe cuál es mayor que cual de tal forma que
    //imprima un mensaje en el que indique si son menores, iguales o mayores.

    int number1;
    int number2;

    std::cout << "Escribe el primer numero: ";
    std::cin >> number1;

    std::cout << "Escribe el segundo numero: ";
    std::cin >> number2;

    if (number1 == number2) {
        std::cout <<"Los numeros son iguales";
    }if (number1 > number2) {
        std::cout<<"El primer numero es el mayor";
    } if (number2 > number1) {
        std::cout<<"El segundo numero es el mayor";
    }

    //3) Realice un programa que pida un número entero e imprima que día es de acuerdo a los siguientes números.
    //Si el número es 1 entonces imprima lunes, si el número es 2 entonces imprima martes. Si el número es 3 entonces
    //imprima miércoles y así sucesivamente hasta que el número sea 7 y allí imprimiría domingo.

    std::cout <<"Digite un numero: ";
    int number;
    std::cin >> number;

    switch (number) {
        case 1:
            std::cout<< "Es Lunes";
            break;

        case 2:
            std::cout<< "Es Martes";
            break;

        case 3:
            std::cout<< "Es Miercoles";
            break;

        case 4:
            std::cout<< "Es Jueves";
            break;

        case 5:
            std::cout<< "Es Viernes";
            break;

        case 6:
            std::cout<< "Es Sabado";
            break;

        case 7:
            std::cout<< "Es Domingo";
            break;
    }

    //4) Realice un programa que imprima True si el valor es par, false de lo contrario. Para verificar si un número es
    //par use el operador módulo ( %)
    std::cout <<"Digite un numero: ";
    std::cin >> number;

    if (number % 2 == 0 ) {

        std::cout<<"El numero "<< number<< " es par";

    } else {
        std::cout<<"El numero "<< number<< " es impar";

    }






    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}