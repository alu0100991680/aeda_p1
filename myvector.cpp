#include <iostream>
#include <string>
#include "myvector.h"

using namespace std;

//==================
//Métodos estandares
//==================

myvector::myvector() {
}

//Constructor copia
myvector::myvector(const myvector& orig) {
}

myvector::~myvector() {
}

//================
//Métodos práctica
//================

void myvector::show() {
    cout << "Lista de objectos" << endl;
    if (length==0){ cout << "Vacia" << endl;}
    
    for (int i=0;i<this->length;i++){
        cout << "Objecto " << i << endl;
        cout << this->p_objects[i].cod << endl;
        cout << this->p_objects[i].name << endl;
        cout << this->p_objects[i].surname<< endl << endl;
    }
}

void myvector::add(TDATO &d) {
    cout << "add" << endl;
    
    //Creamos un vector y puntero asociado para volcar la nueva información
    this->resize(1);

    //Añadimos el nuevo dato a la cola
    this->p_objects[this->length].cod=d.cod;
    this->p_objects[this->length].name=d.name;
    this->p_objects[this->length].surname=d.surname;
    
    //Ampliamos el indicador de contenido
    this->length++;
}

void myvector::remove() {
    cout << "remove" << endl;
    if (0<this->length){
        //Creamos un vector y puntero asociado para volcar la nueva información
        this->resize(-1);

        //Ampliamos el indicador de contenido
        this->length--;
    }
}

int myvector::count() {
    cout << "count" << endl;
    return this->length;
}

TDATO& myvector::get(int i){
    cout << "get" << endl;
    return this->p_objects[i];
}

void myvector::resize(int i){
    cout << "resize" << endl;
    this->p_objects = (TDATO*)std::realloc(this->p_objects,(this->length+i)*sizeof(TDATO));
}

void myvector::insert(TDATO &d, int at){
    if((0<=at)&&(at<=this->length)){
        cout << "insert" << endl;
        this->resize(1);

        for(int i=this->length-1;at<=i;i--){
            this->p_objects[i+1] = this->p_objects[i];
        }

        this->p_objects[at].cod=d.cod;
        this->p_objects[at].name=d.name;
        this->p_objects[at].surname=d.surname;
        
        this->length++;
    }
}

void myvector::removeat(int at){
    if((0<=at)&&(at<=this->length)){
        cout << "removeat" << endl;
        
        for(int i=at;i<this->length-1;i++){
            this->p_objects[i] = this->p_objects[i+1];
        }
   
        this->resize(-1);
        this->length--;
    }
}