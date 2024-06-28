#include <iostream>

using namespace std;

int main(){
    int dogYears;
    int humanYears;
    
    do{
        cout << "Enter your dog's age in years:" << endl;
        cin >> dogYears;
    } while(dogYears <= 0);
    
    if(dogYears == 1){
        humanYears = 15;
    } else if (dogYears ==- 2){
        humanYears = 15 + 9;
    } else {
        humanYears = 15 + 9 + 5*(dogYears - 2);
    }
    
    cout << "Your dog is " << humanYears << " years old in human years" << endl;
    
    return 0;
}