#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    //constrcutor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insert(Node* &head, int element, int data) {
    //empty list
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        newNode -> next = newNode;
    }
    else{
        Node* curr = head;
        while(curr->data != element) {
            curr = curr -> next;
        }
        
        // Here curr represents the node after which data is to be inserted
        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }

}    

void print(Node* head) {
    //empty list
    if(head == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    Node* temp = head->next;
    cout << head->data << " ";
    while(temp != head){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
} 

// Function to check whether lists is circular or not
bool isCircular(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) 
        return true;
    
    return false;
}

int main() {

    Node* head = NULL;
    insert(head,5,1);
    insert(head,1,2);
    insert(head,2,3);
    insert(head,3,4);
    insert(head,4,5);
    print(head);

    bool ans = isCircular(head);
    cout << "isCircular: " << ans << endl;
    
    insert(head,5,8);
    insert(head,8,10);
    print(head);

    ans = isCircular(head);
    cout << "isCircular: " << ans << endl;

    
    return 0;
}