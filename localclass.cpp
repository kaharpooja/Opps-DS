#include <iostream.h>
#include<conio.h>
//using namespace std;
void f();
void main()
{
    clrscr();
    f();
    getch();
    //return 0;
}
void f()
{
    class myclass 
    {
        int i;
        public:
        void put_i(int n) 
        { 
            i=n; 
        }
        int get_i() 
        { 
            return i; 
        }
    } ob;
    ob.put_i(10);
    cout << ob.get_i();
    cout<<"\n";
}
