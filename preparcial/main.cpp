#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int suma = 0;
    int cantidad = 0;
    int dato =0 ;

    do {
        std::cout << "Ingresa las notas: ";
        std::cin >> dato;
        if (dato != 1) {
            suma = suma + dato;
            cantidad = cantidad + 1;
        }

    } while (dato != -1);
    double promedio = 0.0;
    if (cantidad > 0) {
        promedio = (1.0 * suma) / cantidad;
    }
    std::cout << promedio;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}