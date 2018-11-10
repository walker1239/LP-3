#include <iostream>
#include <vector>
#include "grafibarras.h"
#include "grafipuntos.h"
using namespace std;

void puntos::notify() {
  for (int i = 0; i < obser.size(); i++){
      cout<<"size"<<obser.size()<<endl;
      obser[i]->update();
  }

}


int main() {
  puntos subj;
  grafibarras divObs1(&subj, 4);
  grafibarras divObs2(&subj, 3); 
  grafipuntos modObs3(&subj, 3);
  grafipuntos modObs4(&subj, 3);
  //subj.setVal(14);
  subj.setXY(14,20);
}