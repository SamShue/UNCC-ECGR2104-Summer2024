#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]){
    string filename;
    
    for(int i = 0; i < argc; i++){
        cout << argv[i] << endl;
        
        //if(argv[i][0] == '-' && argv[i][1] == 'o'){
        if(strcmp(argv[i], "-o") == 0){
            if(i + 1 < argc){
                filename = string(argv[i + 1]);
            }
        }
    }
    
    ofstream outFile;
    outFile.open(filename);
    
    outFile << "Some stuff." << endl;
    
    outFile.close();
    
    return 0;
}