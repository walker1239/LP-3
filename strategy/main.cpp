#include <iostream>//g++ -o main.exe main.cpp -O2 -lgdi32 
#include "CImg.h"
#include <cmath>
using namespace std;
using namespace cimg_library;
typedef double imtype;
int pos(int i, int j,int width){
  return (width*i)+j;
}
int main()
{
  CImg<imtype> img("walker.bmp");
  cout<<endl<<endl<<endl;
  imtype *r=img.data(0,0,0,0);
  imtype *g=img.data(0,0,0,1);
  imtype *b=img.data(0,0,0,2);
  int ps;
  imtype *x=new imtype[img.width()*img.height()];
  for (int i = 0; i < img.height(); ++i)
  {
    for (int j = 0; j < img.width(); ++j)
    {
      ps=pos(i,j,img.width());
      x[ps]=(r[ps]+g[ps]+b[ps])/3;
    }
  }
  cout<<"width"<<img.width()<<"height"<<img.height()<<endl;
  imtype *sovel=new imtype[img.width()*img.height()];
  imtype *sovely=new imtype[img.width()*img.height()];
  imtype gx[9]={-1,0,1,-1,0,1,-1,0,1};
  imtype gy[9]={-1,-1,-1,0,0,0,1,1,1};
  for (int i = 1; i < img.height()-1; i++)
  {
    for (int j = 1; j < img.width()-1; j++)
    {
      ps=pos(i,j,img.width());
      sovel[ps]=(x[pos(i-1,j-1,img.width())]*gx[0])+(x[pos(i-1,j,img.width())]*gx[3])+(x[pos(i-1,j+1,img.width())]*gx[6])+(x[pos(i+1,j-1,img.width())]*gx[2])+(x[pos(i+1,j,img.width())]*gx[5])+(x[pos(i+1,j+1,img.width())]*gx[8]);
      sovely[ps]=(x[pos(i-1,j-1,img.width())]*gy[0])+(x[pos(i,j-1,img.width())]*gy[1])+(x[pos(i+1,j-1,img.width())]*gy[2])+(x[pos(i-1,j+1,img.width())]*gy[6])+(x[pos(i,j+1,img.width())]*gy[7])+(x[pos(i+1,j+1,img.width())]*gy[8]);
      
    }
  }
  imtype *image=new imtype[img.width()*img.height()];
  for (int i = 0; i < img.height(); i++)
  {
    for (int j = 0; j < img.width(); j++)
    {
      ps=pos(i,j,img.width());
      image[ps]=pow(pow(sovel[pos(i,j,img.width())],2)+pow(sovely[pos(i,j,img.width())],2),0.5);
      
    }
  }


  imtype *cannyx=new imtype[img.width()*img.height()];
  imtype *cannyy=new imtype[img.width()*img.height()];
  imtype cx[9]={-1,0,1,-2,0,2,-1,0,1};
  imtype cy[9]={-1,-2,-1,0,0,0,1,2,1};
  for (int i = 1; i < img.height()-1; i++)
  {
    for (int j = 1; j < img.width()-1; j++)
    {
      ps=pos(i,j,img.width());
      cannyx[ps]=(x[pos(i-1,j-1,img.width())]*cx[0])+(x[pos(i-1,j,img.width())]*cx[3])+(x[pos(i-1,j+1,img.width())]*cx[6])+(x[pos(i+1,j-1,img.width())]*cx[2])+(x[pos(i+1,j,img.width())]*cx[5])+(x[pos(i+1,j+1,img.width())]*cx[8]);
      cannyy[ps]=(x[pos(i-1,j-1,img.width())]*cy[0])+(x[pos(i,j-1,img.width())]*cy[1])+(x[pos(i+1,j-1,img.width())]*cy[2])+(x[pos(i-1,j+1,img.width())]*cy[6])+(x[pos(i,j+1,img.width())]*cy[7])+(x[pos(i+1,j+1,img.width())]*cy[8]);
      
    }
  }
  imtype *image3=new imtype[img.width()*img.height()];
  for (int i = 0; i < img.height(); i++)
  {
    for (int j = 0; j < img.width(); j++)
    {
      ps=pos(i,j,img.width());
      image3[ps]=pow(pow(cannyx[pos(i,j,img.width())],2)+pow(cannyy[pos(i,j,img.width())],2),0.5);
      
    }
  }

  




  imtype *d=new imtype[img.width()*img.height()];
  for (int i = 1; i < img.height(); i++)
  {
    for (int j = 0; j < img.width()-1; j++)
    {
      ps=pos(i,j,img.width());
      d[ps]=pow(pow((x[pos(i-1,j,img.width())]-x[pos(i,j,img.width())]),2)+pow((x[pos(i,j+1,img.width())]-x[pos(i,j,img.width())]),2),0.5);
      
    }
  }

  /*for (imtype i = 0; i < img.width()*img.height(); ++i)
  {
    x[i]=(r[i]+g[i]+b[i])/3;
  }*/
  cout<<"width"<<img.width()<<"height"<<img.height()<<endl;
  CImg<imtype> gris(x,img.width(),img.height(),1,1,1);
  CImg<imtype> dibujo(d,img.width(),img.height(),1,1,1);
  CImg<imtype> so(sovel,img.width(),img.height(),1,1,1);
  CImg<imtype> so1(sovely,img.width(),img.height(),1,1,1);
  CImg<imtype> isar(image,img.width(),img.height(),1,1,1);
  CImg<imtype> isr(image3,img.width(),img.height(),1,1,1);
  /*for (imtype i = 0; i < 100; ++i)
    cout<<img.data()[i];
  cout<<endl<<endl<<endl;
  690 1200
  */(img,gris,dibujo,so,so1,isar,isr).display();
  return 0;
}