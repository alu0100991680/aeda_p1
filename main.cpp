#include <iostream>
#include <string>
#include "myvector.h"

using namespace std;


struct TDATO
{
    int cod;
    string name;
    string surname;
};

int main()
{
    int length = 1;
    
    struct TDATO objects[length];
    struct TDATO *p_objects = objects;
    
    p_objects[0].cod = 1;
    p_objects[0].name = "Ramón";
    p_objects[0].surname = "Negrillo";
    
    cout << p_objects[0].cod << endl;
    cout << p_objects[0].name << endl;
    cout << p_objects[0].surname << endl;
    
    //Ampliar cola
    length++;
    struct TDATO objects_aux[length];
    struct TDATO *p_objects_aux = objects_aux;
    
    //Copiar información del anterior vector
    for (int i=0;i<length-1;i++){
        p_objects_aux[i].cod = p_objects[i].cod;
        p_objects_aux[i].name = p_objects[i].name;
        p_objects_aux[i].surname = p_objects[i].surname;
    }
    
    cout << "New aux" << endl;
    cout << "------------" << endl;
    
    p_objects_aux[1].cod = 2;
    p_objects_aux[1].name = "David";
    p_objects_aux[1].surname = "Negrillo";
    
    cout << p_objects_aux[0].cod << endl;
    cout << p_objects_aux[0].name << endl;
    cout << p_objects_aux[0].surname << endl;
    
    cout << p_objects_aux[1].cod << endl;
    cout << p_objects_aux[1].name << endl;
    cout << p_objects_aux[1].surname << endl;
    
    cout << "Reasignación" << endl;
    cout << "------------" << endl;
    
    cout << &p_objects << endl;
    cout << &p_objects_aux<< endl;
    p_objects = p_objects_aux;
    cout << &p_objects << endl;
    p_objects_aux = NULL;
    cout << &p_objects_aux << endl;
    
    cout << p_objects[0].cod << endl;
    cout << p_objects[0].name << endl;
    cout << p_objects[0].surname << endl;
    
    cout << p_objects[1].cod << endl;
    cout << p_objects[1].name << endl;
    cout << p_objects[1].surname << endl;
    
    cout << p_objects[2].cod << endl; // BASUREA
    cout << p_objects[2].name << endl;
    cout << p_objects[2].surname << endl;
    
    return 0;
}

/*struct TDATO
{
    int cod;
    string name;
    string surname;
};

int main()
{
   int length = 1;
    
    struct TDATO objects[length];
    struct TDATO *p_objects = objects;
    
    p_objects[0].cod = 1;
    p_objects[0].name = "Ramón";
    p_objects[0].surname = "Negrillo";
    
    cout << p_objects[0].cod << endl;
    cout << p_objects[0].name << endl;
    cout << p_objects[0].surname << endl;
    
    //Ampliar cola
    length++;
    struct TDATO objects_aux[length];
    struct TDATO *p_objects_aux = objects_aux;
    
    //Copiar información del anterior vector
    for (int i=0;i<length-1;i++){
        p_objects_aux[i].cod = p_objects[i].cod;
        p_objects_aux[i].name = p_objects[i].name;
        p_objects_aux[i].surname = p_objects[i].surname;
    }
    
    cout << "New aux" << endl;
    cout << "------------" << endl;
    
    p_objects_aux[1].cod = 2;
    p_objects_aux[1].name = "David";
    p_objects_aux[1].surname = "Negrillo";
    
    cout << p_objects_aux[0].cod << endl;
    cout << p_objects_aux[0].name << endl;
    cout << p_objects_aux[0].surname << endl;
    
    cout << p_objects_aux[1].cod << endl;
    cout << p_objects_aux[1].name << endl;
    cout << p_objects_aux[1].surname << endl;
    
    cout << "Reasignación" << endl;
    cout << "------------" << endl;
    
    cout << &p_objects << endl;
    cout << &p_objects_aux<< endl;
    p_objects = p_objects_aux;
    cout << &p_objects << endl;
    p_objects_aux = NULL;
    cout << &p_objects_aux << endl;
    
    cout << p_objects[0].cod << endl;
    cout << p_objects[0].name << endl;
    cout << p_objects[0].surname << endl;
    
    cout << p_objects[1].cod << endl;
    cout << p_objects[1].name << endl;
    cout << p_objects[1].surname << endl;
    
    cout << p_objects[2].cod << endl; // BASUREA
    cout << p_objects[2].name << endl;
    cout << p_objects[2].surname << endl;
    
    return 0;
}*/

/* BACKUP sin memoria dinamica no podemos reasignar una variable de multiples objectos

struct TDATO
{
    int cod;
    string name;
    string surname;
};

int main()
{
    int length = 1;
    
    struct TDATO objects[length];

    objects[0].cod = 1;
    objects[0].name = "Ramon";
    objects[0].surname = "Negrillo";
    
    cout << objects[0].cod << endl;
    cout << objects[0].name << endl;
    cout << objects[0].surname << endl;
    
    //Ampliar cola
    length++;
    struct TDATO objects_aux[length];
    
    //Copiar información del anterior vector
    for (int i=0;i<length-1;i++){
        objects_aux[i].cod = objects[i].cod;
        objects_aux[i].name = objects[i].name;
        objects_aux[i].surname = objects[i].surname;
    }
    
    objects_aux[1].cod = 2;
    objects_aux[1].name = "David";
    objects_aux[1].surname = "Negrillo";
    
    cout << objects_aux[0].cod << endl;
    cout << objects_aux[0].name << endl;
    cout << objects_aux[0].surname << endl;
    
    cout << objects_aux[1].cod << endl;
    cout << objects_aux[1].name << endl;
    cout << objects_aux[1].surname << endl;
    
    return 0;
}*/