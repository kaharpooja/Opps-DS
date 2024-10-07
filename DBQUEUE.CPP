#include<iostream.h>
#include<conio.h>
#define Size 5
int deque_arr[Size];
int front = -1;
int rear = -1;
void insert_rear()
{
    cout<<"\nBefore --> front :"<<front<<"rear : "<<rear;
    int added_item;
    if ((front == 0 && rear == Size - 1) || (front == rear + 1))
    {
	cout<<"\nQueue Overflow";
	return;
    }
    if (front == -1)
    {
	front = 0;
	rear = 0;
    }
    else if (rear == Size - 1)
    {
	rear = 0;
    }
    else
    {
	rear = rear + 1;
    }
    cout<<"\nInput the element for adding in queue : ";
    cin>>added_item;
    deque_arr[rear] = added_item;
    cout<<"\nAfter --> front :"<<front<<"rear :"<<rear;
}
void insert_front()
{
    cout<< "\nAfter --> front :"<<front<<"rear : "<<rear;
    int added_item;
    if ((front == 0 && rear == Size - 1) || (front == rear + 1))
    {
	cout<<"\nQueue Overflow";
	return;
    }
    if (front == -1)
    {
	front = 0;
	rear = 0;
    }
    else if (front == 0)
    {
	front = Size - 1;
    }
    else
    {
	front = front - 1;
    }
    cout<<"\nInput the element for adding in queue : ";
    cin>>added_item;
    deque_arr[front] = added_item;
    cout<<"\nAfter --> front :"<<front<<"rear :" <<rear;
}
void delete_front()
{
    if (front == -1)
    {
	cout<<"\nQueue Underflow\n";
	return;
    }
    cout<<"\nElement deleted from queue is : " <<deque_arr[front];
    if (front == rear)
    {
	front = -1;
	rear = -1;
    }
    else if (front == Size - 1)
    {
	front = 0;
    }
    else
    {
	front = front + 1;
    }
}
void delete_rear()
{
    if (front == -1)
    {
	cout<<"\nQueue Underflow";
	return;
    }
    cout<<"\nElement deleted from queue is : "<<deque_arr[rear];
    if (front == rear)
    {
	front = -1;
	rear = -1;
    }
    else if (rear == 0)
    {
	rear = Size - 1;
    }
    else
    {
	rear = rear - 1;
    }
}
void display_queue()
{
    int front_pos = front, rear_pos = rear;
    if (front == -1)
    {
	cout<<"\nQueue is empty";
	return;
    }
    cout<<"\nQueue elements : ";
    if (front_pos <= rear_pos)
    {
	while (front_pos <= rear_pos)
	{
	    cout<<deque_arr[front_pos];
	    front_pos++;
	}
    }
    else
    {
	while (front_pos <= Size - 1)
	{
	    cout<<deque_arr[front_pos];
	    front_pos++;
	}
	front_pos = 0;
	while (front_pos <= rear_pos)
	{
	    cout<<deque_arr[front_pos];
	    front_pos++;
	}
    }
    cout<<"\n";
}
void main()
{
    int choice;
    clrscr();
    do
    {
	cout<<"\n 1.Insert at rear";
	cout<<"\n 2.Insert at front";
	cout<<"\n 3.Delete from rear";
	cout<<"\n 4.Delete from front";
	cout<<"\n 9.Display";
	cout<<"\n 0.Quit";
	cout<<"\n Enter your choice : ";
	cin>>choice;
	switch (choice)
	{
	case 1:
	    insert_rear();
	    break;
	case 2:
	    insert_front();
	    break;
	case 3:
	    delete_rear();
	    break;
	case 4:
	    delete_front();
	    break;
	case 9:
	    display_queue();
	    break;
	case 0:
	    break;
	default:
	    cout<<"\nWrong choice\n";
	}
    } while (choice != 0);
  //  getch();
}