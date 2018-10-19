#ifndef FILEABSTRACT_H
#define FILEABSTRACT_H
#include <iostream>
using namespace std;

class Fileabstract
{
    public:
        //Fileabstract();
        virtual ~Fileabstract(){}
        virtual void listar() = 0;
        virtual void dibujar() = 0;
};


#endif