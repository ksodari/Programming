#include<iostream.h>
#include<conio.h>
float convert(float);
float convert(int);
void main()
{
   float ft;
   int in;
   clrscr();
   cout<<"Enter inch:  ";
   cin>>in;
   cout<<"Enter feet:  ";
   cin>>ft;
  // con=convert(in);
   cout<<"Inch to feet: "<<convert(in)<<endl;
   cout<<"Feet to Inch: "<<convert(ft)<<endl;
   getch();
}
 float convert(float x)
 {
  return(x*12);
 }
 float convert(int x)
 {
  return(x/12);
 }