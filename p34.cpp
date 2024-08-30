#include<iostream.h>
#include<String.h>
#include<conio.h>
//using namespace std;
class employee
{
    char name[80];
    public:
    void putname(char *n);
    void getname(char *n); 
    private:
    double wage;
    public:
    void putwage(double wage);
    double getwage();
};
void employee :: putname(char *n)
{
    strcpy(name,n);
}
void employee :: getname(char *n)
{
    strcpy(n,name);
}
void employee ::putwage(double w)
{
    wage = w;
}
double employee::getwage()
{
    return wage;
}
void main()
{
    clrscr();
     employee e;
     char name[80];
     e.putname("Anam Malik");
     e.putwage(75000);

     e.getname(name);
     cout<<name<<"is\n";
     cout<<e.getwage()<<"per Year\n";
     getch();
     //return 0;
}