

/* ��� �ر��ͻ���� */
void closeBreakThroughInterface() {
    cout << "�ر��ͻ����" << endl;
    int btn1[5] = { 1083, 143, 233, 214, 208 };
    int btn2[5] = { 1094, 165, 116, 53, 66 };
    int btn[5] = { 1083, 143, 8 };
    getBtn(btn1, btn2, btn);
}

/* ��� �򿪽��ͻ�ƽ��� */
void openBreakThroughInterface() {
    cout << "�򿪽��ͻ�ƽ���" << endl;
    int btn1[5] = { 262, 607, 227, 213, 199 };
    int btn2[5] = { 306, 643, 143, 117, 95 };
    int btn[5] = { 262, 607, 15 };
    getBtn(btn1, btn2, btn);
}

/* ��� ���ͻ�ƽ��� */
void openCommonBreakThroughInterface() {
    cout << "���ͻ�ƽ���" << endl;
    int btn1[5] = { 1095, 366, 100, 64, 42 };
    int btn2[5] = { 1130, 410, 86, 54, 35 };
    int btn[5] = { 1095, 366, 20 };
    getBtn(btn1, btn2, btn);
}

/* �ͻ ��ʼ�ͻս�� */
void startBreakThrough() {
    cout << "��ʼ�ͻս��startBreakThrough" << endl;
    int btn1[5] = { 510, 108, 91, 68, 50 };
    int btn2[5] = { 668, 115, 89, 55, 22 };
    int btn[5] = { 487, 171, 20 };
    if (getBtn(btn1, btn2, btn)) {
        startBreakThroughTimes++;
        gameRunTimes++;
    }
}

void startBreakThrough2() {
    cout << "��ʼ�ͻս��startBreakThrough" << endl;
    int btn1[5] = { 564, 361, 243, 178, 94 };
    int btn2[5] = { 635, 383, 243, 178, 94 };
    int btn[5] = { 564, 361, 20 };
    getBtn(btn1, btn2, btn);
}

/* �ͻ �����ͻս�� */
void endBreakThrough() {
    cout << "�����ͻս��" << endl;
    int sucBtn1[5] = { 175, 630, 247, 231, 55 };
    int sucBtn2[5] = { 314, 631, 247, 231, 49 };
    int sucBtn[5] = { 24, 155, 50 };
    getBtn(sucBtn1, sucBtn2, sucBtn);

    int failBtn1[5] = { 367, 465, 246, 246, 243 };
    int failBtn2[5] = { 785, 494, 248, 212, 188 };
    int failBtn[5] = { 24, 155, 50 };
    getBtn(failBtn1, failBtn2, failBtn);
}

int slectYYLTag = 0;

void clickSelectYYL() {
    if (getColor(clickSelectYYLBtn1, clickSelectYYLBtn2)) {
        cout << "��� ���ѡ����ͻ" << endl;
        Sleep(random(500) + 500);
        randomClick(clickSelectYYLBtn[0], clickSelectYYLBtn[1], clickSelectYYLBtn[2]);
        Sleep(random(1000) + 2000);
        randomClick(startYYLBtn[0], startYYLBtn[1], startYYLBtn[2]);
        slectYYLTag = 0;
    }
}

/* ѡ���ͻ */
void selectYYL() {
    cout << "��� ѡ���ͻ" << endl;
    if (getColor(selectYYLButton1, selectYYLButton2)) {
        Sleep(random(500) + 500);
        randomClick(selectYYLButton[0], selectYYLButton[1], selectYYLButton[2]);
        slectYYLTag = 1;
    }
}

void closeConnect() {

}

void closeErrorBreak() {
    int btn1[5] = { 315, 148, 62, 52, 46 };
    int btn2[5] = { 377, 209, 74, 69, 65 };
    int btn[5] = { 375, 167, 20 };
    getBtn(btn1, btn2, btn);

    int cdBtn1[5] = { 555, 361, 176, 169, 161 };
    int cdBtn2[5] = { 641, 380, 176, 169, 161 };
    int cdBtn[5] = { 123, 61, 50 };
    if (getBtn(cdBtn1, cdBtn2, cdBtn)) {
        startBreakThroughTimes++;
        gameRunTimes++;
    }
}

void teamBreakThrough(int time) {
    gameRunTimes = 0;
    cout << "�ӳ���ʼ�ͻ��ս" << endl;
    /* �ر�Э������ */
    int closeConnectBtn1[5] = { 702, 136, 232, 212, 207 };
    int closeConnectBtn2[5] = { 720, 152, 232, 212, 207 };
    int closeConnectBtn[5] = { 702, 136, 10 };

    while (gameRunTimes < 6)
    {
        getBtn(closeConnectBtn1, closeConnectBtn2, closeConnectBtn);
        Sleep(random(500) + 500); //�ȴ�1s ���س���
        closeErrorBreak();
        Sleep(random(500) + 500); //�ȴ�1s ���س���
        closeBreakThroughInterface(); //�رս�����
        Sleep(random(500) + 500); //�ȴ�1s ���س���
        openBreakThroughInterface(); //�򿪽�����
        Sleep(random(500) + 500); //�ȴ�1s ���س���
        openCommonBreakThroughInterface(); //���ͻ����
        Sleep(random(500) + 2000); //�ȴ�1s ���س���
        startBreakThrough(); //��ʼ�ͻս��
        Sleep(random(500) + 500); //�ȴ�2s ���س���
        startBreakThrough2();
        Sleep(random(500) + 500); //�ȴ�2s ���س���
        endBreakThrough(); //�����ͻս��
        Sleep(random(500) + 500); //�ȴ�2s ���س���
        /*selectYYL();
        if (slectYYLTag == 1) {
            clickSelectYYL();
        }*/
    }
    Sleep(random(60000) + time); //�ȴ�30����1800000
}

