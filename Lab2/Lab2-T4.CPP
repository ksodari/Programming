#include<iostream.h>
#include<conio.h>
float &temp(float &n1, float &n2)
{
  if(n1>n2)
  return(n1);
  else
  return(n2);
}
void main()
{
  float t1,t2;
  clrscr();
  cout<<"Enter two tempertures: "<<endl;
  cout<<"t1= "; cin>>t1;
  cout<<"t2= "; cin>>t2;
  cout<<endl;
  temp(t1,t2)=100;
  cout<<t1<<endl;
  cout<<t2<<endl;
  getch();
}