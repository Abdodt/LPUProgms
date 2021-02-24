#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};

struct Node *head;
struct Node *current;
struct Node *tail;

void Append(int val)
{
    current = new Node();
    current->data = val;

    if(head==NULL){
        head = current;
        current->prev=NULL;
        current->next=NULL;
        tail = current;
    }
    else{
        current->prev =tail; //because first we have to link it with the tail else it'll break
        tail->next =current;
        current->next = NULL;
        tail = current;
    }
}
    void display(){
        current = head;
    cout<<"Printing all nodes of the Doubly Linked list Linked List"<<endl;
        while(current!=NULL)
        {
            cout<<"->"<<current->data;
            current = current->next;
        }
    }

void displayALT() {
    int counter = 0;
    cout<<"\nPrinting Alernate nodes of the Doubly Linked list Linked List"<<endl;
    while(head != NULL) {
        if (counter%2 == 0) {
           printf(" %d ", head->data);
        }
        counter++;
        head = head->next;
    }
}


    int main(){
        Append(4);
        Append(5);
        Append(7);
        Append(9);
        Append(44);
        Append(8);
        display();
        displayALT(); 
    }


