#pragma once
/* �ν�� */

int active = 1;

bool couldStart = true;

int closeConnectBtn1[5] = { 702, 136, 232, 212, 207 };
int closeConnectBtn2[5] = { 720, 152, 232, 212, 207 };
int closeConnectBtn[5] = { 702, 136, 10 };


void getIsNeedQuit()
{
    cout << "ʶ��ǰ�Ƿ���57�����" << endl;
    int btn1[5] = { 168, 195, 206, 200, 183 };
    int btn2[5] = { 170, 204, 245, 240, 221 };

    int done_btn1[5] = { 168, 195, 103, 100, 91 };
    int done_btn2[5] = { 170, 204, 122, 120, 110 };

    int btn60_1[5] = { 157, 198, 167, 160, 144 };
    int btn60_2[5] = { 174, 199, 242, 237, 218 };

    int btn59_1[5] = { 163, 200, 205, 199, 182 };
    int btn59_2[5] = { 172, 200, 155, 147, 133 };

    int btn58_1[5] = { 168, 203, 193, 186, 170 };
    int btn58_2[5] = { 157, 202, 34, 24, 15 };


    if (getColor(btn60_1, btn60_2) || getColor(btn59_1, btn59_2) || getColor(btn58_1, btn58_2)) {
        quitBreakTag = true;
        cout << "��ʼ����9�λ���" << endl;
        return;
    }
     quitBreakTag = false;
   
    /*if (getColor(btn1, btn2) || getColor(done_btn1, done_btn2))
    {
    }*/
}

void quitAttack() {
    Sleep(4000);
    cout << "������ذ�ť" << endl;
    int btn1[5] = { 34, 51, 217, 179, 139 };
    int btn2[5] = { 49, 65, 211, 172, 129 };
    int btn[3] = { 27, 49, 15 };
    if (!getBtn(btn1, btn2, btn)) {
        int btn31[5] = { 33, 53, 252, 219, 114 };
        int btn32[5] = { 47, 64, 248, 238, 199 };
        int btn33[3] = { 27, 49, 15 };
        getBtn(btn31, btn32, btn33);
    }
    Sleep(1000);
    cout << "�˳����" << endl;
    int btn21[5] = { 629, 397, 243, 178, 94 };
    int btn22[5] = { 716, 424, 243, 178, 94 };
    int btn23[3] = { 629, 397, 15 };
    getBtn(btn21, btn22, btn23);
    Sleep(2000);
}

void endTeamLuckyBag()
{
    cout << "ʶ�𸣴�" << endl;
    int btn1[5] = { 683, 416, 37, 33, 33 };
    int btn2[5] = { 590, 509, 45, 24, 20 };
    int btn[3] = { 511, 411, 30 };
    getBtn(btn1, btn2, btn);
}

void noBreakTimes()
{
    cout << "ʶ���Ƿ�û��ͻ��Ʊ��" << endl;
    int btn1[5] = {};
    int btn2[5] = {};
    if (getColor(btn1, btn2)) {
        couldStart = false;
    }
}

bool getNowInterfaceIsBreak() {
    cout << "ʶ��ǰ�Ƿ��� ���ͻ�ƽ���" << endl;
    int btn1[5] = { 542, 112, 248, 243, 224 };
    int btn2[5] = { 1094, 150, 232, 212, 207 };
    return getColor(btn1, btn2);
}


