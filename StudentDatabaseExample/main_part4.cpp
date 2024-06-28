#include <iostream>
#include <vector>

using namespace std;

class Student {
    public:
    
    void setName(string n){
        name = n;
    }
    
    void setGpa(double g){
        if(g > 4.0 || g < 0){
            cout << "Cannot assign a GPA value of " << g << endl;
            gpa = -1.0;
        } else {
            gpa = g;
        }
    }
    
    void setId(int i){
        if(i < 800000000){
            cout << "Cannot assign an ID value of " << i << endl;
            id = -1;
        } else {
            id = i;
        }
    }
    
    string getName() const {
        return name;
    }
    
    double getGpa() const {
        return gpa;
    }
    
    int getId() const {
        return id;
    }
    
    void print(){
        cout << "Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
        cout << "ID: " << id << endl;
    }
    
    private:
    string name;
    double gpa;
    int id;
};

int main(){
    
    Student s0;
    s0.setName("Sam");
    s0.setGpa(2.5);
    s0.setId(800387310);
    
    Student s1;
    s1.setName("Bob");
    s1.setGpa(3.8);
    s1.setId(800387318);
    
    vector<Student> students;
    students.push_back(s0);
    students.push_back(s1);
    
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
            
            int tempId;
            do{
                cout << "Enter the student's id: " << endl;
                cin >> tempId;
                tempStudent.setId(tempId);
            } while(tempId < 80000000);
            
            students.push_back(tempStudent);
        }
        
    }while(userInput != 2);
    
    return 0;
}