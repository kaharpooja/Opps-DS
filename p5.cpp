#include<iostream.h>
#include<conio.h>
//using namespace std;
void main()
{
   char i;
   clrscr();
   for(i=65;i<=90;i++)
   {
       cout<<char(i)<<"-"<<char(i+32)<<" ";
       cout<<"\n";
       
   } 
   cout<<"\n";
   getch();
   //return 0;
}