#ifndef OBSERVER_H
#define OBSERVER_H

class observer
{
public:
    observer();
    virtual void notify() = 0;
};

#endif // OBSERVER_H
