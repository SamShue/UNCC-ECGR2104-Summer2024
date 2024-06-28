#include <iostream>

using namespace std;

struct Complex {
    double real;
    double imag;
    
    Complex(){
        real = 0.0;
        imag = 0.0;
    }
    
    Complex(double r, double i){
        real = r;
        imag = i;
    }
    
    Complex add(const Complex& other){
        return Complex(real + other.real, imag + other.imag);
    }
    
    Complex operator+(const Complex& other){
        return Complex(real + other.real, imag + other.imag);
    }
    
    Complex operator-(const Complex& other){
        return Complex(real - other.real, imag - other.imag);
    }
    
    bool operator==(const Complex& other){
        return (real == other.real) && (imag == other.imag);
    }
    
    void print(){
        cout << real << " + " << imag << "i" << endl;
    }
};

int main(){
    Complex x(2.5, 5.0);
    
    Complex y(2.5, 5.0);
    
    //Complex z = x.add(y);
    Complex z = x + y;
    
    z = z - y;
    
    z.print();
    
    if(x == y){
        cout << "X is equal to y!" << endl;
    } else {
        cout << "x is not equal to y!" << endl;
    }
    
    return 0;
}