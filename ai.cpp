#include "common.h"
#include "util.h"
#include "busi.h"
#include "breakThrough.h"
#include "explore.h"
#include "activity.h"
#include "yuhun.h"

void setLeaderWindow() {
    getWindowScreen();
}

void setMemberWindow() {
    getWindowScreenMember();
}

void test() {
    while (true)
    {
        Sleep(1000);
        int startBtn1[5] = { 1362, 295, 243, 178, 94 };
        int startBtn2[5] = { 1407, 313, 243, 178, 94 };
        int startBtn[3] = { 1362, 295, 10 };
        getBtn(startBtn1, startBtn2, startBtn);
    }
}


void showMenu() {
    cout << "1  单人御魂" << endl;
    cout << "2  组队御魂" << endl;
    cout << "3 队长--个人突破" << endl;
    cout << "4 队员--个人突破" << endl;
    cout << "6 活动 - 祈福之行" << endl;
    cout << "7 合卡 抽白票" << endl;
    cout << "8  组队御魂 作为队员" << endl;
    cout << "9 队长寮突" << endl;
    cout << "11 队长999活动刷本" << endl;
    cout << "91  队长 + 队员寮突" << endl;
    cout << "14  超鬼王" << endl;
}

void Menu() {
    int select = 0;
    cin >> select;
    switch (select)
    {
    case 1: //单人御魂
         LoopStartGame();
        break;
    case 2: //组队御魂
        LoopStartDoubleGame();
        break;
    case 3: // 队长个人突破
        //LoopPersonBreakThrough();
    case 4: // 队员个人突破
        LoopMemberPersonBreakThrough();
    case 5: //队员组队御魂
        // LoopStartEquipGameAsMember();
        break;
    case 6: //
         loopQiFu();
        break;
    case 7: //
        synthesisCard();
        break;
    case 9: //队长寮突
        LoopStartBreakThrough(1000000, false);
        break;
    case 10: //队长寮突
        LoopStartBreakThrough(0, false);
        break;
    case 91: // 队长 + 队员寮突
        LoopStartBreakThrough(1000000, true);
        break;
    case 92: //6小时候开始突破
        LoopStartBreakThrough(21600000, false);
    case 11:
        LoopPve();
        break;
    case 12: //
        LoopThrowBeans();
        break;
    case 14: //
        LoopStartCGW();
        break;
    case 99: //
        test();
        break;
    case 999:
        setMemberWindow();
        break;
    case 9999:
        setLeaderWindow();
        break;
    default:
        break;
    }
}

int main()
{
    while (true)
    {
        showMenu();
        Menu();
    }
    cout << "" << endl;
    system("pause");
    return 0;
}