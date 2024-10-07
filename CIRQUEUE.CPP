#include<iostream.h>
#include<conio.h>
#define Size 5
int queue[Size];
int front = -1;
int rear = -1;
void insert_queue(int added_item)
{
    if (front == -1 && rear == -1)
    {
	front = 0;
	rear = 0;
	queue[rear] = added_item;
    }
    else if ((rear + 1) % Size == front)
    {
	cout<<"Queue is overflow..";
    }
    else
    {
	rear = (rear + 1) % Size;
	queue[rear] = added_item;
    }
}
void delete_queue()
{
    if ((front == -1) && (rear == -1))
    {
	cout<<"\nQueue is underflow..";
    }
    else if (front == rear)
    {
	cout<<"\nThe Deleted element is "<<queue[front];
	front = -1;
	rear = -1;
    }
    else
    {
	cout<<"\nThe Deleted element is "<<queue[front];
	front = (front + 1) % Size;
    }
}
void display_queue()
{
    if (front == -1)
    {
	cout<<"\nQueue is Empty";
	//return;
    }
    cout<<"\nQueue elements : ";
    if (rear >= front)
    {
	for (int i = front; i <= rear; i++)
	{
		cout<<queue[i];
	}
    }
    else
    {
	for (int i = front; i < Size; i++)
	{
	    cout<<queue[i];
	}
	for (int j = 0; j <= rear; j++)
	{
	     cout<<queue[j];
	}
    }
}
void main()
{
    int choice, x;
    clrscr();
    do
    {
	cout<<"\n1.Insert \n";
	cout<<"2.Delete \n";
	cout<<"9.Display\n";
	cout<<"0.Quit\n";
	cout<<"Enter your choice : ";
	cin>>choice;

	switch (choice)
	{
	case 1:
	    cout<<"Enter the element which is to be inserted";
	    cin>>x;
	    insert_queue(x);
	    break;
	case 2:
	    delete_queue();
	    break;
	case 9:
	    display_queue();
	    break;
	case 0:
	    break;
	default:
	    cout<<"Wrong choice\n";
	}
    } while (choice != 0);
    //getch();
}
