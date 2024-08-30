#include<iostream.h>
#include<conio.h>
//using namespace std;
class test
{
    double w;
    public:
    friend void printWidth(test t);
    void setWidth(double wid);
};
void test::setWidth(double wid)
{
    w = wid;
}
void printWidth(test t1)
{
    cout<<" Width is "<<t1.w<<endl;
}
void main()
{
    test t;
    t.setWidth(10.2);
    printWidth(t);
    getch();
    //return 0;
}

