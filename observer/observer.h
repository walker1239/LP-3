#ifndef OBSERVER_H
#define OBSERVER_H
#include "puntos.h"
using namespace std;



class Observer {
  
    puntos *model;
    int denom;

  public:
    Observer(puntos *mod, int div) {
        model = mod;
        denom = div;
        
        model->attach(this);
    }
    virtual void update() = 0;
  protected:
    puntos *getSubject() {
        return model;
    }
    int getDivisor() {
        return denom;
    }
};
#endif 