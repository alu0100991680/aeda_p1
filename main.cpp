#include <iostream>
//#include <string>
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
    v->add(a);
    v->add(b);
    v->add(c);
    v->insert(d, 3);
    //v->show();
    v->removeat(2);
    v->removeat(-1);
    v->show();
    return 0;
}
