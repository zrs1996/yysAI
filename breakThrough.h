int member_breakTimes = 1; //队员个人突破 某一轮的 第几次突破
bool quitBreakTag = false; //连退个人突破开关
void closeBreakThroughInterface()
{
    int btn1[5] = {1083, 143, 233, 214, 208};
    int btn2[5] = {1094, 165, 116, 53, 66};
    int btn[5] = {1083, 143, 8};
    getBtn(btn1, btn2, btn);
}

void openBreakThroughInterface()
{
    int btn1[5] = {262, 607, 227, 213, 199};
    int btn2[5] = {306, 643, 143, 117, 95};
    int btn[5] = {262, 607, 15};
    getBtn(btn1, btn2, btn);
}

void openCommonBreakThroughInterface()
{
    int btn1[5] = {1095, 366, 100, 64, 42};
    int btn2[5] = {1130, 410, 86, 54, 35};
    int btn[5] = {1095, 366, 20};
    getBtn(btn1, btn2, btn);
}

void startBreakThrough()
{
    cout << "startBreakThrough" << endl;
    int btn1[5] = {510, 108, 91, 68, 50};
    int btn2[5] = {668, 115, 89, 55, 22};
    int btn[5] = {487, 171, 20};
    if (getBtn(btn1, btn2, btn))
    {
        startBreakThroughTimes++;
        gameRunTimes++;
    }
}

void startBreakThrough2()
{
    int btn1[5] = {564, 361, 243, 178, 94};
    int btn2[5] = {635, 383, 243, 178, 94};
    int btn[5] = {564, 361, 20};
    getBtn(btn1, btn2, btn);
}

void endBreakThrough()
{
    int sucBtn1[5] = {175, 630, 247, 231, 55};
    int sucBtn2[5] = {314, 631, 247, 231, 49};
    int sucBtn[5] = {24, 155, 50};
    getBtn(sucBtn1, sucBtn2, sucBtn);

    int failBtn1[5] = {367, 465, 246, 246, 243};
    int failBtn2[5] = {785, 494, 248, 212, 188};
    int failBtn[5] = {24, 155, 50};
    getBtn(failBtn1, failBtn2, failBtn);
}

int slectYYLTag = 0;

void clickSelectYYL()
{
    if (getColor(clickSelectYYLBtn1, clickSelectYYLBtn2))
    {
        Sleep(random(500) + 500);
        randomClick(clickSelectYYLBtn[0], clickSelectYYLBtn[1], clickSelectYYLBtn[2]);
        Sleep(random(1000) + 2000);
        randomClick(startYYLBtn[0], startYYLBtn[1], startYYLBtn[2]);
        slectYYLTag = 0;
    }
}

void selectYYL()
{
    if (getColor(selectYYLButton1, selectYYLButton2))
    {
        Sleep(random(500) + 500);
        randomClick(selectYYLButton[0], selectYYLButton[1], selectYYLButton[2]);
        slectYYLTag = 1;
    }
}

int teamCloseConnectBtn1[5] = {704, 136, 232, 212, 207};
int teamCloseConnectBtn2[5] = {720, 152, 232, 212, 207};
int teamCloseConnectBtn[3] = {704, 136, 10};

void closeConnect()
{
    getBtn(teamCloseConnectBtn1, teamCloseConnectBtn2, teamCloseConnectBtn);
}

void closeErrorBreak()
{
    int btn1[5] = {315, 148, 62, 52, 46};
    int btn2[5] = {377, 209, 74, 69, 65};
    int btn[5] = {375, 167, 20};
    getBtn(btn1, btn2, btn);

    int cdBtn1[5] = {555, 361, 176, 169, 161};
    int cdBtn2[5] = {641, 380, 176, 169, 161};
    int cdBtn[5] = {123, 61, 50};
    if (getBtn(cdBtn1, cdBtn2, cdBtn))
    {
        startBreakThroughTimes++;
        gameRunTimes++;
    }
}

