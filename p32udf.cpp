#include<iostream.h>
#include<conio.h>
//using namespace std;
//no arg. no ret.
class test
{
    public:
    void dosum()
    {
        cout<<"\n Inside Function";
    }
};
void main()
{
    clrscr();
    cout<<"Before Function Call\n";
    test a;
    a.dosum();
    cout<<"\n After Function Call";
    cout<<"\n";
    getch();
}