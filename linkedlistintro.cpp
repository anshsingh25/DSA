//inserting node at front_push which means inserting an element at first position and update the head 
#include<iostream>
#include<vector>
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

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data <<"->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.print();

    return 0;
} 