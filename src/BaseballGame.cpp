#include "../include/BaseballGame.h"
#include <iostream>

using namespace std;

BaseballGame::BaseballGame(){
                answerNumberString = "";
                userNumberString = "";
                numOfStrike = 0;
                numofBall = 0; 
                m_isGameDone = false;
        }

        bool BaseballGame :: isGameGone(){
           return m_isGameDone;

        };
        void BaseballGame :: initialize(){
            numOfStrike = 0;
            generate3DigitRandomNumber();

        };
        int BaseballGame :: getNumofStrike(){
            return numOfStrike;

        };

        bool BaseballGame:: isNumber(char ch) {
            bool res = false;

            if(ch >= '0' && ch <= '9'){
                res = true;
            }

            return res;
        }

        bool BaseballGame::isInputNumberWrong(){
            bool res = false;

            if(userNumberString.size() != 3) 
            {
                res = true;
            } else {
                for (int i = 0; i < 3; i++) {
                    if (!isNumber(userNumberString[i])) {
                        res = true;
                        break;
                    }
                }
            }


            return res;
        }
        void BaseballGame :: input() {
            // 123018as 와 같이 잘못 입력한 경우 다시 입력 받기.
            while(isInputNumberWrong()){
            cout << "3자리 숫자를 입력해주세요" << endl;
            cin >> userNumberString;
            }
        };
        void BaseballGame :: judge(){

        };
        void BaseballGame :: output(){
            cout << "Strike(";
            cout << numOfStrike;
            cout << "), ";
            cout << "Ball(";
            cout << numofBall;
            cout<< ")" << endl;

            if(numOfStrike == 3) {
                cout << "숫자를 맞추셨습니다." << endl;
            }

        };

        void BaseballGame:: generate3DigitRandomNumber(){


        };

