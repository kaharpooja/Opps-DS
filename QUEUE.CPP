#include<iostream.h>
#include<conio.h>
#define n 20
class queue
{
	int *arr;
	int front;
	int back;
	public:
	queue()
	{
		arr = new int[20];
		front =-1;
		back=-1;
	}
	void push(int x)
	{
		if(back==n-1)
		{
			cout<<endl<<"queue is overflow";
		}
		back++;
		arr[back]=x;
		if(front==-1)
		{
			front++;
		}

	}
	void pop()
	{
		if(front==-1 || front >back)
		{
			cout<<endl<<"no element in queue";
		}
		front++;
	}
       /*	int peek()
	{
		if(front==-1 || front >back)
		{
			cout<<endl<<"no element in queue";
			return -1;
		}
		return arr[front];
		//peek function show that when i pop the element which
		//element was pop.
	}
	int empty()
	{
		if(front==-1 || front >back)
		{
			return 1;
		}
		return 0;
	}*/
	void display()
	{
		if(front==-1)
		{
			cout<<"no element present"<<endl;
		}
		else
		{
			for(int i=front;i<=back;i++)
			{
				cout<<endl<<"arr["<<i<<"]"<<arr[i]<<"\t";
			}
		}
	}

};
void main()
{
	clrscr();
	queue a;
	a.push(5);
	a.push(6);
	a.push(7);
	a.push(8);
	a.pop();
	a.display();
	/*cout<<a.peek()<<endl;
	a.pop();
	cout<<a.empty()<<endl;*/
	getch();
}