#include<iostream.h>
#include<conio.h>
//using namespace std;
void main()
{
    int i,j;
    clrscr();
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    getch();
}