#include <iostream>//g++ -o main.exe main.cpp -O2 -lgdi32 
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
  int *sovel=new int[img.width()*img.height()];
  int *sovely=new int[img.width()*img.height()];
  int gx[9]={-1,0,1,-1,0,1,-1,0,1};
  int gy[9]={-1,-1,-1,0,0,0,1,1,1};
  for (int i = 1; i < img.height()-1; i++)
  {
    for (int j = 1; j < img.width()-1; j++)
    {
      ps=pos(i,j,img.width());
      sovel[ps]=(x[pos(i-1,j-1,img.width())]*gx[0])+(x[pos(i-1,j,img.width())]*gx[3])+(x[pos(i-1,j+1,img.width())]*gx[6])+(x[pos(i+1,j-1,img.width())]*gx[2])+(x[pos(i+1,j,img.width())]*gx[5])+(x[pos(i+1,j+1,img.width())]*gx[8]);
      sovely[ps]=(x[pos(i-1,j-1,img.width())]*gy[0])+(x[pos(i,j-1,img.width())]*gy[1])+(x[pos(i+1,j-1,img.width())]*gy[2])+(x[pos(i-1,j+1,img.width())]*gy[6])+(x[pos(i,j+1,img.width())]*gy[7])+(x[pos(i+1,j+1,img.width())]*gy[8]);
      
    }
  }
  int *image=new int[img.width()*img.height()];
  for (int i = 0; i < img.height(); i++)
  {
    for (int j = 0; j < img.width(); j++)
    {
      ps=pos(i,j,img.width());
      image[ps]=pow(pow(sovel[pos(i,j,img.width())],2)+pow(sovely[pos(i,j,img.width())],2),0.5);
      
    }
  }


  int *cannyx=new int[img.width()*img.height()];
  int *cannyy=new int[img.width()*img.height()];
  int cx[9]={-1,0,1,-2,0,2,-1,0,1};
  int cy[9]={-1,-2,-1,0,0,0,1,2,1};
  for (int i = 1; i < img.height()-1; i++)
  {
    for (int j = 1; j < img.width()-1; j++)
    {
      ps=pos(i,j,img.width());
      cannyx[ps]=(x[pos(i-1,j-1,img.width())]*cx[0])+(x[pos(i-1,j,img.width())]*cx[3])+(x[pos(i-1,j+1,img.width())]*cx[6])+(x[pos(i+1,j-1,img.width())]*cx[2])+(x[pos(i+1,j,img.width())]*cx[5])+(x[pos(i+1,j+1,img.width())]*cx[8]);
      cannyy[ps]=(x[pos(i-1,j-1,img.width())]*cy[0])+(x[pos(i,j-1,img.width())]*cy[1])+(x[pos(i+1,j-1,img.width())]*cy[2])+(x[pos(i-1,j+1,img.width())]*cy[6])+(x[pos(i,j+1,img.width())]*cy[7])+(x[pos(i+1,j+1,img.width())]*cy[8]);
      
    }
  }
  int *image3=new int[img.width()*img.height()];
  for (int i = 0; i < img.height(); i++)
  {
    for (int j = 0; j < img.width(); j++)
    {
      ps=pos(i,j,img.width());
      image3[ps]=pow(pow(cannyx[pos(i,j,img.width())],2)+pow(cannyy[pos(i,j,img.width())],2),0.5);
      
    }
  }

  




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
  CImg<int> so(sovel,img.width(),img.height(),1,1,1);
  CImg<int> so1(sovely,img.width(),img.height(),1,1,1);
  CImg<int> isar(image,img.width(),img.height(),1,1,1);
  CImg<int> isr(image3,img.width(),img.height(),1,1,1);
  /*for (int i = 0; i < 100; ++i)
    cout<<img.data()[i];
  cout<<endl<<endl<<endl;
  690 1200
  */(img,gris,dibujo,so,so1,isar,isr).display();
  return 0;
}