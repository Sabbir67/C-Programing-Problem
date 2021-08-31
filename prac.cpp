#include<iostream>
using namespace std;

// Node Class
struct node{
    int data ;
    node* next_add;

};

node* head = NULL;

void insert_first(int y){
    // Create a Node
    node* temp = new node();
    temp->data = y;
    temp->next_add = NULL;

    if(head == NULL){
        head = temp;
    }else{
        temp->next_add = head;
        head = temp;
    }
}


void display(){
    node* temp = new node();
    temp = head ;

    if(head == NULL){
        cout<<"Empty Link List";
    }else{
        while(temp != NULL){
            cout<<"Value : "<<temp->data <<endl;
            temp = temp->next_add;
        }


    }

}




int main(){



    insert_first(5);
    insert_first(7);
    insert_first(8);
    insert_first(1);
    insert_first(0);

    display();



return 0;
}
