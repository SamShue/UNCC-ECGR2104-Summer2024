#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<string> names = {"Sam", "Bob"};
    vector<double> gpas = {2.5, 3.8};
    vector<int> ids = {800123456, 800123478};
    
    int userInput;
    do {
        cout << "What would you like to do?" << endl;
        cout << "0: Print Students" << endl;
        cout << "1: Add new Student" <<endl;
        cout << "2: Quit" << endl;
        
        cin >> userInput;
        
        if(userInput == 0){
            
            for(int i = 0; i < names.size(); i++){
                cout << "Student " << i << ":" << endl;
                cout << "Name: " << names.at(i) << endl;
                cout << "GPA: " << gpas.at(i) << endl;
                cout << "ID: " << ids.at(i) << endl << endl;
            }
            
        } else if (userInput == 1){
            cout << "Enter the student's name: " << endl;
            string tempName;
            cin >> tempName;
            names.push_back(tempName);
            
            double tempGpa;
            do{
                cout << "Enter the stuent's gpa: " << endl;
                cin >> tempGpa;
            } while(tempGpa < 0 || tempGpa > 4.0);
            gpas.push_back(tempGpa);
            
            int tempId;
            do{
                cout << "Enter the student's id: " << endl;
                cin >> tempId;
            } while(tempId < 80000000);
            ids.push_back(tempId);
        }
        
    }while(userInput != 2);
    
    return 0;
}