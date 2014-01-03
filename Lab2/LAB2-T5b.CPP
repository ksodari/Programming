#include<iostream>
#include<conio.h>
using namespace std;
void convert(float, float &);
void convert(int, float &);
int main()
{
   float ft,ans1,ans2;
   int in;
   //clrscr();
   cout<<"Enter inch:  ";
   cin>>in;
   cout<<"Enter feet:  ";
   cin>>ft;
   convert(in,ans1);
   cout<<"Inch to feet: "<<ans1<<endl;
   convert(ft,ans2);
   cout<<"Feet to Inch: "<<ans2<<endl;
   getch();
}
 void convert(float x,float &y)
 {
  y=x*12;
 }
 void convert(int x,float &y)
 {
  y=x/12;
 }
