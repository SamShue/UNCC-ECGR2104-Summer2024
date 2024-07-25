#include <iostream>
#include <sstream>

using namespace std;

class Person {
    public:
    Person(string name, int id){
        this->name = name;
        this->id = id;
    }
    
    string toString(){
        stringstream ss;
        ss << "Name: " << name << " ID: " << id;
        return ss.str();
    }
    
    protected:
    string name;
    int id;
};

class Student : public Person {
    public:
    Student(string name, int id, double gpa) : Person(name, id) {
        this->gpa = gpa;
    }
    
    string toString(){
        stringstream ss;
        ss << "Name: " << name << " ID: " << id << " GPA: " << gpa;
        return ss.str();
    }
    
    private:
    double gpa;
};

class Faculty : public Person {
    public:
    Faculty(string name, int id, double salary) : Person(name, id) {
        this->salary = salary;
    }
    
    string toString(){
        stringstream ss;
        ss << "Name: " << name << " ID: " << id << " Salary: $" << salary;
        return ss.str();
    }

    private:
    double salary;
};

int main(){
    
    Student s("John", 800123123, 4.0);
    Faculty f("Sam", 800123456, 80000);
    
    cout << s.toString() << endl;
    cout << f.toString() << endl;
    
    return 0;
}