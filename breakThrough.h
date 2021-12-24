int member_breakTimes = 1; //队员个人突破 某一轮的 第几次突破

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

void getCurrentBreak()
{
    if (
        getEndButton(secondLuckyBagEndTop, secondLuckyBagEndRight, leaderScreenInit[0], leaderScreenInit[1]))
    {
        randomClick(250, 350, 250);
        Sleep(2000);
    }
}

void startPersonBreakThrough()
{
    cout << "startPersonBreakThrough " << gameRunTimes << endl;
    int top_x, top_y, top_r, top_g, top_b;
    int bot_x, bot_y, bot_r, bot_g, bot_b;
    int btn_x, btn_y, btn_ratio = personintobreakBtn[2];
    int btn1_x, btn1_y, btn1_ratio = personbreakBtn[2];
    if (gameRunTimes < 4)
    {
        top_x = personbreakTop[0] + personbreakratiox * (gameRunTimes - 1);
        top_y = personbreakTop[1];
        top_r = personbreakTop[2];
        top_g = personbreakTop[3];
        top_b = personbreakTop[4];

        bot_x = personbreakTop[0] + personbreakratiox * (gameRunTimes - 1);
        bot_y = personbreakTop[1];
        bot_r = personbreakTop[2];
        bot_g = personbreakTop[3];
        bot_b = personbreakTop[4];

        btn1_x = personbreakBtn[0] + personbreakratiox * (gameRunTimes - 1);
        btn1_y = personbreakBtn[1];

        btn_x = personintobreakBtn[0] + personintobreakration[0] * (gameRunTimes - 1);
        btn_y = personintobreakBtn[1];
    }
    else if (gameRunTimes < 7)
    {
        top_x = personbreakTop[0] + personbreakratiox * (gameRunTimes - 4);
        top_y = personbreakTop[1] + personbreakratioy;
        top_r = personbreakTop[2];
        top_g = personbreakTop[3];
        top_b = personbreakTop[4];

        bot_x = personbreakTop[0] + personbreakratiox * (gameRunTimes - 4);
        bot_y = personbreakTop[1] + personbreakratioy;
        bot_r = personbreakTop[2];
        bot_g = personbreakTop[3];
        bot_b = personbreakTop[4];

        btn1_x = personbreakBtn[0] + personbreakratiox * (gameRunTimes - 4);
        btn1_y = personbreakBtn[1] + personbreakratioy;

        btn_x = personintobreakBtn[0] + personintobreakration[0] * (gameRunTimes - 4);
        btn_y = personintobreakBtn[1] + personintobreakration[1];
    }
    else
    {
        top_x = personbreakTop[0] + personbreakratiox * (gameRunTimes - 7);
        top_y = personbreakTop[1] + personbreakratioy * 2;
        top_r = personbreakTop[2];
        top_g = personbreakTop[3];
        top_b = personbreakTop[4];

        bot_x = personbreakTop[0] + personbreakratiox * (gameRunTimes - 7);
        bot_y = personbreakTop[1] + personbreakratioy * 2;
        bot_r = personbreakTop[2];
        bot_g = personbreakTop[3];
        bot_b = personbreakTop[4];

        btn1_x = personbreakBtn[0] + personbreakratiox * (gameRunTimes - 7);
        btn1_y = personbreakBtn[1] + personbreakratioy * 2;

        btn_x = personintobreakBtn[0] + personintobreakration[0] * (gameRunTimes - 7);
        btn_y = personintobreakBtn[1] + personintobreakration[1] * 2;
    }
    int top[5] = {top_x, top_y, top_r, top_g, top_b};
    int bot[5] = {bot_x, bot_y, bot_r, bot_g, bot_b};
    int alreadyTop[5] = {top_x, top_y, alreadyBreakTop[2], alreadyBreakTop[3], alreadyBreakTop[4]};
    int alreadyBot[5] = {bot_x, bot_y, alreadyBreakTop[2], alreadyBreakTop[3], alreadyBreakTop[4]};

    cout << top_x << top_y << top_r << top_g << top_b << endl;
    cout << bot_x << bot_y << bot_r << bot_g << bot_b << endl;

    if (
        getEndButton(alreadyTop, alreadyBot, leaderScreenInit[0], leaderScreenInit[1]))
    {
        gameRunTimes++;
        return;
    }

    if (getColor(outBreakL, outBreakR))
    {
        outBreakTag = 1;
    }
    else
    {
        cout << "outtag = 0" << endl;
        outBreakTag = 0;
    }

    if (getEndButton(top, bot, leaderScreenInit[0], leaderScreenInit[1]))
    {
        randomClick(btn1_x, btn1_y, btn1_ratio);
        Sleep(1000);
        randomClick(btn_x, btn_y, btn_ratio);
        gameRunTimes++;
        cout << "gameRunTimes" << gameRunTimes << endl;
        if (outBreakTag)
        {
            Sleep(7000);
            randomClick(outBreakBtn1[0], outBreakBtn1[1], outBreakBtn1[2]);
            Sleep(2000);
            randomClick(outBreakBtn2[0], outBreakBtn2[1], outBreakBtn2[2]);
        }
    }
}

