//deleting item from front of a linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void delete_front(){
        Node* temp = head;
        head = head->next;
        delete temp;
        if(head == NULL){
            tail = NULL;
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data <<"->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    cout << "Original list: ";
    ll.print();  // 3 -> 2 -> 1 -> NULL

    ll.delete_front();  // deletes 3
    cout << "After deleting front: ";
    ll.print();  // 2 -> 1 -> NULL

    ll.push_front(4);   // inserts 4 at front
    cout << "After inserting 4 at front: ";
    ll.print();  // 4 -> 2 -> 1 -> NULL

    return 0;
}