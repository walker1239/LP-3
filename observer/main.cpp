#include <iostream>
#include <vector>
#include "grafibarras.h"
//#include "grafipuntos.h"
using namespace std;

void tabla::notify() {
  for (int i = 0; i < obser.size(); i++){
      cout<<"size"<<obser.size()<<endl;
      obser[i]->update();
  }

}


int main() {


  tabla subj(15,6);
  grafibarras *grab;
  grab=new grafibarras(&subj);
  subj.attach(grab);
 //grafibarras grab2(subj);
  subj.addpoint(17,20);
  subj.addpoint(15,20);
  subj.addpoint(35,20);
  subj.addpoint(45,20);
  subj.setXY(16,24,1);

}