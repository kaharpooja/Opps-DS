#include <iostream.h>
#include<conio.h>
//using namespace std;
class myclass
{
    int a, b;
    public:
    friend int sum(myclass x);
    void set_ab(int i, int j);
};
void myclass::set_ab(int i, int j)
{
    a = i;
    b = j;
}
int sum(myclass x)
{
    return x.a + x.b;
}
void main()
{
    clrscr();
    myclass n;
    n.set_ab(3, 4);
    cout << sum(n);
    cout<<"\n";
    getch();
    //return 0;
}