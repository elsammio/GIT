#include <iostream>
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    //Elabore un programa que reciba un número y en el caso de ser positivo y ser par, se le sume 10, y en caso de ser
    //negativo, lo convierta en positivo. Imprima el número con el resultado.
    int number;
    std::cout<<"Digite un numero: ";
    std::cin >> number;

    if (number > 0 && number % 2 == 0) {
        number = number + 10;
        std::cout<<"El numero es: "<<number;
    }if (number < 0) {

        number = number * (-1);
        std::cout<<"El numero negativo convertido a positivo es: "<<number;

    } else {
        std::cout<<"El numero es cero o es un numero positivo impar";
    }

    //Existe un juego computacional que consiste en lo siguiente. El usuario ingresa una cantidad de dinero para apostar, para que inicie el juego.
    //El sistema obtiene tres números aleatorios (entre 0 y 4) e imprime el valor de dinero con el que el usuario termina.
    //Si los tres números son iguales el jugador gana 3 veces lo apostado. Si 2 de los 3 números son iguales el jugador ganará 1 vez y media lo apostado.
    //De lo contrario no gana nada, pierde todo su dinero.

    //Haga un programa que reciba un número y en el caso de ser positivo diga que es positivo, en el caso de ser negativo pero mayor a -10
    //diga que es un negativo chiquito, de lo contrario, diga que es un negativo grande.

    //Escribir un programa en Python que reciba 3 números y a continuación imprima el mayor de los 3.
    //Por ejemplo: si el usuario ingresa los números 1, 2, 3 debe imprimir. “El mayor es 3”.
    number = 3;

    for (int i = 0; i < number; ++i) {
        std::cout<<"Digite un numero: ";
        std::cin >> number;

    }








    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}