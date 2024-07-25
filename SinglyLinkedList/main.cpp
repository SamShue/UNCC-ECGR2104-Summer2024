#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

class SinglyLinkedList{
    public:
    SinglyLinkedList(){
        head = nullptr;
    }
    
    ~SinglyLinkedList(){
        Node* currentNode = head;
        while(currentNode != nullptr){
            Node* temp = currentNode;
            currentNode = currentNode->next;
            delete temp;
        }
    }
    
    SinglyLinkedList(const SinglyLinkedList& other){
        head = nullptr;
        for(int i = 0; i < other.size(); i++){
            push_back(other.at(i));
        }
    }
    
    void operator=(const SinglyLinkedList& other){
        Node* currentNode = head;
        while(currentNode != nullptr){
            Node* temp = currentNode;
            currentNode = currentNode->next;
            delete temp;
        }
        
        head = nullptr;
        for(int i = 0; i < other.size(); i++){
            push_back(other.at(i));
        }
    }
    
    void push_back(int data){
        if(head == nullptr){
            head = new Node;
            (*head).data = data;
            head->next = nullptr;
            return;
        }
        
        Node* currentNode = head;
        while(currentNode->next != nullptr){
            currentNode = currentNode->next;
        }
        
        currentNode->next = new Node;
        currentNode->next->data = data;
        currentNode->next->next = nullptr;
    }
    
    void pop_back(){
        if(head == nullptr){
            return;
        }
        
        if(head->next == nullptr){
            delete head;
            head = nullptr;
            return;
        }
        
        Node* currentNode = head;
        Node* prevNode = nullptr;
        while(currentNode->next != nullptr){
            prevNode = currentNode;
            currentNode = currentNode->next;
        }
        
        delete currentNode;
        prevNode->next = nullptr;
    }
    
    void insert(int index, int data){
        int position = 0;
        Node* currentNode = head;
        Node* prevNode = nullptr;
        while(position != index){
            prevNode = currentNode;
            currentNode = currentNode->next;
            position++;
        }
        
        if(prevNode != nullptr){
            prevNode->next = new Node;
            prevNode->next->data = data;
            prevNode->next->next = currentNode;
        } else {
            head = new Node;
            head->data = data;
            head->next = currentNode;
        }
    }
    
    void remove(int index){
        if(index == 0){
            Node* temp = head->next;
            delete head;
            head = temp;
            return;
        }
        
        int position = 0;
        Node* currentNode = head;
        Node* prevNode = nullptr;
        while(position != index){
            prevNode = currentNode;
            currentNode = currentNode->next;
            position++;
        }
        
        prevNode->next = currentNode->next;
        delete currentNode;
    }
    
    int size() const {
        int size = 0;
        
        Node* currentNode = head;
        while(currentNode != nullptr){
            currentNode = currentNode->next;
            size++;
        }
        
        return size;
    }
    
    int& at(int index) const {
        int position = 0;
        Node* currentNode = head;
        while(position != index){
            currentNode = currentNode->next;
            position++;
        }
        
        return currentNode->data;
    }
    
    private:    
    Node* head;
};

void function(){
    SinglyLinkedList sll;
    
    sll.push_back(5);
    sll.push_back(8);
    sll.push_back(3);
    
    SinglyLinkedList sll2 = sll;
    
    sll2.pop_back();
    
    sll2.insert(1, 7);
    
    sll = sll2;
    
    sll.remove(2);
    
    for(int i = 0; i < sll.size(); i++){
        cout << sll.at(i) << endl;
    }
}

int main(){
    function();
    
    return 0;
}