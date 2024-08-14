#include "Bank.h"
#include <iostream>

using namespace std;

/* struct Movie {
    string title;
    int year;
};

struct Empleado {
    int ID;
    string name;
    string email;
    string area;
}; */

int main() {

    /* Empleado empleado1;

    cout<<"-----Ingresa tus Datos-----"<<endl;
    cout<<"Ingresa tu ID: ";
    cin>>empleado1.ID;
    cout<<"Ingresa tu nombre: ";
    cin>>empleado1.name;
    cout<<"Ingresa tu correo electronico: ";
    cin>>empleado1.email;
    cout<<"Ingresa el area de trabajo: ";
    cin>>empleado1.area;

    cout<<endl;
    cout<<"ID: "<<empleado1.ID<<endl;
    cout<<"Nombre del empleado: "<<empleado1.name<<endl;
    cout<<"Correo Electronico: "<<empleado1.email<<endl;
    cout<<"Area de trabajo: "<<empleado1.area<<endl; */

    Bank bank;

    int value;

    bank.addAcount("aa12", 100);
    cout<<"El balance de tu cuenta aa12 es: "<<bank.getBalance("aa12")<<endl;

    value = bank.addBalance("aa12", 200);
    if (value != -1) {
        cout<<"El balance actualizado de tu cuenta aa12 es: "<<bank.getBalance("aa12")<<endl;
    } else {
        cout<<"La cuenta no existe.";
    }

    value = bank.minusBalance("aa12", 200);
    if (value != -1) {
        cout<<"El balance actualizado de tu cuenta aa12 es: "<<bank.getBalance("aa12")<<endl;
    } else {
        cout<<"La cuenta no existe.";
    }
    
    return 0;
}