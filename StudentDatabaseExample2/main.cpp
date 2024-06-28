#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

int main(){
    vector<Student> students = {Student("Sam", 2.5), Student("Bob", 3.8)};

    int userInput;
    do {
        cout << "What would you like to do?" << endl;
        cout << "0: Print Students" << endl;
        cout << "1: Add new Student" <<endl;
        cout << "2: Quit" << endl;
        
        cin >> userInput;
        
        if(userInput == 0){
            
            for(int i = 0; i < students.size(); i++){
                cout << "Student " << i << ":" << endl;
                cout << "Name: " << students.at(i).getName() << endl;
                cout << "GPA: " << students.at(i).getGpa() << endl;
                cout << "ID: " << students.at(i).getId() << endl << endl;
            }
            
        } else if (userInput == 1){
            Student tempStudent;            
            
            cout << "Enter the student's name: " << endl;
            string tempName;
            cin >> tempName;
            tempStudent.setName(tempName);
            
            double tempGpa;
            do{
                cout << "Enter the stuent's gpa: " << endl;
                cin >> tempGpa;
                tempStudent.setGpa(tempGpa);
            } while(tempGpa < 0 || tempGpa > 4.0);
            
            students.push_back(tempStudent);
        }
        
    }while(userInput != 2);
    
    return 0;
}