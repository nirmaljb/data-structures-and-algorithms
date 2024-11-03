//
//  delete node.CPP
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

Node* convertArrtoLL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    
    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        
//        cout << "before mover : " << mover << "\n";
        mover = temp;
//        cout << "after mover : " << mover << "\n";
        
    }
    
    return head;
}

Node* delete_head(Node* head) {
    
    if(head == NULL) return head;
    
    Node* temp = head;
    head = head->next;
    
    delete temp;
    return head;
}

Node* delete_tail(Node* head) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }
    
    Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    
//    free(temp->next);
    delete temp->next;
    temp->next = nullptr;
    
    return head;
}

Node* delete_pos(Node* head, int pos) {
    if(head == NULL) return head;
    
    if(pos == 1) {
        Node* temp = head;
        head = head->next;
        
        delete temp;
        return head;
    }
    
    int counter = 0;
    Node* temp = head;
    Node* prev = new Node(0, nullptr);
    
    while(temp) {
        counter++;
        if(counter == pos) {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    
    return head;
}

void display(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    vector<int> arr = {2, 5, 8, 10, 1};
    Node* head = convertArrtoLL(arr);
    
//    Node* new_head = delete_head(head);
//    Node* new_head = delete_tail(head);
    Node* new_head = delete_pos(head, 1);
    
    display(new_head);
    
    return 0;
}
