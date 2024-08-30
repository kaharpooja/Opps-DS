#include<iostream.h>
#include<conio.h>
//using namespace std;
class test
{
    float x;
    public:
    test(int c,int d,int e)
    {
        x = c+d+e;
        //cout<<"hellooo";
    }
    test(int a, int b)
    {
        x= a * b;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
void main()
{
    clrscr();
    test t(20,30,10);
    test t1(10,20);
    t.display();
    t1.display();
    
    //t1.display();
    getch();
    //return 0;
}