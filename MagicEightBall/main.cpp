#include <iostream>
#include <time.h>

using namespace std;

int main(){
    srand(time(0));
    
    string question;
    
    getline(cin, question);
    
    cout << "You asked: " << question << endl;
    
    int x = rand() % 4;
    
    cout << "Random number: " << x << endl;
    
    if(x == 3){
        cout << "Answer: No." << endl;
    } else if(x == 2){
        cout << "Answer: Yes." << endl;
    } else if(x == 1){
        cout << "Answer: Maybe." << endl;
    } else {
        cout << "Answer: Absolutely not." << endl;
    }
    
    return 0;
}