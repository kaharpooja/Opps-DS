#include<iostream.h>
#include<conio.h>
//using namespace std;
void main()
{
    int i,j,sp=1,ch=97;
    i = 1;
    clrscr();
    while (i<=5)
    {
        j=1;
        while(j>=20-sp)
        {
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=i)
        {
            cout<<char(ch++)<<" ";
            // ch++;
            j++;
        }
        cout<<"\n";
        sp++;
        i++;
        
    }
    cout<<"\n";
    getch();
    //return 0;
}