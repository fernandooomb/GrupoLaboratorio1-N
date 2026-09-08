#include <iostream>

int IngresarStock(int *stock, int cantidad);
int RetirarStock(int *stock, int cantidad);
int ConsultarStock(int stock);

int main()
{
    int stock = 50;
    int cantidad = 34;

    RetirarStock(&stock, cantidad); 

    std::cout << "Se retiraron " << cantidad << " objetos del stock. Stock actual: " << stock <<"\n";

    return 0;
}

int RetirarStock(int *stock, int cantidad)
{
    *stock -= cantidad;
    return *stock;
}