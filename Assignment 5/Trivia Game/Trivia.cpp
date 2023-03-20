#include "Trivia.h"

CauHoi::CauHoi() {
    question = "";
    answer1 = "";
    answer2 = "";
    answer3 = "";
    answer4 = "";
    correctAnswer = 0;
}

CauHoi::CauHoi(string q, string a1, string a2, string a3, string a4, int correct) {
    question = q;
    answer1 = a1;
    answer2 = a2;
    answer3 = a3;
    answer4 = a4;
    correctAnswer = correct;
}

string CauHoi::getQuestion() {
    return question;
}

string CauHoi::getAnswer1() {
    return answer1;
}

string CauHoi::getAnswer2() {
    return answer2;
}

string CauHoi::getAnswer3() {
    return answer3;
}

string CauHoi::getAnswer4() {
    return answer4;
}

int CauHoi::getCorrectAnswer() {
    return correctAnswer;
}