void memberBreakThrough(int time) {
    int memberTime = 0;
    cout << "��Ա��ʼ�ͻ��ս" << endl;
    while (memberTime < 6)
    {
        closeConnect();
        Sleep(random(500) + 500); //�ȴ�1s ���س���
        closeErrorBreak();
        Sleep(random(500) + 500); //�ȴ�1s ���س���
        closeBreakThroughInterface(); //�رս�����
        Sleep(random(500) + 500); //�ȴ�1s ���س���
        openBreakThroughInterface(); //�򿪽�����
        Sleep(random(500) + 500); //�ȴ�1s ���س���
        openCommonBreakThroughInterface(); //���ͻ����
        Sleep(random(500) + 2000); //�ȴ�1s ���س���
        startBreakThrough(); //��ʼ�ͻս��
        Sleep(random(500) + 500); //�ȴ�2s ���س���
        startBreakThrough2();
        Sleep(random(500) + 500); //�ȴ�2s ���س���
        endBreakThrough(); //�����ͻս��
        Sleep(random(500) + 500); //�ȴ�2s ���س���
    }
    Sleep(random(60000) + time); //�ȴ�30����1800000
}

/* 弽��ͻ�� */
void LoopStartBreakThrough(int time, bool multiple) {
    while (startBreakThroughTimes < 500)
    {
        teamBreakThrough(time);
        if (multiple) {
            memberBreakThrough(time);
        }
    }
}


/*=============���ͻ��=================*/
/**
* ���ͻ��
* 1. ѭ��ˢ9��
* 2. ʧ�ܵ�����
* 3. ����֮�� ����9��
*
* ͻ��ȯ ʶ��Ϊ0 ʱ   ���� ˢƱ���� ˢ��30�ź� ֹͣ ����ѭ�����ͻ��
*/

void getCurrentBreak() {
    if (
        getEndButton(secondLuckyBagEndTop, secondLuckyBagEndRight, leaderScreenInit[0], leaderScreenInit[1])
        )
    {
        cout << "���˽��ͻ�� ��ȡ����" << endl;
        randomClick(250, 350, 250);
        Sleep(2000);
    }
}

