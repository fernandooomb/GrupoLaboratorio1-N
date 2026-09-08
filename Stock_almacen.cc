#include <iostream>
    int cantidad = 34;

    RetirarStock(&stock, cantidad); 

    std::cout << "Se retiraron " << cantidad << " objetos del stock. Stock actual: " << stock <<"\n";


int RetirarStock(int *stock, int cantidad)
{
    *stock -= cantidad;
    return *stock;
}
