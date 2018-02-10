/* 
 * File:   main.cpp
 * Author: noc
 *
 * Created on 10 de febrero de 2018, 21:07
 */

// class templates
// function template
#include <iostream>
using namespace std;

/*
template <typename T>
class TDATO
{
    T* _ptr;

    public:
        explicit TDATO(T* ptr = 0) : _ptr(ptr) {}
        ~TDATO() { delete _ptr; }

        // implementamos estos operadores para que la clase actue como puntero
        T& operator*() { return *_ptr; }
        T* operator->() { return _ptr; }
};*/

struct TDATO
{
    int cod;
    char name[100];
    char surname[100];
};

int main()
{
    
    return 0;
}