void LoopPersonBreakThrough()
{
    int breakThroughTimes = 1;
    gameRunTimes = 1;
    while (startBreakThroughTimes < 508)
    {
        cout << "while" << gameRunTimes << endl;
        while (gameRunTimes < 5000)
        {
            cout << "gameRunTimes === " << gameRunTimes << endl;
            if (getEndButton(clickOneBreakTop, clickOneBreakBot, leaderScreenInit[0], leaderScreenInit[1]))
            {
                randomClick(clickOneBreakBtn[0], clickOneBreakBtn[1], clickOneBreakBtn[2]);
            }
            if (gameRunTimes < 10)
            {
                openBreakThroughInterface();
                Sleep(random(1000) + 1000);
                startPersonBreakThrough();
                endBreakThrough();
            }
            if (gameRunTimes >= 10)
            {
                Sleep(5000);
                endBreakThrough();
                if (outBreakTag)
                {
                    Sleep(5000);
                    randomClick(outBreakBtn3[0], outBreakBtn3[1], outBreakBtn3[2]);
                    Sleep(3000);
                    randomClick(outBreakBtn4[0], outBreakBtn4[1], outBreakBtn4[2]);

                    breakThroughTimes++;
                    gameRunTimes = 11;
                    return;
                }
                breakThroughTimes++;
                gameRunTimes = 1;
            }
            cout << "outBreakTag" << outBreakTag << endl;
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
    closeCooperationButton(memberScreenInit[0], memberScreenInit[1]);
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
    std::cout << "打开个人突破界面" << std::endl;
    int btn1[5] = {1320, 446, 226, 212, 196};
    int btn2[5] = {1345, 471, 144, 118, 97};
    int btn[3] = {1320, 446, 15};
    getBtn(btn1, btn2, btn);
}

void attackBreakThrough_member()
{
    int Btn1[5] = {1299, 173, 218, 205, 189};
    int Btn2[5] = {1360, 198, 218, 205, 189};
    int Btn[3] = {1299, 173, 50};

    int startBtn1[5] = { 1351, 293, 243, 178, 94 };
    int startBtn2[5] = { 1400, 309, 243, 178, 94 };
    int startBtn[3] = { 1351, 293, 10 };

    int xDiff = 188;
    int yDiff = 0;
    int init = 1;

    int startYDiff = 0;

    if (member_breakTimes <= 3)
    {

    }
    else if (member_breakTimes <= 6)
    {
        yDiff = 77;
        init = 4;
        startYDiff = 76;
    }
    else
    {
        yDiff = 77 + 76;

        startYDiff = 76 + 77;

        init = 7;
    }
    Btn1[1] = Btn1[1] + (xDiff * (member_breakTimes - init));
    Btn2[1] = Btn2[1] + (xDiff * (member_breakTimes - init));
    Btn[1] = Btn[1] + (xDiff * (member_breakTimes - init));

    Btn1[2] = Btn1[2] + yDiff;
    Btn2[2] = Btn2[2] + yDiff;
    Btn[2] = Btn[2] + yDiff;
    

    if (getBtn(Btn1, Btn2, Btn)) {
        startBtn1[1] = startBtn1[1] + (xDiff * (member_breakTimes - init));
        startBtn2[1] = startBtn2[1] + (xDiff * (member_breakTimes - init));
        startBtn[1] = startBtn[1] + (xDiff * (member_breakTimes - init));

        startBtn1[2] = startBtn1[2] + startYDiff;
        startBtn2[2] = startBtn2[2] + startYDiff;
        startBtn[2] = startBtn[2] + startYDiff;
        getBtn(startBtn1, startBtn2, startBtn);
    }
}

void startBreakThrough_member()
{
    std::cout << "点击进入个人突破战斗" << std::endl;
}

void endBreakThrough_member()
{
    if (endMember())
    {
        member_breakTimes++;
    }
}

void refreshBreakThrough_member()
{
    std::cout << "刷新结界" << std::endl;
    int btn1[5] = {};
    int btn2[5] = {};
    int btn[3] = {};
    getBtn(btn1, btn2, btn);
}

void endLuckyBag_member()
{
    std::cout << "识别是否可以点击福袋" << std::endl;
    int btn1[5] = {};
    int btn2[5] = {};
    int btn[3] = {};
    getBtn(btn1, btn2, btn);
}

void noTimes_member()
{
    std::cout << "识别是否没有突破票了" << std::endl;
    int btn1[5] = {};
    int btn2[5] = {};
    int btn[3] = {};
    getBtn(btn1, btn2, btn);
}

bool quitBreakThroughtNine_member()
{
    int quitBreakThroughTimes = 1;
    std::cout << "第" << quitBreakThroughTimes << "次退出个人突破战斗" << std::endl;

    return false;
}

void getIs60Level()
{
    std::cout << "识别是否 有60级的结界" << std::endl;
    int btn1[5] = {};
    int btn2[5] = {};
    int btn[3] = {};
    if (getBtn(btn1, btn2, btn))
    {
        std::cout << "有60级的结界 开始进入 连退9次环节" << std::endl;
        if (quitBreakThroughtNine_member)
        {
            std::cout << "连退9次 开始刷新" << std::endl;
            refreshBreakThrough_member();
        }
    }
}

/* 队员--个人突破 */
void LoopMemberPersonBreakThrough(int time)
{
    int member_gameRunTimes = 1;
    /* 循环开始个人突破 */
    while (startBreakThroughTimes < 500)
    {
        std::cout << "循环开始个人突破 轮次： " << member_gameRunTimes << std::endl;
        member_breakTimes = 1;

        while (member_breakTimes <= 9)
        {
            /* 打开界面 */
            openBreakThrough_member();
            /* 开始挑战 */
            startBreakThrough_member();
            /* 结束挑战 */
            endBreakThrough_member();
            /* 点击福袋 */
            endLuckyBag_member();
            /* 识别是否没有突破票了 */
            noTimes_member();
        }
        if (member_breakTimes > 9)
        {
            std::cout << "已挑战9次" << std::endl;
            refreshBreakThrough_member();
            member_breakTimes = 0;
            member_gameRunTimes++;
        }
    }
}

int btn1[5] = {};
int btn2[5] = {};
int btn[3] = {};
// getBtn(btn1, btn2, btn);