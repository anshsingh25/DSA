//Inserting Element at specific position in a doubly linked list
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

    int size() {
        int count = 0;
        Node* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }


void insert_specifically(int value,int position){
    if(position == 0){
        add_at_front(value);
        return;
    } else if(position == size()) {
        add_at_last(value);
        return;
    } else if(position > 0 && position < size()) {
        Node* newNode = new Node(value);
        Node* temp = head;
        for(int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        if(temp->next != NULL)
            temp->next->prev = newNode;
        temp->next = newNode;
        if(newNode->next == NULL)
            tail = newNode;
    }
}


    void add_at_front(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void add_at_last(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    List ll;

    ll.add_at_last(7);
    ll.add_at_last(17);
    ll.add_at_last(27);
    ll.add_at_last(37);

    ll.insert_specifically(10,1);
    ll.insert_specifically(20,2);
    ll.insert_specifically(30,1);

    ll.print();

    return 0;

}