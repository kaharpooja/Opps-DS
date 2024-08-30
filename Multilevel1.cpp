#include<iostream.h>
#include<conio.h>
//using namespace std;
class Employee 
{
    int eno;
    char name[20], des[20];	
    // Private members cannot call from outside class.
    public:
    void getEmpDetails() 
    {
        cout << "\nEnter the Employee number:";
        cin>>eno;
        cout << "Enter the Employee name:";
        cin>>name;
        cout << "Enter the Employee designation:";
        cin>>des;
    }
    void employee_display() 
    {
    	cout <<"\nEmployee number:"<<eno;
		cout <<"\nEmployee name:"<<name;
		cout <<"\nEmployee designation:"<<des;
    }
};

class Salary : public Employee 
{
	
    float bp, hra, da, pf, np;
    public:
    void getPayDetails()
    {
    	getEmpDetails();
        cout << "Enter the Basic pay:";
        cin>>bp;
        cout << "Enter the Humen Resource Allowance:";
        cin>>hra;
        cout << "Enter the Dearness Allowance :";
        cin>>da;
        cout << "Enter the Profitablity Fund:";
        cin>>pf;
        calculate();
    }

    void calculate() 
    {
        np = bp + hra + da - pf;
    }

    void salary_display() 
    {
    	employee_display();
    	cout <<"\nEmployee Basic pay:"<<bp;
		cout <<"\nEmployee Humen Resource Allowance:"<<hra;
		cout <<"\nEmployee Dearness Allowance:"<<da;
		cout <<"\nEmployee Profitablity Fund:"<<pf;
		cout <<"\nEmployee Net Pay:"<<np;
    }
};

class BankCredit : public Salary 
{
	char bank[20], ifsc_code[20];	
	int account_number;
	public:
	void getBankDetails()
     {
    	getPayDetails();
        cout << "Enter the Bank Name:";
        cin>>bank;
        cout << "Enter the IFSC:";
        cin>>ifsc_code;
        cout << "Enter the Account Number :";
        cin>>account_number;
    }
    void display() 
    {
    	salary_display();
    	cout <<"\nEmployee Bank Name:"<<bank;
		cout <<"\nEmployee IFSC:"<<ifsc_code;
		cout <<"\nEmployee Account Number:"<<account_number<<endl;
    }
};
void main() 
{
    int i, n;
    char ch;
    BankCredit s[10];
    clrscr();
    cout << "Simple Multi Level Inheritance Example Program : Payroll System \n";
    cout << "Enter the number of employee:";
    cin>>n;
    for (i = 0; i < n; i++) 
    {
    	cout << "\nEmployee Details # "<<(i+1)<<" : ";
        //s[i].getEmpDetails();
        // s[i].getPayDetails();
         s[i].getBankDetails();
    }
    for (i = 0; i < n; i++) 
    {
        // s[i].employee_display();
        // s[i].salary_display();
         s[i].display();
    }
    getch();
    //return 0;
}