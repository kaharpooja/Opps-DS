#include <iostream.h>
#include<conio.h>
//using namespace std;
class myclass 
{
    int i;
    public:
    void set_i(int n) 
    { 
        i=n; 
    }
    int get_i() 
    { 
        return i*i; 
    }
};
myclass  f()
{
    myclass x;
    x.set_i(10);
    return x;
}
void main()
{
    clrscr();
    myclass o;
    o = f();
    // o.set_i(10);
    cout << o.get_i() << "\n";
    getch();
    //return 0;
}
