int member_breakTimes = 1; //��Ա����ͻ�� ĳһ�ֵ� �ڼ���ͻ��
bool quitBreakTag = false; //���˸���ͻ�ƿ���
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
    cout << "�򿪸���ͻ�ƽ���" << endl;
    int btn1[5] = {1330, 446, 226, 212, 196};
    int btn2[5] = {1345, 471, 144, 118, 97};
    int btn[3] = {1320, 446, 15};
    getBtn(btn1, btn2, btn);
}

void closeErrorPersonBreak() {
    int btn1[5] = { 1215, 351, 96, 92, 85 };
    int btn2[5] = { 1195, 436, 35, 35, 40 };
    int btn[3] = { 1165, 250, 30 };
    getBtn(btn1, btn2, btn);
}

void attackBreakThrough_member()
{
    cout << "��ʼʶ���Ƿ���Խ���ս��" << endl;
    int Btn1[5] = { 1271, 177, 218, 205, 189};
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
        yDiff = 77;
        init = 4;
        startYDiff = 77;
    }
    else
    {
        yDiff = 77 + 77;

        startYDiff = 77 + 78;

        init = 7;
    }
    Btn1[0] = Btn1[0] + (xDiff * (member_breakTimes - init));
    Btn2[0] = Btn2[0] + (xDiff * (member_breakTimes - init));
    Btn[0] = Btn[0] + (xDiff * (member_breakTimes - init));

    Btn1[1] = Btn1[1] + yDiff;
    Btn2[1] = Btn2[1] + yDiff;
    Btn[1] = Btn[1] + yDiff;

    if (getBtn(Btn1, Btn2, Btn))
    {
        Sleep(1500);
        cout << "�������ͻ�ƽ��" << endl;
    }

    startBtn1[0] = startBtn1[0] + (xDiff * (member_breakTimes - init));
    startBtn2[0] = startBtn2[0] + (xDiff * (member_breakTimes - init));
    startBtn[0] = startBtn[0] + (xDiff * (member_breakTimes - init));

    startBtn1[1] = startBtn1[1] + startYDiff;
    startBtn2[1] = startBtn2[1] + startYDiff;
    startBtn[1] = startBtn[1] + startYDiff;
    
    if (getBtn(startBtn1, startBtn2, startBtn)) {
        cout << "����������ͻ��ս��" << endl;

        Sleep(5000);
        if (quitBreakTag) {
            cout << "��60���Ľ�� ���˵ڣ�" << member_breakTimes << endl;
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
        /* ����ս���� */
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
    cout << "ˢ�½��" << endl;
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
    cout << "ʶ���Ƿ���Ե������" << endl;
    int btn1[5] = { 1438, 435, 61, 133, 202 };
    int btn2[5] = { 1441, 441, 60, 131, 202 };
    int btn[3] = { 1170, 152, 50 };
    getBtn(btn1, btn2, btn);
}

void noTimes_member()
{
    cout << "ʶ���Ƿ�û��ͻ��Ʊ��" << endl;
    int btn1[5] = {};
    int btn2[5] = {};
    int btn[3] = {};
    getBtn(btn1, btn2, btn);
}

void getIs60Level()
{
    cout << "ʶ���Ƿ� ��60���Ľ��" << endl;
    int btn1[5] = { 1256, 188, 219, 213, 195 };
    int btn2[5] = { 1265, 191, 228, 222, 204 };
    if (getColor(btn1, btn2))
    {
        quitBreakTag = true;
        cout << "��60���Ľ�� ��ʼ���� ����9�λ���" << endl;
    }
}

/* ��Ա--����ͻ�� */
void LoopMemberPersonBreakThrough()
{
    int member_gameRunTimes = 1;
    /* ѭ����ʼ����ͻ�� */
    while (startBreakThroughTimes < 500)
    {
        cout << "ѭ����ʼ����ͻ�� ��:" << member_gameRunTimes << endl;
        member_breakTimes = 1;

        while (member_breakTimes <= 9)
        {
            cout << "����ͻ�� ��:" << member_breakTimes << endl;
            /* �򿪽��� */
            openBreakThrough_member();

            /* �رմ����� */
            closeErrorPersonBreak();

            /* ʶ���Ƿ� ��60���Ľ�� */
            getIs60Level();

            /* ��ʼ��ս */
            startBreakThrough_member();
            /* ������ս */
            endBreakThrough_member();
            /* ������� */
            endLuckyBag_member();
            /* ʶ���Ƿ�û��ͻ��Ʊ�� */
            noTimes_member();
            Sleep(2000);
        }
        if (member_breakTimes > 9) {
            //cout << "����ս9��" << endl;
            refreshBreakThrough_member();
            quitBreakTag = false;
            member_breakTimes = 0;
            member_gameRunTimes++;
        }
    }
}

int btn1[5] = {};
int btn2[5] = {};
int btn[3] = {};
// getBtn(btn1, btn2, btn);