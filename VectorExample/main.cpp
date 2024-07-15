#include <iostream>

using namespace std;

class vector {
    public:
    vector(){
        sizeAllocated = 3;
        sizeFilled = 0;
        a = new int[sizeAllocated];
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

int main(){
    vector v;
    
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(3);
    
    v.pop_back();
    
    v.at(0) = 1;
    
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }

    return 0;
    
}