void attackBreakThrough()
{
    cout << "��ʼս��" << endl;


    // ��ǰ�ǵڼ������ active

    // δ����ʱ ����active����
    int startBtn1_init[5] = { 254, 182, 218, 205, 189 };
    int startBtn2_init[5] = { 366, 210, 218, 205, 189 };
    int startBtn_init[3] = { 254, 182, 25 };
    
    int startBtn1_cur[5] = { 254, 182, 218, 205, 189 };
    int startBtn2_cur[5] = { 366, 210, 218, 205, 189 };
    int startBtn_cur[3] = { 254, 182, 25 };


    //int startBtn1_ready[5] = { 309, 365, 220, 150, 82 };
    //int startBtn2_ready[5] = { 396, 394, 188, 108, 66 };
    //int startBtn_ready[3] = { 302, 360, 25 };

    int startBtn1_ready[5] = { 309, 365, 243, 178, 94 };
    int startBtn2_ready[5] = { 396, 394, 243, 178, 94 };
    int startBtn_ready[3] = { 302, 360, 25 };

    int startBtn1_ready_cur[5] = { 309, 365, 243, 178, 94 };
    int startBtn2_ready_cur[5] = { 396, 394, 243, 178, 94 };
    int startBtn_ready_cur[3] = { 302, 360, 25 };

    switch (active) {
    case 1:
        break;
    case 2: // x +1
        startBtn1_cur[0] = startBtn1_init[0] + 299;
        startBtn2_cur[0] = startBtn2_init[0] + 299;
        startBtn_cur[0] = startBtn_init[0] + 299;

        startBtn1_ready_cur[0] = startBtn1_ready[0] + 299;
        startBtn2_ready_cur[0] = startBtn2_ready[0] + 299;
        startBtn_ready_cur[0] = startBtn_ready[0] + 299;

        break;
    case 3: // x +2
        startBtn1_cur[0] = startBtn1_init[0] + 299 + 297;
        startBtn2_cur[0] = startBtn2_init[0] + 299 + 297;
        startBtn_cur[0] = startBtn_init[0] + 299 + 297;

        startBtn1_ready_cur[0] = startBtn1_ready[0] + 299*2;
        startBtn2_ready_cur[0] = startBtn2_ready[0] + 299*2;
        startBtn_ready_cur[0] = startBtn_ready[0] + 299*2;
        break;
    case 4: // y +1
        startBtn1_cur[1] = startBtn1_init[1] + 121;
        startBtn2_cur[1] = startBtn2_init[1] + 121;
        startBtn_cur[1] = startBtn_init[1] + 121;

        startBtn1_ready_cur[1] = startBtn1_ready[1] + 121;
        startBtn2_ready_cur[1] = startBtn2_ready[1] + 121;
        startBtn_ready_cur[1] = startBtn_ready[1] + 121;

        break;
    case 5: //x+1  y+1
        startBtn1_cur[0] = startBtn1_init[0] + 299;
        startBtn2_cur[0] = startBtn2_init[0] + 299;
        startBtn_cur[0] = startBtn_init[0] + 299;
        startBtn1_cur[1] = startBtn1_init[1] + 121;
        startBtn2_cur[1] = startBtn2_init[1] + 121;
        startBtn_cur[1] = startBtn_init[1] + 121;

        startBtn1_ready_cur[0] = startBtn1_ready[0] + 299;
        startBtn2_ready_cur[0] = startBtn2_ready[0] + 299;
        startBtn_ready_cur[0] = startBtn_ready[0] + 299;
        startBtn1_ready_cur[1] = startBtn1_ready[1] + 121;
        startBtn2_ready_cur[1] = startBtn2_ready[1] + 121;
        startBtn_ready_cur[1] = startBtn_ready[1] + 121;

        break;
    case 6: // x+2 y+1
        startBtn1_cur[0] = startBtn1_init[0] + 299 + 297;
        startBtn2_cur[0] = startBtn2_init[0] + 299 + 297;
        startBtn_cur[0] = startBtn_init[0] + 299 + 297;
        startBtn1_cur[1] = startBtn1_init[1] + 121;
        startBtn2_cur[1] = startBtn2_init[1] + 121;
        startBtn_cur[1] = startBtn_init[1] + 121;

        startBtn1_ready_cur[0] = startBtn1_ready[0] + 299 * 2;
        startBtn2_ready_cur[0] = startBtn2_ready[0] + 299 * 2;
        startBtn_ready_cur[0] = startBtn_ready[0] + 299*2;
        startBtn1_ready_cur[1] = startBtn1_ready[1] + 121;
        startBtn2_ready_cur[1] = startBtn2_ready[1] + 121;
        startBtn_ready_cur[1] = startBtn_ready[1] + 121;
        break;
    case 7: // y+2
        startBtn1_cur[1] = startBtn1_init[1] + 121 + 122;
        startBtn2_cur[1] = startBtn2_init[1] + 121 + 122;
        startBtn_cur[1] = startBtn_init[1] + 122 + 121;

        startBtn1_ready_cur[1] = startBtn1_ready[1] + 121 * 2;
        startBtn2_ready_cur[1] = startBtn2_ready[1] + 121 * 2;
        startBtn_ready_cur[1] = startBtn_ready[1] + 121*2;

        break;
    case 8: // x+1 y+2
        startBtn1_cur[0] = startBtn1_init[0] + 299;
        startBtn2_cur[0] = startBtn2_init[0] + 299;
        startBtn_cur[0] = startBtn_init[0] + 299;
        startBtn1_cur[1] = startBtn1_init[1] + 121 + 122;
        startBtn2_cur[1] = startBtn2_init[1] + 121 + 122;
        startBtn_cur[1] = startBtn_init[1] + 122 + 121;


        startBtn1_ready_cur[0] = startBtn1_ready[0] + 299;
        startBtn2_ready_cur[0] = startBtn2_ready[0] + 299;
        startBtn_ready_cur[0] = startBtn_ready[0] + 299;
        startBtn1_ready_cur[1] = startBtn1_ready[1] + 121 * 2;
        startBtn2_ready_cur[1] = startBtn2_ready[1] + 121 * 2;
        startBtn_ready_cur[1] = startBtn_ready[1] + 121 * 2;
        break;
    case 9: //x+2 y+2
        startBtn1_cur[0] = startBtn1_init[0] + 299 + 297;
        startBtn2_cur[0] = startBtn2_init[0] + 299 + 297;
        startBtn_cur[0] = startBtn_init[0] + 299 + 297;
        startBtn1_cur[1] = startBtn1_init[1] + 121 + 122;
        startBtn2_cur[1] = startBtn2_init[1] + 121 + 122;
        startBtn_cur[1] = startBtn_init[1] + 122 + 121;

        startBtn1_ready_cur[0] = startBtn1_ready[0] + 299 * 2;
        startBtn2_ready_cur[0] = startBtn2_ready[0] + 299 * 2;
        startBtn_ready_cur[0] = startBtn_ready[0] + 299 * 2;
        startBtn1_ready_cur[1] = startBtn1_ready[1] + 121 * 2;
        startBtn2_ready_cur[1] = startBtn2_ready[1] + 121 * 2;
        startBtn_ready_cur[1] = startBtn_ready[1] + 121*2;
        break;
    default:
        break;
    }
    cout << "���ͷ��Ƭ" << endl;
    // active �Ƿ� �ѻ���
    if (!getBtn(startBtn1_cur, startBtn2_cur, startBtn_cur)) {
        // �ѻ���  active++
        cout << "��ǰ����ѻ���" << endl;
        active++;
        return;
    }
    Sleep(1000);
    cout << "���������ť" << endl;
    if (getBtn(startBtn1_ready_cur, startBtn2_ready_cur, startBtn_ready_cur)) {
        cout << "����ս������" << endl;
        active++;
        Sleep(1000);
    }

    if (quitBreakTag) {
        quitAttack();
    }
}


