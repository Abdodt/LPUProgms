#include<iostream>
using namespace std;

struct stack{
    int data;
    struct stack *next;
};

struct stack *current;
struct stack *top;
int sum = 0;
void push(int data){
    current = new stack();
    current->data = data;
    current->next = top;
    top = current;
}

void display(){
    while (current!=NULL)
    {
        cout<<current->data<<endl<<"|"<<endl;;
        current = current->next;
    }
    
}

void sumStack(){
    if(top!=NULL){
        while(current!=NULL){
            sum = sum + current->data;
            current = current->next;
        }
        cout<<"The sum of elements in the Stack is"<<sum;
    }
    else{
        cout<<"THe stack is empty";
    }
}

int main(){
    push(3);
    push(5);
    push(6);
    push(8);
    push(11);
    push(20);
    display();
    sumStack();
}
