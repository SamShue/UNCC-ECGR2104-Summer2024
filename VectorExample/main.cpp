#include <iostream>

using namespace std;

class vector {
    public:
    vector(){
        a = nullptr;
        allocatedSize = 0;
        nextIndex = 0;
    }
    
    void push_back(int data){
        
        if(nextIndex == allocatedSize){
            int* new_a = new int[allocatedSize + 1];
            
            // Copy over old data
            for(int i = 0; i < allocatedSize; i++){
                new_a[i] = a[i];
            }
            
            // clean up old data
            delete[] a;
            
            // copy over new array address to pointer
            a = new_a;
            
            // increase total allocated size
            allocatedSize++;
        }
        
        a[nextIndex++] = data;
    }
    
    void pop_back(){
        nextIndex--;
    }
    
    int& at(int index) const {
        return a[index];
    }
    
    int size() const {
        return nextIndex;
    }
    
    private:
    int* a;
    int allocatedSize;
    int nextIndex;
};

int main(){
    vector v;
    
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    
    v.pop_back();
    
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }

    return 0;
    
}