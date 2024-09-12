int member_breakTimes = 1; //队员个人突破 某一轮的 第几次突破
bool quitBreakTag = false; //连退个人突破开关
void closeBreakThroughInterface()
{
    int btn1[5] = { 1088, 127, 89, 45, 45 };
    int btn2[5] = { 1092, 168, 113, 50, 62 };
    int btn[5] = { 1079, 139, 8 };
    getBtn(btn1, btn2, btn);

    int btn21[5] = { 562, 114, 248, 243, 224 };
    int btn22[5] = { 1090, 151, 232, 212, 207 };
    int btn23[5] = { 1079, 139, 8 };
    getBtn(btn21, btn22, btn23);
    cout << "closeBreakThroughInterface: " << getBtn(btn1, btn2, btn) << endl;
}

void openBreakThroughInterface()
{
    int btn1[5] = {240, 608, 231, 218, 205 };
    int btn2[5] = { 278, 640, 234, 221, 205 };
    int btn[5] = {262, 607, 15};
    if (!getBtn(btn1, btn2, btn)) {
        int btn11[5] = { 262, 607, 230, 215, 200 };
        int btn12[5] = { 308, 628, 209, 193, 175 };
        int btn13[5] = { 262, 607, 15 };
        if (!getBtn(btn11, btn12, btn13)) {
            int btn01[5] = { 238, 607, 231, 218, 205 };
            int btn21[5] = { 276, 640, 234, 215, 200 };
            int btn31[3] = { 262, 607, 15 };
            getBtn(btn01, btn21, btn31);
        }
    }
}

void openCommonBreakThroughInterface()
{
    int btn1[5] = { 1090, 151, 232, 212, 207 };
    int btn2[5] = { 1096, 363, 94, 60, 38 };
    int btn[5] = { 1095, 366, 20 };
    if (getBtn(btn1, btn2, btn)) {
        Sleep(2000);
    }
}

