#include <iostream>
#include <sstream>

using namespace std;

int main(){
    
    stringstream ss("July 18, 2024");
    
    string month, temp;
    int day;
    int year;
    
    ss >> month;
    ss >> day;
    ss >> temp;
    ss >> year;
    
    cout << month << " " << day << " " << temp << " " << year << endl;
    
    return 0;
}