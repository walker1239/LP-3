#include "analogica_impl.h"

analogica_impl::analogica_impl(int hor, int min,bool _pm):reloj_implementor(hor,min)
{
    pm=_pm;
}
void analogica_impl::da_lahora(){
    cout<<ho<<":"<<mi<<":"<<pm<<endl;
}

