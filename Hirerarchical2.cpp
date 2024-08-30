#include<iostream.h>
#include<conio.h>
//using namespace std;

class father
// Base class derivation
{
  int age;
  char name [20];
  
  public:
    void get()
    {
      cout << "\nEnter father's name:";
      cin >> name;
      cout << "Enter father's age:";
      cin >> age;
    }
  
    void show()
    {
      cout << "\n\nFather's name is " << name;
      cout << "\nFather's age is " << age;
    }
};

class son : public father
// First derived class derived from father class
{
  int age;
  char name [20];

  public:
    void get()
    {
      father :: get();
      cout << "Enter son's name:";
      cin >> name;
      cout << "Enter son's age:";
      cin >> age;
    }

    void show()
    {
      father::show();
      cout << "\nSon's name is " << name;
      cout << "\nSon's age is " << age;
    }
};

class daughter : public father
// Second derived class deribed from the father class
{
  int age;
  char name [20];

  public:
    void get()
    {
      father :: get();
      cout << "Enter daughter's name:";
      cin >> name;
      cout << "Enter daughter's age:";
      cin >> age;
    }

    void show()
    {
      father::show();
      cout << "\nDaughter's name is " << name;
      cout << "\nDaughter's age is " << age;
    }
};

void main ()
{
  clrscr();
  son s1;
  daughter d1;
  s1.get();
  d1.get();
  s1.show();
  d1.show();
  getch();

  //eturn 0;
}