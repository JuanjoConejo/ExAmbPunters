#include <iostream>
#include <cstring>

int main() {
    // Declarem dos punteros per emmagatzemar variables dinàmiques d'enters i de dobles.
    int* dinamicInt = new int(42); // Creem una variable dinàmica d'enter amb valor 42.
    double* dinamicDouble = new double(3.14); // Creem una variable dinàmica de doble precisió amb valor 3.14.

    // Mostrem els valors de les variables dinàmiques d'enter i de dobles.
    std::cout << "Valor de dinamicInt: " << *dinamicInt << std::endl;
    std::cout << "Valor de dinamicDouble: " << *dinamicDouble << std::endl;

    // Alliberem la memòria de les variables dinàmiques d'enter i de dobles.
    delete dinamicInt;
    delete dinamicDouble;

    // Mostrem els punteros després de l'eliminació. Aquesta operació pot donar lloc a comportament indefinit.
    std::cout << "Punter de dinamicInt després de l'eliminació: " << dinamicInt << std::endl;
    std::cout << "Punter de dinamicDouble després de l'eliminació: " << dinamicDouble << std::endl;

    // Creem un array dinàmic de caràcters.
    char* dinamicCharArray;
    const char* src;
    src = "Robert.";
    dinamicCharArray = new char[strlen(src) + 1]; // Reservem memòria per a l'array dinàmic.
    strcpy_s(dinamicCharArray, strlen(src) + 1, src); // Copiem la cadena de caràcters 'src' a l'array dinàmic.
    std::cout << "Array de caràcters dinàmic: " << dinamicCharArray << std::endl;

    // Alliberem la memòria de l'array dinàmic de caràcters.
    delete[] dinamicCharArray;

    // Utilitzem un punter sense inicialitzar (pecat mortal).
    int* pecatMortal1 = NULL;
    std::cout << "Pecat mortal 1: " << *pecatMortal1 << std::endl;

    // Eliminem una variable dinàmica i intentem accedir al seu contingut (pecat mortal).
    int* pecatMortal2 = new int(100);
    delete pecatMortal2;
    std::cout << "Pecat mortal 2: " << *pecatMortal2 << std::endl;

    // Eliminem un array dinàmic amb delete en lloc de delete[] (pecat mortal).
    int* pecatMortal3 = new int[5];
    delete pecatMortal3;

    return 0;
}