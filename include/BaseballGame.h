#pragma once
class BaseballGame
{
    public:
        bool isGameGone();
        void initialize();
        int getNumofStrike();
        void input();
        void judge();
        void  output();
    
    private:
        void generate3DigitRandomNumber();

// main 함수에서 사용하지 않는 부분은 private로 선언

    
    private:
        string
        int numOfStrike;
        int numofBall;
        bool isGameDone;
    

};