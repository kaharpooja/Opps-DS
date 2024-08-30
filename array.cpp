#include<iostream.h>
#include<conio.h>
//using namespace std;
void main()
{
    int a[5],i;
    cout<<"\n Enter any five numbers:";

    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"\n The numbers are:";

    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    getch();
    //return 0;
    
}