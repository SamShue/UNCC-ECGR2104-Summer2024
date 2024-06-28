#include <iostream>

using namespace std;

int main(){
    const double COST_HOTDOG = 2.50;
    const double COST_BURGER = 3.75;
    
    int numHotdogs;
    int numBurgers;
    
    cout << "Please enter the number of hotdogs sold:" << endl;
    cin >> numHotdogs;
    
    cout << "Please enter the number of burgers sold:" << endl;
    cin >> numBurgers;
    
    double total = (double)numHotdogs * COST_HOTDOG + (double)numBurgers * COST_BURGER;
    
    cout << "Total earnings: $" << total << endl;
    
    return 0;
}