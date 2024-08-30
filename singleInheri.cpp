#include <iostream.h>
#include<conio.h>
//using namespace std;
class base 
{
    public:
    int i, j;
    void set(int a, int b) 
    { 
        i=a; 
        j=b; 
    }
    void show() 
    { 
        cout << i << " " << j << "\n"; 
    }
};
class derived : public base 
{
    int k;
    public:
    derived(int x) 
    { 
        k=x; 
    }
    void showk() 
    { 
        cout << k<<" " << i <<" " << j<< "\n"; 
    }
};
void main()
{
    clrscr();
    derived ob(3);
    ob.set(1, 2); // access member of base
    ob.show(); // access member of base
    ob.showk(); // uses member of derived class
    getch();
    //return 0;
}