void teamBreakThrough(int time)
{
    gameRunTimes = 0;
    int closeConnectBtn1[5] = {702, 136, 232, 212, 207};
    int closeConnectBtn2[5] = {720, 152, 232, 212, 207};
    int closeConnectBtn[5] = {702, 136, 10};

    while (gameRunTimes < 6)
    {
        getBtn(closeConnectBtn1, closeConnectBtn2, closeConnectBtn);
        Sleep(random(500) + 500);
        closeErrorBreak();
        Sleep(random(500) + 500);
        closeBreakThroughInterface();
        Sleep(random(500) + 500);
        openBreakThroughInterface();
        Sleep(random(500) + 500);
        openCommonBreakThroughInterface();
        Sleep(random(500) + 2000);
        startBreakThrough();
        Sleep(random(500) + 500);
        startBreakThrough2();
        Sleep(random(500) + 500);
        endBreakThrough();
        Sleep(random(500) + 500);
        /*selectYYL();
        if (slectYYLTag == 1) {
            clickSelectYYL();
        }*/
    }
    Sleep(random(60000) + time);
}

void memberBreakThrough(int time)
{
    int memberTime = 0;
    while (memberTime < 6)
    {
        closeConnect();
        Sleep(random(500) + 500);
        closeErrorBreak();
        Sleep(random(500) + 500);
        closeBreakThroughInterface();
        Sleep(random(500) + 500);
        openBreakThroughInterface();
        Sleep(random(500) + 500);
        openCommonBreakThroughInterface();
        Sleep(random(500) + 2000);
        startBreakThrough();
        Sleep(random(500) + 500);
        startBreakThrough2();
        Sleep(random(500) + 500);
        endBreakThrough();
        Sleep(random(500) + 500);
    }
    Sleep(random(60000) + time);
}

void LoopStartBreakThrough(int time, bool multiple)
{
    while (startBreakThroughTimes < 500)
    {
        teamBreakThrough(time);
        if (multiple)
        {
            memberBreakThrough(time);
        }
    }
}


void closeBreakThroughInterface_member()
{
    Sleep(1000);
    randomClick(close_break_btn[0], close_break_btn[1], close_break_btn[2]);
}

void openBreakThroughInterface_member()
{
    if (getColor(openBreakThrough1, openBreakThrough2))
    {
        Sleep(1000);
        randomClick(openBreakThrough_button[0], openBreakThrough_button[1], openBreakThrough_button[2]);
    }
}

void openCommonBreakThroughInterface_member()
{
    if (getColor(openBreakThrough1, openBreakThrough2))
    {
        Sleep(1000);
        randomClick(openBreakThrough_button[0], openBreakThrough_button[1], openBreakThrough_button[2]);
    }
}

void clickBreakTeam_member()
{
    if (getColor(click_break_team1, click_break_team2))
    {
        Sleep(1000);
        randomClick(click_break_team_btn[0], click_break_team_btn[1], click_break_team_btn[2]);
    }
}

void clickBreak_member()
{
    if (getColor(click_break1, click_break2))
    {
        Sleep(1000);
        randomClick(click_break_btn[0], click_break_btn[1], click_break_btn[2]);
    }
}

void startAttack_memebr()
{
    if (getColor(start_attck1, start_attck2))
    {
        Sleep(1000);
        randomClick(start_attck_btn[0], start_attck_btn[1], start_attck_btn[2]);
    }
}

void end_break_member()
{
    if (getColor(end_break_member1, end_break_member2))
    {
        randomClick(end_break_member_btn[0], end_break_member_btn[1], end_break_member_btn[2]);
        Sleep(4000);
        closeBreakThroughInterface_member();
        gameRunTimes_member_break++;
    }
}

void LoopStartMemberBreakThrough(int time)
{
    while (startBreakThroughTimes < 500)
    {
        gameRunTimes_member_break = 0;
        while (gameRunTimes_member_break <= 6)
        {

            openBreakThroughInterface_member();

            openCommonBreakThroughInterface_member();

            clickBreakTeam_member();

            clickBreak_member();

            startAttack_memebr();

            end_break_member();
        }
        Sleep(random(60000) + time);
    }
}

