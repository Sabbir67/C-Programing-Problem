#include<iostream>
using namespace std;

struct node{
    int data;
    node* next_add;
};

node* head;

void Insert(int y){
    node* nod_1= new node();
    nod_1->data=y;
    nod_1->next_add=NULL;
    head= nod_1;

}

void display(){
    node* temp=new node();
    temp= head;
    while(temp!=NULL){
        cout<<(temp->data);
        temp=temp->next_add;
    }

}


int main(){
    head=NULL;

    int x,y;



    Insert(2);
    display();

}
