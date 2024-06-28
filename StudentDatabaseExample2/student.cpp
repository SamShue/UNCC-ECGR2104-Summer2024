#include "student.h"

int Student::nextId = 800000000;

Student::Student(){
    name = "Unnamed";
    gpa = -1.0;
    this->id = nextId++;
}

Student::Student(string name, double gpa){
    this->name = name;
    this->gpa = gpa;
    this->id = nextId++;
}

void Student::setName(string name){
    this->name = name;
}

void Student::setGpa(double g){
    if(g > 4.0 || g < 0){
        cout << "Cannot assign a GPA value of " << g << endl;
        gpa = -1.0;
    } else {
        gpa = g;
    }
}

void Student::setId(int i){
    if(i < 800000000){
        cout << "Cannot assign an ID value of " << i << endl;
        id = -1;
    } else {
        id = i;
    }
}

string Student::getName() const {
    return name;
}

double Student::getGpa() const {
    return gpa;
}

int Student::getId() const {
    return id;
}

void Student::print(){
    cout << "Name: " << name << endl;
    cout << "GPA: " << gpa << endl;
    cout << "ID: " << id << endl;
}