void refreshBreakThrough_team()
{

    Sleep(5000);

    ///* ������ս */
    endBreakThrough();

    Sleep(3000);

    ///* ������ս */
    endBreakThrough();

    Sleep(2000);


    cout << "ˢ�½��" << endl;
    int btn1[5] = { 887, 553, 243, 178, 94 };
    int btn2[5] = { 1010, 579, 243, 178, 94 };
    int btn[3] = { 887, 553, 15 };
    getBtn(btn1, btn2, btn);

    Sleep(2000);

    int confirmBtn1[5] = { 626, 407, 243, 178, 94 };
    int confirmBtn2[5] = { 746, 429, 243, 178, 94 };
    int confirmBtn[3] = { 626, 407, 15 };
    getBtn(confirmBtn1, confirmBtn2, confirmBtn);
}


void LoopPersonBreakThrough()
{
    int team_gameRunTimes = 1;
    /* ѭ����ʼ����ͻ�� */
    while (startBreakThroughTimes < 500)
    {
        cout << "ѭ����ʼ����ͻ�� ��:" << team_gameRunTimes << "��" << endl;
        while (active <= 9)
        {
            cout << "����ͻ�� ��:" << active << "��" << endl;

            /* �رմ����� */
            //cout << "�رմ����� closeErrorBreak----" << endl;
            //closeBreakThroughInterface();

            if (getNowInterfaceIsBreak()) {
                cout << "��ǰ���� ���ͻ�ƽ��� ��ʼ��ս" << endl;

                /* ʶ���Ƿ�û��ͻ��Ʊ�� */
                //noBreakTimes();

                /* ʶ���Ƿ� ��60���Ľ�� */
                getIsNeedQuit();

                /* ��ʼ��ս */
                attackBreakThrough();
            }

           
            ///* ������ս */
            endBreakThrough();

            ///* ������� */
            endTeamLuckyBag();
            //
            Sleep(1000);

            //alreadySucBreak();
        }


        if (quitBreakTag) {
            refreshBreakThrough_team();
        }
        active = 1;
        team_gameRunTimes++;
    }
}