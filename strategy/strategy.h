#ifndef STRATEGY_H
#define STRATEGY_H
#include "CImg.h"
#include <iostream>
using namespace std;
using namespace cimg_library;

class strategy
{
private:
    virtual imtype* escala_grises(){
      imtype *r=img.data(0,0,0,0);
      imtype *g=img.data(0,0,0,1);
      imtype *b=img.data(0,0,0,2);
      int ps;
      imtype *x=new imtype[img.width()*img.height()];
      for (int i = 0; i < img.height(); ++i)
      {
        for (int j = 0; j < img.width(); ++j)
        {
          ps=pos(i,j,img.width());
          x[ps]=(r[ps]+g[ps]+b[ps])/3;
        }
      }
    } 
    virtual void bordes()=0;
public:
	CImg<int> img;
    strategy(){
        img.assign("walker.bmp");
    }
    virtual ~strategy(){}
};

#endif // STRATEGY_H
