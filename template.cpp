#include<iostream.h>
#include<conio.h>
//using namespace std;
template <class T>
T Large(T n1, T n2)
{
    return(n1>n2) ? n1 :n2;
}
void main()
{
    int i1,i2;
    
    char c1,c2;float f1,f2;
    clrscr();
    cout<<"Enter two integer:\n";
    cin>>i1>>i2;
    cout<<Large(i1,i2)<<"is larger"<<endl;

    cout<<"Enter two floating value:\n";
    cin>>f1>>f2;
    cout<<Large(f1,f2)<<"is larger"<<endl;

    cout<<"Enter two character:\n"<<endl;
    cin>>c1>>c2;
    cout<<Large(c1,c2)<<"is larger\n"<<endl;
    getch();
}