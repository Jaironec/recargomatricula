#include <iostream>
// Se ingresa la edad de un estudiante. si la edas es de 5 a 10 años se hace
//un recargo del 1% al costo de la matricula. si la edad es superior a 10 años
// y menor igual que 15 años, el recargo sera del 2%. si la edad es mayor que+
// 15 y menor o igual que 20 años, el recargo es del 4%. Si la edad es superior
// a 20 años, recargo es del 6%
//para las edades menores a 5 años no hay recarga
using namespace std;
int main() {
    int edad;
    double recargo=0, costoMatricula=0;
    cout<<"\n Ingresar la edad: ";
    cin>>edad;
    cout<<"\n Ingresar Costo de la Matricula: ";
    cin>>costoMatricula;
    if(edad<5)
        recargo=0;
    else if(edad>=5 && edad<=10)
        recargo=0.01;
    else if(edad<=15)
        recargo=0.02;
    else if(edad<=20)
        recargo=0.04;
    else
        recargo=0.06;
    double recarga= costoMatricula*recargo;
    double valorpagar=costoMatricula+recarga;
    cout << "\n Tu edad es:" <<edad <<" años, tu recargo es: "<< recarga;
    cout<< "\n Tu valor a pagar es:" <<valorpagar;
    return 0;
}
