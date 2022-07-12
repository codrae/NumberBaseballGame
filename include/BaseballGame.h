#pragma once
#include <string>

using namespace std;

class BaseballGame
{
    public:
        BaseballGame game();


        bool isGameGone();
        void initialize();
        int getNumofStrike();
        void input();
        void judge();
        void output();
    
    private:
        void generate3DigitRandomNumber();
        bool isInputNumberWrong();
        bool isNumber(char ch);

// main 함수에서 사용하지 않는 부분은 private로 선언

    
    private:
        string answerNumberString;
        string userNumberString;
        int numOfStrike;
        int numofBall;
        bool m_isGameDone;
    

};