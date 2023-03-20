#ifndef TRIVIAGAME_H
#define TRIVIAGAME_H

#include <string>
using namespace std;

class CauHoi {
private:
    string question;
    string answer1;
    string answer2;
    string answer3;
    string answer4;
    int correctAnswer;

public:
    CauHoi();
    CauHoi(string q, string a1, string a2, string a3, string a4, int correct);
    string getQuestion();
    string getAnswer1();
    string getAnswer2();
    string getAnswer3();
    string getAnswer4();
    int getCorrectAnswer();
};

#endif