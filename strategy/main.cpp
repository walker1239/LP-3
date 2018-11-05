#include <iostream>
#include "CImg.h"
#include <cmath>
using namespace std;
using namespace cimg_library;
int pos(int i, int j,int width){
  return (width*i)+j;
}
int main()
{
  CImg<int> img("walker.bmp");
  cout<<endl<<endl<<endl;
  int *r=img.data(0,0,0,0);
  int *g=img.data(0,0,0,1);
  int *b=img.data(0,0,0,2);
  int ps;
  int *x=new int[img.width()*img.height()];
  for (int i = 0; i < img.height(); ++i)
  {
    for (int j = 0; j < img.width(); ++j)
    {
      ps=pos(i,j,img.width());
      x[ps]=(r[ps]+g[ps]+b[ps])/3;
    }
  }
  cout<<"width"<<img.width()<<"height"<<img.height()<<endl;
  int *d=new int[img.width()*img.height()];
  for (int i = 1; i < img.height(); i++)
  {
    for (int j = 0; j < img.width()-1; j++)
    {
      ps=pos(i,j,img.width());
      d[ps]=pow(pow((x[pos(i-1,j,img.width())]-x[pos(i,j,img.width())]),2)+pow((x[pos(i,j+1,img.width())]-x[pos(i,j,img.width())]),2),0.5);
      
    }
  }

  /*for (int i = 0; i < img.width()*img.height(); ++i)
  {
    x[i]=(r[i]+g[i]+b[i])/3;
  }*/
  cout<<"width"<<img.width()<<"height"<<img.height()<<endl;
  CImg<int> gris(x,img.width(),img.height(),1,1,1);
  CImg<int> dibujo(d,img.width(),img.height(),1,1,1);
  /*for (int i = 0; i < 100; ++i)
    cout<<img.data()[i];
  cout<<endl<<endl<<endl;
  690 1200
  */(img,gris,dibujo).display();
  return 0;
}