void openBreakThrough_member()
{
    cout << "打开个人突破界面" << endl;
    int btn1[5] = {1330, 446, 226, 212, 196};
    int btn2[5] = {1345, 471, 144, 118, 97};
    int btn[3] = {1320, 446, 15};
    getBtn(btn1, btn2, btn);
}

void closeErrorPersonBreak() {
    cout << "关闭错误结界" << endl;
    int btn1[5] = { 1215, 351, 96, 92, 85 };
    int btn2[5] = { 1195, 436, 35, 35, 40 };
    int btn[3] = { 1165, 250, 30 };

    int btn_up1[5] = { 1171, 236, 18, 12, 12 };
    int btn_up2[5] = { 1212, 306, 20, 13, 12 };
    int btn_up[3] = { 1171, 236, 20 };

    int btn_info1[5] = { 1171, 236, 31, 20, 20 };
    int btn_info2[5] = { 1212, 306, 34, 22, 20 };
    int btn_info[3] = { 1171, 236, 20 };

    if (getBtn(btn1, btn2, btn) || getBtn(btn_up1, btn_up2, btn_up) || getBtn(btn_info1, btn_info2, btn_info)) {
        cout << "已关闭错误结界" << endl;
    };
}

void attackBreakThrough_member()
{
    /*  
    1245, 170  1437, 170  1629, 170
    1245, 248  1437, 248  1629, 248
    1245, 326  1437, 326  1629, 326

    192 78
    
    */
    cout << "开始识别是否可以进入战斗" << endl;
    int Btn1[5] = { 1302, 176, 218, 205, 189};
    int Btn1_copy[5] = { 1302, 176, 218, 203, 188 };
    int Btn2[5] = {1360, 198, 218, 205, 189};
    int Btn[3] = {1299, 173, 50};

    int startBtn1[5] = { 1362, 295, 243, 178, 94};
    int startBtn2[5] = {1407, 313, 243, 178, 94};
    int startBtn[3] = {1362, 295, 10};

    int xDiff = 188;
    int yDiff = 0;
    int init = 1;

    int startYDiff = 0;

    if (member_breakTimes <= 3)
    {
    }
    else if (member_breakTimes <= 6)
    {
        yDiff = 78;
        init = 4;
        startYDiff = 78;
    }
    else
    {
        yDiff = 78 + 78;

        startYDiff = 78 + 78;

        init = 7;
    }
    Btn1[0] = Btn1[0] + (xDiff * (member_breakTimes - init));
    Btn1_copy[0] = Btn1_copy[0] + (xDiff * (member_breakTimes - init));
    Btn2[0] = Btn2[0] + (xDiff * (member_breakTimes - init));
    Btn[0] = Btn[0] + (xDiff * (member_breakTimes - init));

    Btn1[1] = Btn1[1] + yDiff;
    Btn1_copy[1] = Btn1_copy[1] + yDiff;
    Btn2[1] = Btn2[1] + yDiff;
    Btn[1] = Btn[1] + yDiff;

    if (getBtn(Btn1, Btn2, Btn) || getBtn(Btn1_copy, Btn2, Btn))
    {
        Sleep(1500);
        cout << "点击个人突破结界" << endl;
    }

    startBtn1[0] = startBtn1[0] + (xDiff * (member_breakTimes - init));
    startBtn2[0] = startBtn2[0] + (xDiff * (member_breakTimes - init));
    startBtn[0] = startBtn[0] + (xDiff * (member_breakTimes - init));

    startBtn1[1] = startBtn1[1] + startYDiff;
    startBtn2[1] = startBtn2[1] + startYDiff;
    startBtn[1] = startBtn[1] + startYDiff;
    
    if (getBtn(startBtn1, startBtn2, startBtn)) {
        cout << "点击进入个人突破战斗" << endl;

        Sleep(5000);
        if (quitBreakTag) {
            cout << "有60级的结界 连退第：" << member_breakTimes << endl;
            int quitBtn[3] = { 1174, 96, 10 };
            clickRandom(quitBtn);
            Sleep(1000);
            int confimrBtn[3] = { 1559, 318, 20 };
            clickRandom(confimrBtn);
        }
        member_breakTimes++;
        return;
    }
    Btn1[2] = 109;
    Btn1[3] = 102;
    Btn1[4] = 94;
    Btn2[2] = 109;
    Btn2[3] = 102;
    Btn2[4] = 94;
    if (getColor(Btn1, Btn2))
    {
        /* 已挑战过了 */
        member_breakTimes++;
        return;
    }
}