void startPersonBreakThrough() {
    cout << "startPersonBreakThrough "<< gameRunTimes << endl;
    int top_x, top_y, top_r, top_g, top_b;
    int bot_x, bot_y, bot_r, bot_g, bot_b;
    int btn_x, btn_y, btn_ratio = personintobreakBtn[2];
    int btn1_x, btn1_y, btn1_ratio = personbreakBtn[2];
    if (gameRunTimes < 4) {
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
    else if (gameRunTimes < 7) {
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
    else {
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
    int top[5] = { top_x, top_y, top_r, top_g, top_b }; int bot[5] = { bot_x, bot_y, bot_r, bot_g, bot_b };
    int alreadyTop[5] = { top_x, top_y, alreadyBreakTop[2], alreadyBreakTop[3], alreadyBreakTop[4] }; int alreadyBot[5] = { bot_x, bot_y, alreadyBreakTop[2], alreadyBreakTop[3], alreadyBreakTop[4] };

    cout << top_x << top_y << top_r << top_g << top_b << endl;
    cout<< bot_x <<bot_y<<bot_r<< bot_g<< bot_b << endl;

    //��ǰӦ�ô�ڼ������ gameRunTimes
    //ʶ��ǰ��� �Ƿ�����ս ��Ҫ����
    //ʶ��ǰ��� �Ƿ�����սʧ�� ��Ҫ����
    cout << "ʶ��ǰ��� �Ƿ�����ս ��Ҫ����" << endl;
    if (
        getEndButton(alreadyTop, alreadyBot, leaderScreenInit[0], leaderScreenInit[1])
        )
    {
        gameRunTimes++;
        cout << gameRunTimes << "����ս ���� gameruntimes = " << gameRunTimes << endl;
        return;
    }

    
    //�� 60�����ʱ  ��������9�� ��֧
    if (getColor(outBreakL, outBreakR)) {
        //�������˷�֧
        cout << "�������˷�֧" << endl;
        outBreakTag = 1;
    }
    else {
        cout << "outtag = 0" << endl;
        outBreakTag = 0;
    }

    if (getEndButton(top, bot, leaderScreenInit[0], leaderScreenInit[1]))
    {
        cout << "���˽��ͻ�� ��ʼս��" << endl;
        randomClick(btn1_x, btn1_y, btn1_ratio);
        Sleep(1000);
        cout << "���˽��ͻ�� ��ʼս��btn_x, btn_y, btn_ratio" << btn_x << btn_y << btn_ratio << endl;
        randomClick(btn_x, btn_y, btn_ratio);
        gameRunTimes++;
        cout << "gameRunTimes" << gameRunTimes << endl;
        if (outBreakTag) {
            Sleep(7000);
            cout << "�˳����" << endl;
            randomClick(outBreakBtn1[0], outBreakBtn1[1], outBreakBtn1[2]);
            Sleep(2000);
            randomClick(outBreakBtn2[0], outBreakBtn2[1], outBreakBtn2[2]);
        }
    }
}

/**
* ���ͻ��
* 1. ѭ��ˢ9��
* 2. ʧ�ܵ�����
* 3. ����֮�� ����9��
*/

void LoopPersonBreakThrough() {
    int breakThroughTimes = 1; //��¼ ��ǰ���� �ڼ��ֽ��ͻ��
    gameRunTimes = 1; //��¼ ��ǰһ�� ��� ���е��ڼ���ͻ����
    while (startBreakThroughTimes < 508)
    {
        cout << "while" << gameRunTimes << endl;
        while (gameRunTimes < 5000) // =7ʱ �ѽ��а˴��� �ھŴδ��� �ͽ�����һ����
        {
            cout << "gameRunTimes === " << gameRunTimes << endl;
            if (getEndButton(clickOneBreakTop, clickOneBreakBot, leaderScreenInit[0], leaderScreenInit[1])) {
                randomClick(clickOneBreakBtn[0], clickOneBreakBtn[1], clickOneBreakBtn[2]);
                cout << "��ǰ���ڵ���˽�� ����δ������Ϸ��" << gameRunTimes << endl;
            }
            if (gameRunTimes < 10) {
                openBreakThroughInterface(); //�򿪽�����
                Sleep(random(1000) + 1000); //�ȴ�1s ���س���
                startPersonBreakThrough(); //��ʼ���ͻ��ս��
                endBreakThrough(); //����ս��
            }
            //������һ��
            if (gameRunTimes >= 10) {
                Sleep(5000);
                endBreakThrough(); //����ս��
                if (outBreakTag) {
                    Sleep(5000);
                    cout << "ˢ�½��" << endl;
                    randomClick(outBreakBtn3[0], outBreakBtn3[1], outBreakBtn3[2]);
                    Sleep(3000);
                    cout << "ˢ�½��" << endl;
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



/* ��� �ر��ͻ���� */
void closeBreakThroughInterface_member() {
     Sleep(1000);
     randomClick(close_break_btn[0], close_break_btn[1], close_break_btn[2]);
}

//�򿪽�����
void openBreakThroughInterface_member() {
    if (getColor(openBreakThrough1, openBreakThrough2)) {
        Sleep(1000);
        randomClick(openBreakThrough_button[0], openBreakThrough_button[1], openBreakThrough_button[2]);
    }
}

//���ͻ����
void openCommonBreakThroughInterface_member() {
    if (getColor(openBreakThrough1, openBreakThrough2)) {
        Sleep(1000);
        randomClick(openBreakThrough_button[0], openBreakThrough_button[1], openBreakThrough_button[2]);
    }
}

//����ͻ
void clickBreakTeam_member() {
    if (getColor(click_break_team1, click_break_team2)) {
        Sleep(1000);
        randomClick(click_break_team_btn[0], click_break_team_btn[1], click_break_team_btn[2]);
    }
}

//������
void clickBreak_member() {
    if (getColor(click_break1, click_break2)) {
        Sleep(1000);
        randomClick(click_break_btn[0], click_break_btn[1], click_break_btn[2]);
    }
}

//��ʼ�����ͻս��
void startAttack_memebr() {
    if (getColor(start_attck1, start_attck2)) {
        Sleep(1000);
        randomClick(start_attck_btn[0], start_attck_btn[1], start_attck_btn[2]);
    }
}

void end_break_member() {
    //ִ�йر�����Э�����涯��
    closeCooperationButton(memberScreenInit[0], memberScreenInit[1]);
    //ִ�н���ս��
    if (getColor(end_break_member1, end_break_member2)) {
        cout << "�������" << endl;
        randomClick(end_break_member_btn[0], end_break_member_btn[1], end_break_member_btn[2]);
        Sleep(4000);
        closeBreakThroughInterface_member(); //�رս�����
        gameRunTimes_member_break++;
    }
}



void LoopStartMemberBreakThrough(int time) {
    while (startBreakThroughTimes < 500)
    {
        gameRunTimes_member_break = 0;
        while (gameRunTimes_member_break <= 6)
        {

            openBreakThroughInterface_member(); //�򿪽�����

            openCommonBreakThroughInterface_member(); //���ͻ����

            clickBreakTeam_member(); //����ͻ

            clickBreak_member();//������

            startAttack_memebr(); //��ʼ�ͻս��

            end_break_member(); //�����ͻս��
        }
        Sleep(random(60000) + time); //�ȴ�30����1800000  �ظ��ͻ���� + 3600000
    }
}