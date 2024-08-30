#include<iostream.h>
#include<conio.h>
//using namespace std;
void main()
{
    int i,j,sp=0,k=15;
    clrscr();
    i=5;
    do
    {
        j=1;
        do
        {
            cout<<" ";
            j++;
        } while(j<=40-sp);
         j=1;
        do
        {
            cout<<" "<<k;
            k--;
            j++;
        } while (j<=i);
        cout<<"\n";
        i--;
    } while (i>=1);
    cout<<"\n";  
    getch();  
}