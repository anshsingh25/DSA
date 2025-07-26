//Adding element at front of Doubly linked list
#include<iostream>
#include<vector>
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

    void add_at_front(int value){
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
        Node* temp = head;
        while(temp != NULL){
           cout << temp->data << "->";
           temp = temp->next;
        }
    }
};

int main(){
    List ll;
    ll.add_at_front(1);
    ll.add_at_front(2);
    ll.add_at_front(3);
    ll.add_at_front(4);

    ll.print();
    return 0;
}