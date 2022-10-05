#include <iostream>
#include <stdio.h>
using namespace std;

template<typename type>
class Queue{
private:
int front,rear,max;//max for capacity
type *queue;
public:
    Queue(int capacity){
        if(capacity<=0){
            cout<<"The queue can't be empty or invalid. Default is 10";
            capacity=10;
        }
        max=capacity;
        rear=front=-1;//Since 0 is the 1st element inti r&f as -1
        queue=new type[max];//making queue with array of type"TYPE" at capacity max.
    }
    bool isEmpty()
    {
        if(front==-1&&rear==-1)
        return true;
        else
        return false;
    }
    bool isFull(){
        if(rear==max-1)
        return true;
        else
        return false;
    }
    void enqueue(type inp){
        if(isFull())
        cout<<"Queue is full"<<endl;
        else{
            if(front==-1)
            front=0;//since rear and front should reach to 0 when adding a 1st element.
            rear++;
            queue[rear]=inp;
        }
    }
    void dequeue(){
        if(isEmpty())
        cout<<"Queue is empty"<<endl;
        else{
            if(rear==front)//if only one element is available.
            rear=front=-1;
            else
            front++;
        }
    }
    int getfront(){
        if(isEmpty())
        cout<<"Queue is empty"<<endl;
        else
        return queue[front];
    }
    void display(){
        cout<<"front: "<<front<<endl;
        cout<<"rear: "<<rear<<endl;
        cout<<"queue: ";
        if(isEmpty())
        cout<<"Queue is empty"<<endl;
        else{
            for (int i = front; i <=rear ; i++)//front se lekar rear tak.
            cout<<queue[i]<<"\t";
        }
    }

};




int main(){
Queue<int> obj(5);
int ch, val;
while(true){
    cout<<"\n\n\tQueue operation(1.enQueue 2.deQueue 3.getFront 4.exit :";
    cin>>ch;
    switch(ch){
    case 1:
        cout<<"\n\tEnter integer :";
        cin>>val;
        obj.enqueue(val);
        break;
    case 2:
        obj.dequeue();
        break;
    case 3:
        val=obj.getfront();
        if(val != NULL)
            cout<<"Top element of the Queue :"<<val<<endl;
        else
            cout<<"Empty queue ";
        break;
    case 4:
        exit(0);
            }
    obj.display();
    }
    return 0;
}