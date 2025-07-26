//Reverse the doubly linked list 
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;
    List(){
        head = tail = NULL;
    }

    void add_item(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            newNode->prev = NULL;
            head = newNode;
        }

    }


    void print(){
        while(head != NULL){
            cout << head->data << "->";
            head = head->next;
        }
        cout << endl;
    }

    void reverse(){
        while(tail != NULL){
            cout << tail->data << "->";
            tail = tail->prev;
        }
    }

};

int main(){
    List ll;
    ll.add_item(1);
    ll.add_item(2);
    ll.add_item(3);
    ll.add_item(4);

    ll.print();

    ll.reverse();
    
    return 0;
}