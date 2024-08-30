#include <iostream.h>
#include<conio.h>
//using namespace std;
int max(int a, int b)
{
    return a>b ? a : b;
}
void main()
{
    cout << max(10, 20);
    cout << " " << max(99, 88);
    getch();
    //return 0;
}