#include <stdio.h>
#include <iostream>
using namespace std;

template <class type>
class Stack{
    private:
    int max,Top; //MAX is the range //Top is the the mosted upward element.
    type *stack; //The array of stack elements
    public:
    Stack(int stacksize) // Constructor
    {
        if(stacksize<=0) //Checking input if neg or zero 
        {
            cout<<"Stack can't have a negative value .Defaut is 10";
            stacksize=10;
        }
        max=stacksize;
        Top=-1; //Since 0 is the first element and the init should be empty.
        stack=new type[max]; //Initialize the stack with its capacity.   
    }
    bool isEmpty()
    {
        return(Top==-1);
    }
    
    bool isFull()
    {
        return(Top==max-1);
    }

    void pop(){ //Element should match the type of the stack ,hence : type newelement.
        if(isEmpty())
        cout<<"Empty stack."<<endl;
        else{
            Top--;
        }
    }
    void push(type newelement){
        if(isFull())
        cout<<"Full already"<<endl;
        else{
            Top++;
            stack[Top]=newelement;
        }
    }
    type peek(){ // BECOZ WE WANT TO RETURN A 'type' TYPE value. 
    if(isEmpty())
    {
        cout<<"Empty stack."<<endl;
        return NULL;
    }
    else return stack[Top];
    }

    void display(){
        cout<<"\nTop:"<<Top;
        cout<<"\nStack:\t";
        for (int i=0;i<=Top;i++){
            cout<<stack[i]<<"\t";
        }
    }
};

int main()
{
    cout<<"Set limit for your stack:"<<endl;
    int tmp;
    cin>>tmp;
    Stack<int> obj(tmp);
    int sw;
    while(true){
        cout<<"\n\n Stack operations (1.push 2.pop 3.peek 4.exit)"<<endl;
        cin>>sw;
        switch(sw)
        {
        case 1:
        cout<<"\nEnter the int to push: "<<endl;
        cin>>tmp;
        obj.push(tmp);
        break;
        
        case 2:
        obj.pop();
        break;

        case 3:
        tmp=obj.peek();
        if(tmp!=NULL)
        cout<<"\nThe Top element is:"<<tmp<<endl;
        break;

        case 4:
        exit(0);
        }
        obj.display();
    }
    return 0;
}
