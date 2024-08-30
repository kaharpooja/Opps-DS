#include<iostream.h>
#include<conio.h>
//using namespace std;
class test
{
    int a;
    public:
    test(int n)
    {
        a=n;
        cout<<"\nConstructor Called"<<n;
        // cout<<"\nConstructor Called1"<<n;
        // cout<<"\nConstructor Called2"<<n;
    }
    ~test(){
        cout<<"\n Destructor Called"<<a;
    }
    
    
};
void main()
{
    clrscr();
    test t(10),t1(20),t2(30);
    cout<<"\n";
    getch();
    //return 0;
}