#include "digital_impl.h"
#include <QString>
digital_impl::digital_impl(int hora, int min, int seg):reloj_implementor(hora,min)
{
    ho=hora;
    mi=min;
    s=seg;
}
void digital_impl::da_lahora(QPainter * painter){
    cout<<ho<<":"<<mi<<":"<<s<<endl;
    string text=to_string(ho)+":"+to_string(mi)+":"+to_string(s);
    QString texto=QString::fromStdString(text);
    painter->drawText(120,0,texto);
}

