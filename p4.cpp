#include<iostream.h>
#include<conio.h>
//using namespace std;
void main()
{
   char i;
   clrscr();
   for(i=65;i<=90;i++)
   {
       if(i%2 == 0)
       {
           cout<<char(i+32)<<"\t";
       }
       else
       {
           cout<<char(i)<<"\t";
       }
       
   } 
   //return 0;
   getch();
}