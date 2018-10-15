#include "analogica_impl.h"

analogica_impl::analogica_impl(int hor, int min,bool _pm):reloj_implementor(hor,min)
{
    pm=_pm;
}
void analogica_impl::da_lahora(QPainter * painter){
    cout<<ho<<":"<<mi<<":"<<pm<<endl;

}


void analogica_impl::set_hora(int _hora){
    ho=_hora;
}

int analogica_impl::get_hora(){
    return ho;
}





