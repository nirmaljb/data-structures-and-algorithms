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

Node* convertArrtoLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    
    return head;
};

bool isValuePresent(Node* head, int value) {
    Node* temp = head;
    while(temp) {
        if(temp->data == value) return true;
        temp = temp->next;
    }
    return false;
}

int LenghtofLL(Node* head) {
    int counter = 0;
    Node* temp = head;
    while(temp) {
        counter++;
        temp = temp->next;
    }
    
    return counter;
}

int main(int argc, const char * argv[]) {
    
    vector<int> arr = {2,3,8,9};
    Node* head = convertArrtoLL(arr);
    
    cout << isValuePresent(head,9) << "\n";
    

//    cout << LenghtofLL(head);
    
    
    return 0;
}
