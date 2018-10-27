#include "reloj_implementor.h"

reloj_implementor::reloj_implementor(int hor,int min)
{
    ho=hor;
    mi=min;

}

void reloj_implementor::da_lahora(QPainter * painter){
    cout<<ho<<":"<<mi<<endl;
}

