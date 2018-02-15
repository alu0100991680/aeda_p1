#include <iostream>
#include "myvector.h"

using namespace std;

int main()
{
    TDATO a;
    a.cod = 1;
    a.name = "Ramón";  
    a.surname = "Negrillo Valdivia";
    
    TDATO b;
    b.cod = 2;
    b.name = "David";  
    b.surname = "Negrillo Valdivia";
    
    TDATO c;
    c.cod = 3;
    c.name = "Miguel";  
    c.surname = "Il Paria";
    
    TDATO d;
    d.cod = 4;
    d.name = "Ana";  
    d.surname = "Caspariño";
    
    myvector *v = new myvector();
    v->debug(false);
    
    cout << " ================= " << endl;
    cout << "|    MYVECTOR     |" << endl;
    cout << " ================= " << endl << endl;
    
    //Introducimos 3 usuario
    cout << "Introducimos Rámon, Yezer, Rayco. Mostramos resultado push. Mostramos el contenedor" << endl;
    v->add(a);
    v->add(b);
    v->add(c);
    v->show();
    
    //Inserción
    cout << "Insertamosa a Ana en la posición de Yezer. Desplazando al resto. Mostramos el contenedor" << endl;
    v->insert(d, 1);
    v->show();
    
    //Removeat
    cout << "Eliminamos la primera posición donde esta Ramón. Desplazamos al resto. Mostramos el contenedor" << endl;
    v->removeat(0);
    v->show();
    
    //Remove
    cout << "Eliminamos por detras la posición de Rayco. Desplazamos al resto. Mostramos el contenedor" << endl;
    v->remove();
    v->show();
    
    //Get
    cout << "Visualizamos el elemento 0 que en este momento es Ana" << endl;
    TDATO t = v->get(0);
    cout << "cod-> " << t.cod << endl;
    cout << "name-> " << t.name << endl;
    cout << "surname-> " << t.surname << endl << endl;
    
    //Vaciamos la pila con clear
    cout << "Vaciamos la pila con clear y verificamos tamaño con count()" << endl;
    v->clear();
    cout << "Count: " << v->count() << endl;
    
    delete v;
    return 0;
}
