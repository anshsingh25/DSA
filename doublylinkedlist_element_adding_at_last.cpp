//Adding element in a doubly linked list at a last position
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

    void add_at_last(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            newNode->next = NULL;
            tail = newNode;
        }
    }

    void print(){
        while(head != NULL){
            cout << head->data << "->";
            head = head->next;
        }
    }
};

int main(){
    List ll;
    ll.add_at_last(1);
    ll.add_at_last(2);
    ll.add_at_last(3);
    ll.add_at_last(4);

    ll.print();

    return 0;
}
