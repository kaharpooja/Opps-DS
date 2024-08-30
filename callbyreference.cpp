#include<iostream.h>
#include<conio.h>
//using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void main()
{
    int a=10,b=20;
    clrscr();
    cout<<"\nbefore swaping value"<<a<<"\t"<<b;
    swap(&a,&b);
    cout<<"\nafter swaping value"<<a<<"\t"<<b;
    getch();
}