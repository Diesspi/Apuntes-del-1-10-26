//Un almacen de pedidos por correo vende cinco productos,
//Los precios son los siguientes: 
//Producto 1: 2.98
//Producto 2: 4.50
//Producto 3: 9.98
//producto 4: 4.49
//Producto 5: 6.87
//Escriba un programa que solicite el número del producto y la cantidad
//Vendida. el programa debe determinar el precio de venta de cada 
//Producto, calcular y mostrar el valor total del producto vendido.
//Diego Espinosa
//Apuntes 3

#include <iostream> 
using namespace std;

int main() {
    int numpro, canven; 
    float preven, valtot;
    
    cout << "Ingresa el numero del producto (1 al 5): ";
    cin >> numpro;
    cout << "Ingresa la cantidad vendida; ";
    cin >> canven;
    
    switch(numpro) {
        case 1: preven = 2.98; break;
        case 2: preven = 4.50; break; 
        case 3: preven = 9.98; break;
        case 4: preven = 4.49; break; 
        case 5: preven = 6.87; break; 
        default: preven = 0; 
                    cout << "Error. el producto no existe. " <<endl; break;
    }
        cout <<"El precio de venta del producto " << numpro << ": $" << preven << endl;
        valtot = canven * preven;
        cout << "Total de la venta: $" << valtot << endl;
    return 0;
}