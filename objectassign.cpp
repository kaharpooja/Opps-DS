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
        return i; 
    }
};
void main()
{
    clrscr();
    myclass ob1, ob2;
    ob1.set_i(99);
    ob2 = ob1; // assign data from ob1 to ob2
    cout << "This is ob2's i: " << ob2.get_i();
    getch();
    // return 0;
}