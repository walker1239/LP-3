#include <iostream>
#include "CImg.h"
using namespace std;
using namespace cimg_library;
int main()
{
  CImg<int> img("walker.bmp");
  cout<<endl<<endl<<endl;
  int *r=img.data(0,0,0,0);
  int *g=img.data(0,0,0,1);
  int *b=img.data(0,0,0,2);
  
  int *x=new int[img.width()*img.height()];
  for (int i = 0; i < img.width()*img.height(); ++i)
  {
    x[i]=(r[i]+g[i]+b[i])/3;
  }
  CImg<int> gris(x,img.width(),img.height(),1,1,1);
  /*for (int i = 0; i < 100; ++i)
    cout<<img.data()[i];
  cout<<endl<<endl<<endl;
  */(img,gris).display();
  return 0;
}