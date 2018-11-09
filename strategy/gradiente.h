#ifndef GRADIENTE_H
#define GRADIENTE_H
#include "strategy.h"
class gradiente:public strategy
{
private:
    void escala_grises(){
    	 /*x=new int[img.width()*img.height()];
    	  for (int i = 0; i < img.height(); ++i)
		  {
		    for (int j = 0; j < img.width(); ++j)
		    {
		      ps=pos(i,j,img.width());
		      x[ps]=(r[ps]+g[ps]+b[ps])/3;
		    }
		  }
		  */
    }

public:
    gradiente(): strategy()
    {}
    ~gradiente(){}

};

#endif // GRADIENTE_H
