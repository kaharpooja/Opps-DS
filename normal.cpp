#include<iostream.h>
#include<conio.h>
//using namespace std;
class Addition
{
    int a=10,b=20;
    public:
    void add()
    {
        cout<<"Enter value of a"<<a<<endl;
        // cin>>a;
        cout<<"Enter value of b"<<b;
        // cin>>b;
        // int c=a+b;
        // cout<<c;
    }

};
void main()
{
    clrscr();
    Addition a1;
    a1.add();
    getch();
    //return 0;
}