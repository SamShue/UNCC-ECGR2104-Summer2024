#include <iostream>

using namespace std;

int main(){
    
    int* p = new int;
    
    cout << p << endl;
    
    *p = 5;
    
    *p = *p + 10;
    
    //delete p;
    
    p = new int;
    
    *p = 10;
    
    cout << p << endl;
    
    delete p;
    
    return 0;
}