void startBreakThrough_member()
{
    attackBreakThrough_member();
}

void endBreakThrough_member()
{
    if (endMember())
    {
        return;
    }
    int btn1[5] = { 1559, 318, 243, 178, 94 };
    int btn2[5] = { 1610, 337, 243, 178, 94 };
    int btn[5] = { 1559, 318, 20 };
    getBtn(btn1, btn2, btn);
}

void refreshBreakThrough_member()
{
    cout << "刷新结界" << endl;
    int btn1[5] = { 1729, 421, 243, 178, 94};
    int btn2[5] = { 1792, 435, 243, 178, 94 };
    int btn[3] = { 1729, 421, 20 };
    getBtn(btn1, btn2, btn);

    Sleep(2000);

    int confirmBtn1[5] = { 1565, 324, 243, 178, 94 };
    int confirmBtn2[5] = { 1621, 336, 243, 178, 94 };
    int confirmBtn[3] = { 1565, 324, 20 };
    getBtn(confirmBtn1, confirmBtn2, confirmBtn);
}

void endLuckyBag_member()
{
    cout << "识别是否可以点击福袋" << endl;
    int btn1[5] = { 1438, 435, 61, 133, 202 };
    int btn2[5] = { 1441, 441, 60, 131, 202 };
    int btn[3] = { 1170, 152, 50 };
    getBtn(btn1, btn2, btn);
}

void noTimes_member()
{
    cout << "识别是否没有突破票了" << endl;
    int btn1[5] = {};
    int btn2[5] = {};
    int btn[3] = {};
    getBtn(btn1, btn2, btn);
}

bool getIs60Level()
{
    cout << "识别是否 有60级的结界" << endl;
    int btn1[5] = { 1256, 188, 219, 213, 195 };
    int btn2[5] = { 1265, 191, 228, 222, 204 };
    if (getColor(btn1, btn2))
    {
        quitBreakTag = true;
        cout << "有60级的结界 开始进入 连退9次环节" << endl;
        return true;
    }
    return false;
}

/* 队员--个人突破 */
void LoopMemberPersonBreakThrough()
{
    int member_gameRunTimes = 1;
    /* 循环开始个人突破 */
    while (startBreakThroughTimes < 500)
    {
        cout << "循环开始个人突破 第:" << member_gameRunTimes << endl;
        member_breakTimes = 1;

        /* 识别是否 有60级的结界 */
        if (getIs60Level()) {
            member_breakTimes = 0;
        }

        while (member_breakTimes <= 9)
        {
            cout << "个人突破 第:" << member_breakTimes << endl;
            /* 打开界面 */
            openBreakThrough_member();

            /* 关闭错误结界 */
            closeErrorPersonBreak();

    
            /* 开始挑战 */
            startBreakThrough_member();
            /* 结束挑战 */
            endBreakThrough_member();
            /* 点击福袋 */
            endLuckyBag_member();
            /* 识别是否没有突破票了 */
            noTimes_member();
            Sleep(2000);
        }
        Sleep(5000);
        refreshBreakThrough_member();
        quitBreakTag = false;
        member_breakTimes = 0;
        member_gameRunTimes++;
    }
}

int btn1[5] = {};
int btn2[5] = {};
int btn[3] = {};
// getBtn(btn1, btn2, btn);