#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <windows.h>
#pragma comment (lib, "user32.lib")

void endPve(int btn1[5], int btn2[5], int btn[3]) {
    if (getColor(btn1, btn2)) {
        Sleep(random(500) + 500);
        clickRandom(btn);
    }
}


void synthesisCard() {
    int times = 0;
    while (times <= 500){
        if (getEndButton(synthesisTop, synthesisRight, leaderScreenInit[0], leaderScreenInit[1])) {
            Sleep(500);
            randomClick(690, 542, 50);
            Sleep(500);
            randomClick(920, 554, 40);
        }
    }
}



//百鬼夜行
//选择鬼王
void selectWhichGhostKing() {
    int randomNum = random(100);
    if (randomNum < 30) {
        cout << "选择鬼王1" << endl;
        randomClick(firstGhostKing[0], firstGhostKing[1], firstGhostKing[2]);
        return;
    }
    if (randomNum < 60) {
        cout << "选择鬼王2" << endl;
        randomClick(twinGhostKing[0], twinGhostKing[1], twinGhostKing[2]);
        return;
    }
    if (randomNum < 100) {
        cout << "选择鬼王3" << endl;
        randomClick(triGhostKing[0], triGhostKing[1], triGhostKing[2]);
        return;
    }
}
//退出结束界面
int outThrowBeansInterface() {
    if (getColor(endthrowBeans1, endthrowBeans2) || getColor(endthrowBeans1, endthrowBeans3)) {
        randomClick(throwBeansEntry[0], throwBeansEntry[1], throwBeansEntry[2]);
        return 1;
    }
    return 0;
}
//开始撒豆子
void startThrowBeans() {
    int times = 0;
    int dragMoused = 0;
    while (times <= 40)
    {
        Sleep(random(500) + 1000);
        if (!dragMoused && (getColor(beansBtn1, beansBtn2) || getColor(beansBtn3, beansBtn2))) {
            SetCursorPos(beansNun[0] + 15, beansNun[1]);
            Sleep(1500);
            dragMouse(150, 0);
            dragMoused = 1;
        }
        if (!outThrowBeansInterface()) {
            cout << "throw beans" << endl;
            times++;
            randomClick(throwBeans[0], throwBeans[1], throwBeans[2]);
        }
        else {
            times = 9999;
        }
    }
}
//进入百鬼夜行
void intoThrowBeansInterface() {
    if (getColor(throwBeansEntryBtn1, throwBeansEntryBtn2)) {
        randomClick(throwBeansEntry[0], throwBeansEntry[1], throwBeansEntry[2]);
        gameRunTimes++;
        cout << "进入百鬼夜行" << endl;
        Sleep(2000);
        
    }
}
void startThrowBeansGame() {
    if (getColor(startThrowBeans1, startThrowBeans2)) {
        selectWhichGhostKing();
        Sleep(1000);
        cout << "点击开始进入撒豆子界面" << endl;
        randomClick(startThrowBeansBtn[0], startThrowBeansBtn[1], startThrowBeansBtn[2]);
        Sleep(2000);
        startThrowBeans();
    }
}

/**
* 百鬼夜行
* 进入百鬼夜行
* 选择鬼王
* 进入撒豆子界面
* 开始撒豆子
* 退出结束界面
*/
void LoopThrowBeans() {
    while (gameRunTimes < 500)
    {
        Sleep(2000);
        intoThrowBeansInterface();
        startThrowBeansGame();
        outThrowBeansInterface();
    }
}

/* 队员结束战斗 */
bool endMember(){
    std::cout << "识别队员是否可以结束战斗" << std::endl;
    int btn1[5] = {};
    int btn2[5] = {};
    int btn[3] = {};
    int failBtn1[5] = {};
    int failBtn2[5] = {};
    int failBtn[3] = {};
    return getBtn(btn1, btn2, btn) || getBtn(failBtn1, failBtn2, failBtn);
}