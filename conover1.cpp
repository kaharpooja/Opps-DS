#include<iostream.h>
#include<conio.h>
//using namespace std;
class test
{
    int l,w,h;
    public:
    test(int length)
    {
        l=length;
    }
    test(int width,int height,int length)
    {
        l=length;
        w=width;
        h=height;
        cout<<"\n box width is"<<l*w*h;
        // int a=l*w*h;
        
    }
     void display()
     {
         cout<<"\n value of box is"<<l;
     }
};
void main()
{
    clrscr();
    test t(10);
    test t1(20,30,10);
    t.display();
    getch();
    //return 0;
}