#include<iostream>
using namespace std;
#define n 100

int queue[n];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear==n-1)
    {
        cout<< "queue is overflow!"<< endl;
    }
    else if(front==-1 && rear==-1)
    {
        front = rear =0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<< "queue is empty!" << endl;
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void display()
{
    if(front ==-1 && rear==-1)
    {
        cout<< "queue is empty!"<< endl;
    }
    else
    {
        for(int i=front; i<=rear; i++)
        {
            cout<< queue[i]<< endl;
        }
    }
}

void peek()
{
    if(front==-1 && rear==-1)
    {
        cout<< "queue is empty!"<< endl;
    }
    else
    {
        cout<< queue[front]<< endl;
    }
}

int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(-5);
    display();
    peek();

    dequeue();
    peek();
    display();
}
