#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student {
    public:
    Student();
    Student(string name, double gpa);
    void setName(string name);
    void setGpa(double g);
    void setId(int i);
    string getName() const;
    double getGpa() const;
    int getId() const;
    void print();
    
    private:
    string name;
    double gpa;
    int id;
    static int nextId;
};

#endif