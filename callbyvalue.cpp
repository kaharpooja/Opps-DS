#include<iostream.h>
#include<conio.h>
//using namespace std;
int func(int n)
{
    n=3+9;
    cout<<n;
}
void main()
{
    int x=5;
    clrscr();
    func(x);
    cout<<"x is:"<<x;
    getch();
}