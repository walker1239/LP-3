#ifndef STRATEGY_H
#define STRATEGY_H
#include "CImage.h"

class strategy
{
private:
    virtual void escala_grises() = 0;
public:
    strategy();
    virtual ~strategy();
    void get_borders();

};

#endif // STRATEGY_H
