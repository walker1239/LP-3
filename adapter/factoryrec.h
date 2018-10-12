#ifndef FACTORYREC_H
#define FACTORYREC_H
#include <iostream>
using namespace std;
class factoryrec
{
private:
    int altura;
    int base;
    string color;
    //static rectangulo *s_pool[];
    factoryrec();
public:
    static factoryrec* instance;
    static factoryrec* get_instance();
    void set_lados(int _altura,int base);
    int get_base();
    int get_altura();
    void set_color(string _color);
    string get_color();
    void set_base(int _b);
    void set_altura(int _h);


};

#endif // FACTORYREC_H
