#ifndef STRATEGY_H
#define STRATEGY_H
#include "CImg.h"
#include <iostream>
using namespace std;
using namespace cimg_library;

class strategy
{
private:
    virtual void escala_grises() = 0;
   
public:
	CImg<int> img("walker.bmp");
   	int *r=img.data(0,0,0,0);
	int *g=img.data(0,0,0,1);
	int *b=img.data(0,0,0,2);

    strategy(){}
    virtual ~strategy(){}
    void insert_img(){
		
    }


};

#endif // STRATEGY_H
