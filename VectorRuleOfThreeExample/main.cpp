#include <iostream>

using namespace std;

class vector {
    public:
    vector(){
        sizeAllocated = 3;
        sizeFilled = 0;
        a = new int[sizeAllocated];
        cout << "a allocated at address: " << a << endl;
    }
    
    ~vector(){
        cout << "Destructor called!" << endl;
        delete[] a;
    }
    
    vector(const vector& other){
        cout << "Copy Constructor called!" << endl;
        a = new int[other.sizeAllocated];
        sizeFilled = other.sizeFilled;
        sizeAllocated = other.sizeAllocated;
        
        for(int i = 0; i < sizeFilled; i++){
            a[i] = other.at(i);
        }
    }
    
    void operator=(const vector& other){
        cout << "Copy Assignment Override called!" << endl;
        delete[] a;
        
        a = new int[other.sizeAllocated];
        sizeFilled = other.sizeFilled;
        sizeAllocated = other.sizeAllocated;
        
        for(int i = 0; i < sizeFilled; i++){
            a[i] = other.at(i);
        }
    }
    
    void push_back(int data){
        
        if(sizeFilled == sizeAllocated){
            cout << "Allocating more space!" << endl;
            int* temp = new int[sizeAllocated*2];
            for(int i = 0; i < sizeAllocated; i++){
                temp[i] = a[i];
            }
            delete[] a;
            a = temp;
            sizeAllocated = sizeAllocated*2;
        }
        
        a[sizeFilled] = data;
        sizeFilled++;
    }
    
    void pop_back(){
        sizeFilled--;
        
        if(sizeFilled < 0){
            sizeFilled = 0;
        }
    }
    
    int size() const {
        return sizeFilled;
    }
    
    int& at(int i) const {
        return a[i];
    }
    
    private:
    int* a;
    int sizeAllocated;
    int sizeFilled;
};

void function(){
    vector v;
    
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    
    vector temp = v;
    
    temp.at(1) = 3;
    
    v = temp;
    
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }
}

int main(){
    function();
    
    function();
    
    function();

    return 0;
    
}