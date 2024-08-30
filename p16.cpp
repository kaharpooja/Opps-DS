#include<iostream.h>
#include<conio.h>
//using namespace std;
void main()
{
    char i=90;
    clrscr();
    while(i>=65)
    {
        cout<<char(i+32)<<"-"<<(i+32)<<"\n";
        i--;
    }
    cout<<"\n";
    getch();
   // return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     for(ch=90;ch>=65;ch--)
//     {
//         cout<<ch<<"-"<<ch+32<<"\n";
//     }
//     cout<<"n";
//    return 0;
// }


