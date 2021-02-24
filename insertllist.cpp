#include<iostream>
usinga namespace std;

int main(){
    struct Node
    {
        int data;
        struct Node *next;
        struct node *prev;
    }*current,*last;
    struct Node *head;
    int choice =1;
    last = NULL;
    cout<<"Insert the Element to the end"<<endl;
    do
    {
        current= new Node();
        cout<<"Enter the data into the node:";
        cin>>current->data;
        if (head==NULL)
        {
            current = head;
            cout<<"Node appended";
        }
        else{
            Node* next
        }        
        
    } while (choice==1);
}



// Insertion at the beginning
// #include<iostream>
// using namespace std;
// int main()
// {
// struct node
// { int data;
// struct node* next ;
// struct node* prev;
// } *temp,*head,*last,*temp2;
// int choice=1;
// last =0;
// cout<<"Inserting at the end of list";
// while(choice==1)
// { temp = new node();
// cout<<"Enter the data of node";
// cin>> temp->data;
// if(last==0) {
// head=last=temp;
// temp->prev = 0;
// temp->next =0; }
// else{
// last->next =temp;
// temp->prev = last;
// last=temp;
// last->next =0;
// }
// cout<<“Do you want to continue?”;
// cin>>choice;
// }