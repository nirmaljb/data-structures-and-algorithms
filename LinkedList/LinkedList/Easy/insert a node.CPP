//
//  insert a node.CPP
//  LinkedList
//
//  Created by Nirmal Jyoti Biswas on 01/11/24.
//

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* insert_front(Node*head, int value) {
    Node* new_value = new Node(value);
    new_value->next = head;
    head = new_value;
    
    return head;
}

Node* insert_back(Node* head, int value) {
    Node* new_value = new Node(value);
    if(head == NULL) {
        return new_value;
    }
    
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_value;
    
    return head;
};

Node* convertArrToLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
};

void display(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}


int main() {
    
    vector<int> arr = {2, 3, 5, 8};
    Node* head = convertArrToLL(arr);
//    Node* new_head = insert_back(head, 10);
    Node* new_head = insert_front(head, 100);
    display(new_head);
    
    
    return 0;
}
