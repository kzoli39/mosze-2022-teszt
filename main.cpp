#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];            // N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa';  // ; hiányzik
    for (int i = 0; i < N_ELEMENTS; i++)     // nincs megadva, hogy meddig iteráljon és milyen lépésközzel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)     //csak egyszer fut le a ciklus
    {
        std::cout << "Ertek:" << b[i];          // ; hiányzik, nincs érték kiíratás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                              // int helyett double típust kellene használni
    for (int i = 0; i < N_ELEMENTS; i++)    // , helyett ; kell
    {
        atlag += b[i];                      // ; hiányzik
    }
    atlag = atlag / N_ELEMENTS;                    //csak egy sima osztás kéne
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout<< " HALII" << std::endl;
    return 0;
}
