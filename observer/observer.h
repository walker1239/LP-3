#ifndef OBSERVER_H
#define OBSERVER_H
#include "tabla.h"
using namespace std;
class Observer {
  public:
    Observer(tabla *mod) {
        tab = mod;
    }
    virtual void update() = 0;
  protected:
    tabla *tab;
};
#endif 