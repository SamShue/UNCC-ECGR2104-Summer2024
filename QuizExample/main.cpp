#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Question {
    public:
    Question(string text, int pointValue){
        this->text = text;
        this->pointValue = pointValue;
        isCorrect = false;
    }
    
    virtual void askQuestion() = 0;
    
    int getPointsScored() const {
        return pointValue * isCorrect;
    }
    
    protected:
    string text;
    bool isCorrect;
    int pointValue;
};

class TrueFalseQuestion : public Question {
    public:
    TrueFalseQuestion(string text, bool correctAnswer, int pointValue) : Question(text, pointValue) {
        this->correctAnswer = correctAnswer;
    }
    
    void askQuestion(){
        cout << text << endl;
        cout << "Enter T for True for F for False:" << endl;
        char userInput;
        cin >> userInput;
        
        bool userAnswer = userInput == 'T';
        
        if(userAnswer == correctAnswer){
            isCorrect = true;
        }
    }
    
    private:
    bool correctAnswer;
};

class MathQuestion : public Question {
    public:
    MathQuestion(string text, double correctAnswer, int pointValue) : Question(text, pointValue) {
        this->correctAnswer = correctAnswer;
    }
    
    void askQuestion(){
        cout << text << endl;
        double userInput;
        cin >> userInput;
        
        if(abs(userInput - correctAnswer) < 0.01){
            isCorrect = true;
        }
    }
    
    private:
    double correctAnswer;
};


int main(){
    
    vector<Question*> quiz;
    
    quiz.push_back(new TrueFalseQuestion("My favorite language is C++!", true, 10));
    quiz.push_back(new MathQuestion("2 + 2 = ?", 4.0, 10));
    
    int totalScore = 0;
    for(int i = 0; i < quiz.size(); i++){
        quiz.at(i)->askQuestion();
        totalScore += quiz.at(i)->getPointsScored();
    }
    
    cout << totalScore << endl;

    return 0;
}