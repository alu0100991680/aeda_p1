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
    myvector();
    myvector(const myvector& orig);
    virtual ~myvector();
    void show();
    int count();
    void clear();
    void remove();
    TDATO& get(int i);
    void add(TDATO &d);
    void removeat(int at);
    void debug(bool is_active);
    void insert(TDATO &d, int at);
private:
    int length = 0;
    int max_limit = 0;
    bool debug_flag = false;
    struct TDATO *p_objects;
    void resize(int i);
    void dmsg(std::string message);
};

#endif
