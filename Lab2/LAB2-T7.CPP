#include<iostream.h>
#include<conio.h>

void display(char txt[]="Kathmandu", int n=5)
{
 int i=0;
 while(txt[i]!='\0' && n!=0)
 {
   cout<<txt[i];
   i++;
   n--;
 }
}
void main()
{
  clrscr();
  display();cout<<endl;
  display("Lalitpur"); cout<<endl;
  display("lalitpur",3);
  getch();
}