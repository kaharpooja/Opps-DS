#include<iostream.h>
#include<conio.h>
//using namespace std;
//with arg. with ret
class test
{
    public:
    int func(int a)
    {
        int b;
        b=a*a;
        cout<<"\n Inside Function";
        return b;
    }
};
void main()
{
    int z,x=10;
    clrscr();
    cout<<"\n Before Function call";
    test t;
    z=t.func(x);
    cout<<"\nValue of z is"<<z;
    cout<<"\n";
    getch();
    //return 0;
}