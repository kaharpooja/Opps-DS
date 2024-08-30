#include<iostream.h>
#include<conio.h>
//using namespace std;
void main()
{
    int a[5][5],i,j;
    clrscr();
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter value of a["<<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           // cout<<"value of a[i][j] is";
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
    //return 0;
    getch();
}