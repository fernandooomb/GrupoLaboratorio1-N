#include <iostream>

<<<<<<< HEAD
struct Almacen
{
    int stock;
};

void IngresarStock(int &stock , int cantidad );
void RetirarStock (int *stock, int cantidad);
void ConsultarStock(int stock);
=======
int cantidad;
int IngresarStock(int stock, int cantidad);
int RetirarStock(int *stock, int cantida);
void ConsultarStock(int *stock);
>>>>>>> 234f451ffda96b59b7c9fb76b8064ac85afca40e

int main(){
    Almacen almacen;

    almacen.stock = 50;

    std::cout<<"Stock inicial:"<<almacen.stock<<"\n";

    IngresarStock(almacen.stock, 20); 
    std::cout<<"ingresando stock:"<<almacen.stock<<"\n"; 

    
    
    return 0;
}
<<<<<<< HEAD

void IngresarStock(int &stock, int cantidad){

        stock += cantidad ;
        
    }

=======
void ConsultarStock(int *stock){
    std:: cout<<"El stock actual es: " <<cantidad;
}
>>>>>>> 234f451ffda96b59b7c9fb76b8064ac85afca40e
