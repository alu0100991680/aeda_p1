#ifndef MYVECTOR_H
#define MYVECTOR_H

struct TDATO
{
    int cod;
    std::string name;
    std::string surname;
};

class myvector {
    
public:
    //Estandar
    myvector();
    myvector(const myvector& orig);
    virtual ~myvector();
    //Práctica
    void show();
    void add(TDATO &d);
    void remove();
    int count();
    TDATO& get(int i);
    void insert(TDATO &d, int at);
    void removeat(int at);
    //void reverse();
    //void clear();
private:
    void resize(int i);
    int length = 0;
    struct TDATO *p_objects;
};

#endif

