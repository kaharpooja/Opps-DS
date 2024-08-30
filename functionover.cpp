#include<iostream.h>
#include<conio.h>
//using namespace std;
class Addition
{
    public:
    int sum(int n1,int n2)
    {
        return n1+n2;
        
    }
    int sum(int n1,int n2,int n3)
    {
        return n1+n2+n3;
    }

};
void main()
{
    clrscr();
    Addition obj;
    cout<<"Total of function1:-"<<obj.sum(10,20)<<endl;
    cout<<"Total of Function2:-"<<obj.sum(10,20,30)<<endl;
    getch();
    //return 0;
}