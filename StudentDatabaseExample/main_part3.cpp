#include <iostream>

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
    s0.setId(800123456);
    
    Student s1;
    s1.setName("Bob");
    s1.setGpa(5.5);
    s1.setId(1);
    
    s0.print();
    s1.print();
    
    cout << s0.getName() << endl;
    
    return 0;
}