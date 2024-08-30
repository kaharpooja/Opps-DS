#include <iostream.h>
#include<conio.h>
//using namespace std;
class myclass 
{
    int i;
    public:
    myclass(int n)
    {
        i=n;
    }
    // ~myclass();
    void set_i(int n) 
    { 
        i=n; 
    }
    int get_i() 
    { 
        return i; 
    }
};
// myclass::myclass(int n)
// {
//     i = n;
//     cout << "Constructing " << i << "\n";
// }
// myclass::~myclass()
// {
//     cout << "Destroying " << i << "\n";
// }
//  void f(myclass ob);
void f(myclass ob)
{
    ob.set_i(2);
    cout << "This is local i: " << ob.get_i();
    cout << "\n";
}
void main()
{
    clrscr();
    myclass o(1);
    f(o);
    cout << "This is i in main: ";
    cout << o.get_i() << "\n";
    getch();
    //return 0;
}
