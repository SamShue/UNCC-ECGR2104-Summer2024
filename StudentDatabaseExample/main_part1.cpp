#include <iostream>

using namespace std;

int main(){
    string name0 = "Sam";
    double gpa0 = 2.5;
    int id0 = 800123456;
    
    string name1 = "Bob";
    double gpa1 = 3.8;
    int id1 = 800134566;
    
    string name2 = " ";
    double gpa2 = 0.0;
    int id2 = -1;
    
    int userInput;
    do {
        cout << "What would you like to do?" << endl;
        cout << "0: Print Students" << endl;
        cout << "1: Add new Student" <<endl;
        cout << "2: Quit" << endl;
        
        cin >> userInput;
        
        if(userInput == 0){
            cout << "Student 0:" << endl;
            cout << "Name: " << name0 << endl;
            cout << "GPA: " << gpa0 << endl;
            cout << "ID: " << id0 << endl << endl;
    
            cout << "Student 1:" << endl;
            cout << "Name: " << name1 << endl;
            cout << "GPA: " << gpa1 << endl;
            cout << "ID: " << id1 << endl << endl;
            
            if(id2 > 0){
                cout << "Student 2:" << endl;
                cout << "Name: " << name2 << endl;
                cout << "GPA: " << gpa2 << endl;
                cout << "ID: " << id2 << endl << endl;
            }
        } else if (userInput == 1){
            cout << "Enter the student's name: " << endl;
            cin >> name2;
            
            do{
                cout << "Enter the stuent's gpa: " << endl;
                cin >> gpa2;
            } while(gpa2 < 0 || gpa2 > 4.0);
            
            do{
                cout << "Enter the student's id: " << endl;
                cin >> id2;
            } while(id2 < 800000000);
        }
        
    }while(userInput != 2);
    
    return 0;
}