#include<iostream.h>
#include<conio.h>
//using namespace std;
void main()
{
    double i[]={7,21,54,78,98};
    double sum=0,count=0,a;
    
    clrscr();

    cout<<"\n Enter Numbers";
    for(const double &n : i)
    {
        cout<<n<<" ";

        sum+=n;

        ++count;
        // cout<<"\n The Sum is "<<sum;
    }
    cout<<"\n The Sum is "<<sum;
    a = sum/count;
    cout<<"\nThe Average is"<<a;
    cout<<"\n";
    //return 0;
    getch();
}