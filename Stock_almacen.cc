#include <iostream>

struct Almacen
{
    int stock;
};

void IngresarStock(int &stock , int cantidad );
int RetirarStock(int *stock, int cantidad);
void ConsultarStock(int stock);

int main(){
    Almacen almacen;

    almacen.stock = 50;

    std::cout<<"Stock inicial:"<<almacen.stock<<"\n";

    IngresarStock(almacen.stock, 20); 
    std::cout<<"ingresando stock:"<<almacen.stock<<"\n"; 

    
    
    return 0;
}

void IngresarStock(int &stock, int cantidad){

        stock += cantidad ;
        
    }
int RetirarStock(int *stock, int cantidad)
{
    *stock -= cantidad;
    return *stock;
}
void ConsultarStock(int *stock){
    std:: cout<<"El stock actual es: " <<stock;
}

