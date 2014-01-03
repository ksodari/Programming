#include<iostream.h>
#include<conio.h>

inline void salary(float x)
{
 float sal=x-x/10;
 cout<<"Your salary after tax: "<<sal;
}
void main()
{
  float s;
  clrscr();
  cout<<"Enter your salary: ";
  cin>>s;
  salary(s);
  getch();
}