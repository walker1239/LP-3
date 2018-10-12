#include "digital_impl.h"

digital_impl::digital_impl(int hora, int min, int seg):reloj_implementor(hora,min)
{
    ho=hora;
    mi=min;
    s=seg;
}
void digital_impl::da_lahora(){
    cout<<ho<<":"<<mi<<":"<<s<<endl;
}