void startBreakThrough()
{
    cout << "startBreakThrough" << endl;
    int btn1[5] = { 1090, 151, 232, 212, 207  };
    int btn2[5] = { 96, 616, 198, 165, 120 };
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


void memberStartBreakThrough()
{
    cout << "startBreakThrough" << endl;
    int btn1[5] = { 789, 529, 217, 203, 187 };
    int btn2[5] = { 943, 557, 218, 204, 188 };
    int btn[5] = { 789, 529, 20 };
    if (getBtn(btn1, btn2, btn))
    {
        startBreakThroughTimes++;
        gameRunTimes++;
    }
}

void memberStartBreakThrough2()
{
    int btn1[5] = { 857, 413, 243, 178, 94 };
    int btn2[5] = { 945, 438, 243, 178, 94 };
    int btn[5] = { 857, 413, 20 };
    getBtn(btn1, btn2, btn);
}


void endBreakThrough()
{
    int sucBtn1[5] = {175, 630, 247, 231, 55};
    int sucBtn2[5] = {314, 631, 247, 231, 49};
    int sucBtn[3] = {24, 155, 50};
    getBtn(sucBtn1, sucBtn2, sucBtn);

    int sucBtn11[5] = { 314, 632, 247, 229, 39 };
    int sucBtn12[5] = { 177, 632, 247, 229, 37 };
    int sucBtn111[3] = { 24, 155, 50 };
    getBtn(sucBtn11, sucBtn12, sucBtn111);

    int failBtn1[5] = {367, 465, 246, 246, 243};
    int failBtn2[5] = {785, 494, 248, 212, 188};
    int failBtn[3] = {24, 155, 50};
    getBtn(failBtn1, failBtn2, failBtn);

    int failBtne1[5] = { 561, 481, 48, 42, 40 };
    int failBtne2[5] = { 785, 491, 224, 209, 199 };
    int failBtne[3] = { 24, 155, 50 };
    getBtn(failBtne1, failBtne2, failBtne);

    int failBtnr1[5] = { 427, 168, 81, 73, 90 };
    int failBtnr2[5] = { 467, 205, 99, 90, 111 };
    int failBtnr[3] = { 24, 155, 50 };
    getBtn(failBtnr1, failBtnr2, failBtnr);

    int failBtnr61[5] = { 583, 537, 255, 255, 255 };
    int failBtnr62[5] = { 347, 470, 246, 246, 243 };
    int failBtnr63[3] = { 24, 155, 50 };
    getBtn(failBtnr61, failBtnr62, failBtnr63);

    Sleep(3000);
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

    int finalStartBtn1[5] = { 556, 355, 243, 178, 94 };
    int finalStartBtn2[5] = { 630, 381, 243, 178, 94 };
    int finalStartBtn[5] = { 150, 150, 10 };
    if (getBtn(finalStartBtn1, finalStartBtn2, finalStartBtn)) {
        Sleep(1000);
    }

    

    int btn1[5] = {315, 148, 62, 52, 46};
    int btn2[5] = {377, 209, 74, 69, 65};
    int btn[5] = {375, 167, 20};
    if (getBtn(btn1, btn2, btn)) {
        Sleep(1000);
    }

    int hdbtn1[5] = { 767, 414, 95, 185, 106 };
    int hdbtn2[5] = { 780, 510, 217, 106, 87 };
    int hdbtn[5] = { 760, 496, 15 };
    if (getBtn(hdbtn1, hdbtn2, hdbtn)) {
        Sleep(1000);
    }

    int cdBtn1[5] = {555, 361, 176, 169, 161};
    int cdBtn2[5] = {641, 380, 176, 169, 161};
    int cdBtn[5] = {123, 61, 50};
    if (getBtn(cdBtn1, cdBtn2, cdBtn))
    {
        startBreakThroughTimes++;
        gameRunTimes++;
    }
}

// 判断寮突是否已经打完了
bool liaoTuIsEnd() {
    cout << "判断寮突是否已经打完了" << endl;
    int btn1[5] = { 139,226,72,63,57 };
    int btn2[5] = { 151,202,71,63,57 };
    if (getColor(btn1, btn2)) {
        return true;
    }
    return false;
}

void teamBreakThrough(int time)
{
    gameRunTimes = 0;
    int closeConnectBtn1[5] = {702, 136, 232, 212, 207};
    int closeConnectBtn2[5] = {720, 152, 232, 212, 207};
    int closeConnectBtn[5] = {702, 136, 10};

    

    while (gameRunTimes < 6)
    {
        closeErrorBreak();
        cout << "closeErrorBreak----" << endl;
        Sleep(random(500) + 1000);

        closeBreakThroughInterface();
        cout << "closeBreakThroughInterface----" << endl;
        Sleep(random(500) + 500);
        openBreakThroughInterface();
        cout << "openBreakThroughInterface----" << endl;
        Sleep(random(500) + 500);
        openCommonBreakThroughInterface();
        cout << "openCommonBreakThroughInterface----" << endl;
        Sleep(random(500) + 500);
        getBtn(closeConnectBtn1, closeConnectBtn2, closeConnectBtn);
        cout << "closeConnectBtn1----" << endl;
        Sleep(random(500) + 500);
        if (liaoTuIsEnd()) {
            gameRunTimes = 7;
            startBreakThroughTimes = 1000;
            return;
        }
        startBreakThrough();
        cout << "startBreakThrough----" << endl;
        Sleep(random(500) + 500);
        startBreakThrough2();
        cout << "startBreakThrough2----" << endl;
        Sleep(random(500) + 500);
        endBreakThrough();
        cout << "endBreakThrough----" << endl;
        Sleep(random(500) + 500);
        /*selectYYL();
        if (slectYYLTag == 1) {
            clickSelectYYL();
        }*/
    }
    if (time != 0) {
        cout << "打完六次了 等待冷却" << endl;
        Sleep(time + random(20000));
    }
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
    while (startBreakThroughTimes < 999)
    {
        if (time == 0) {
            teamBreakThrough(0);
        }
        else {
            teamBreakThrough(time);
            if (multiple)
            {
                memberBreakThrough(time);
            }
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
    if (!getBtn(btn1, btn2, btn)) {
        int btn11[5] = { 238, 607, 231, 218, 205 };
        int btn21[5] = { 276, 640, 234, 215, 200 };
        int btn31[3] = { 1320, 446, 15 };
        getBtn(btn11, btn21, btn31);
    }

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
    int startBtn[3] = { 1363, 300, 5 };

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

        Sleep(10000);
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
        cout << "已挑战过了" << endl;
        member_breakTimes++;
        return;
    }
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
    if (!getBtn(btn1, btn2, btn)) {
        int btn11[5] = { 1234, 242, 81, 75, 70 };
        int btn21[5] = { 1249, 421, 100, 94, 87 };
        int btn31[3] = { 1170, 152, 50 };
        getBtn(btn11, btn21, btn31);
    }
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
    cout << "识别是否需要连退" << endl;
    int btn1[5] = { 168, 195, 206, 200, 183 };
    int btn2[5] = { 170, 204, 245, 240, 221 };
    if (getColor(btn1, btn2))
    {
        quitBreakTag = true;
        cout << "开始进入 连退9次环节" << endl;
        return true;
    }
    return false;
}


void alreadySucBreak() {
    int btn1[5] = { 149, 161, 71, 63, 57 };
    int btn2[5] = { 270, 349, 71, 63, 55 };
    if (getColor(btn1, btn2)) {
        cout << "等待8小时重选寮突" << endl;
        Sleep(28800000);
    }
}

/* 队员--个人突破 */
void LoopMemberPersonBreakThrough()
{
    int member_gameRunTimes = 1;
    /* 循环开始个人突破 */
    while (startBreakThroughTimes < 500)
    {
        cout << "循环开始个人突破 第:" << member_gameRunTimes << "轮" << endl;
        //member_breakTimes = 6;
        while (member_breakTimes <= 9)
        {
            cout << "个人突破 第:" << member_breakTimes << "次" << endl;
            /* 打开界面 */
            openBreakThrough_member();

            /* 关闭错误结界 */
            closeErrorPersonBreak();

            /* 识别是否 有60级的结界 */
            getIs60Level();

            /* 开始挑战 */
            attackBreakThrough_member();
            /* 结束挑战 */
            endBreakThrough_member();
            /* 点击福袋 */
            endLuckyBag_member();
            /* 识别是否没有突破票了 */
            //noTimes_member();
            Sleep(2000);

            alreadySucBreak();
        }

        Sleep(5000);
        /* 结束挑战 */
        endBreakThrough_member();
        Sleep(5000);

        /* 点击福袋 */
        endLuckyBag_member();

        Sleep(10000);
        quitBreakTag = false;
        refreshBreakThrough_member();
        member_breakTimes = 1;
        member_gameRunTimes++;
    }
}

int btn1[5] = {};
int btn2[5] = {};
int btn[3] = {};
// getBtn(btn1, btn2, btn);


/*
道馆
*/

//道馆邀请 图标
int dgBtn1[5] = { 113, 248, 134, 110, 90 };
int dgBtn2[5] = { 150, 277, 134, 110, 90 };
int dgBtn[3] = { 113, 248, 10 };
int dgBtn3[5] = { 220, 280, 105, 131, 171 };