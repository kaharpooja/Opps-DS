#include<iostream.h>
#include<conio.h>
using namespace std;
void main()
{
    int i,j;
    clrscr();
    i=1;
    do
    {
       j=1;
       do
       {
           cout<<i;
           j++;
       } while (j<=i);
       cout<<"\n";

    i++;  
    } while (i<=5);
    cout<<"\n";
    getch();
    
}