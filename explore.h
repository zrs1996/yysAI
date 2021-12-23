
/* ������28ģʽ */

/* ʶ��С��1 */
bool getExpMonster281ButtonColor() {
    //top����
    int top_x = hardMonster28FirstTop[0] + leaderScreenInit[0];
    int top_y = hardMonster28FirstTop[1] + leaderScreenInit[1];
    int top_r = hardMonster28FirstTop[2];
    int top_g = hardMonster28FirstTop[3];
    int top_b = hardMonster28FirstTop[4];
    bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
    //right����
    int right_x = hardMonster28FirstRight[0] + leaderScreenInit[0];
    int right_y = hardMonster28FirstRight[1] + leaderScreenInit[1];
    int right_r = hardMonster28FirstRight[2];
    int right_g = hardMonster28FirstRight[3];
    int right_b = hardMonster28FirstRight[4];
    bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
    //bottom����
    int bottom_x = hardMonster28FirstBottom[0] + leaderScreenInit[0];
    int bottom_y = hardMonster28FirstBottom[1] + leaderScreenInit[1];
    int bottom_r = hardMonster28FirstBottom[2];
    int bottom_g = hardMonster28FirstBottom[3];
    int bottom_b = hardMonster28FirstBottom[4];
    bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
    //left����
    int left_x = hardMonster28FirstLeft[0] + leaderScreenInit[0];
    int left_y = hardMonster28FirstLeft[1] + leaderScreenInit[1];
    int left_r = hardMonster28FirstLeft[2];
    int left_g = hardMonster28FirstLeft[3];
    int left_b = hardMonster28FirstLeft[4];
    bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
    //cout << "�������ģʽ��ʶ��ӳ��Ŀ�ʼ��ս��ť" << top << right << bottom << left << endl;
    if (top && right && bottom && left) {
        int startButton_x = hardMonster28FirstButtonX + leaderScreenInit[0];
        int startButton_y = hardMonster28FirstButtonY + leaderScreenInit[1];
        moveMouseByRandom(startButton_x, startButton_y, 15);
        return 1;
    }
    else {
        return 0;
    }
}

/* ʶ��С��2 */
bool getExpMonster282ButtonColor() {
    //top����
    int top_x = hardMonster28SecondTop[0] + leaderScreenInit[0];
    int top_y = hardMonster28SecondTop[1] + leaderScreenInit[1];
    int top_r = hardMonster28SecondTop[2];
    int top_g = hardMonster28SecondTop[3];
    int top_b = hardMonster28SecondTop[4];
    bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
    //right����
    int right_x = hardMonster28SecondRight[0] + leaderScreenInit[0];
    int right_y = hardMonster28SecondRight[1] + leaderScreenInit[1];
    int right_r = hardMonster28SecondRight[2];
    int right_g = hardMonster28SecondRight[3];
    int right_b = hardMonster28SecondRight[4];
    bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
    //bottom����
    int bottom_x = hardMonster28SecondBottom[0] + leaderScreenInit[0];
    int bottom_y = hardMonster28SecondBottom[1] + leaderScreenInit[1];
    int bottom_r = hardMonster28SecondBottom[2];
    int bottom_g = hardMonster28SecondBottom[3];
    int bottom_b = hardMonster28SecondBottom[4];
    bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
    //left����
    int left_x = hardMonster28SecondLeft[0] + leaderScreenInit[0];
    int left_y = hardMonster28SecondLeft[1] + leaderScreenInit[1];
    int left_r = hardMonster28SecondLeft[2];
    int left_g = hardMonster28SecondLeft[3];
    int left_b = hardMonster28SecondLeft[4];
    bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
    //cout << "���˹���ʶ��ӳ��Ŀ�ʼ��ս��ť" << top << right << bottom << left << endl;
    if (top && right && bottom && left) {
        int startButton_x = hardMonster28SecondButtonX + leaderScreenInit[0];
        int startButton_y = hardMonster28SecondButtonY + leaderScreenInit[1];
        moveMouseByRandom(startButton_x, startButton_y, 15);
        return 1;
    }
    else {
        return 0;
    }
}

/* �ƶ������������� */
void moveExpDungeonScene(int x, int y, int move) {
    //��긴λ��ʼ��λ��
    SetCursorPos(x, y);
    // �����ƶ�
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //�������
    SetCursorPos(250, 200);
    Sleep(100);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); //���̧��
    Sleep(1000);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //�������
    SetCursorPos(100, 200);
    Sleep(100);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); //���̧��
}

/* ��ȡ�������� */
bool getSingleExpStartInterfaceColor() {
    //top����
    int top_x = expInterfaceTop[0] + leaderScreenInit[0];
    int top_y = expInterfaceTop[1] + leaderScreenInit[1];
    int top_r = expInterfaceTop[2];
    int top_g = expInterfaceTop[3];
    int top_b = expInterfaceTop[4];
    bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
    //right����
    int right_x = expInterfaceRight[0] + leaderScreenInit[0];
    int right_y = expInterfaceRight[1] + leaderScreenInit[1];
    int right_r = expInterfaceRight[2];
    int right_g = expInterfaceRight[3];
    int right_b = expInterfaceRight[4];
    bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
    //bottom����
    int bottom_x = expInterfaceBottom[0] + leaderScreenInit[0];
    int bottom_y = expInterfaceBottom[1] + leaderScreenInit[1];
    int bottom_r = expInterfaceBottom[2];
    int bottom_g = expInterfaceBottom[3];
    int bottom_b = expInterfaceBottom[4];
    bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
    //left����
    int left_x = expInterfaceLeft[0] + leaderScreenInit[0];
    int left_y = expInterfaceLeft[1] + leaderScreenInit[1];
    int left_r = expInterfaceLeft[2];
    int left_g = expInterfaceLeft[3];
    int left_b = expInterfaceLeft[4];
    bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
    cout << "���˹���ʶ��������" << top << right << bottom << left << endl;
    if (top && right && bottom && left) {
        int startButton_x = expInterfaceButtonX + leaderScreenInit[0];
        int startButton_y = expInterfaceButtonY + leaderScreenInit[1];
        moveMouseByRandom(startButton_x, startButton_y, 20);
        return 1;
    }
    else {
        return 0;
    }
}

/* �˳��������� */
void backToExpInterface() {
    SetCursorPos(backExpButtonX, backExpButtonY);
    aiAutoClick();
    Sleep(2000);
    SetCursorPos(backExpConfirmButtonX, backExpConfirmButtonY);
    aiAutoClick();
}
/* ��ʼ���˹�����ս */
void startSingleExpGame() {
    while (getExpMonster281ButtonColor() || getExpMonster282ButtonColor())
    {
        aiAutoClick();
        gameRunTimes++;
        Sleep(10000);
        do
        {
            //doubleLeaderEndGame();
            Sleep(1000);
        } while (!isEndGame);
        isEndGame = false;
        Sleep(3000);
    }
    /* �˳��������� */
    backToExpInterface();
}

/* ������˹���̽����ť ���뵥�˹������� */
void clickSingleExpButton()
{
    //ִ�йر�����Э�����涯��
    closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
    //���뵥�˹�������
    if (getSingleExpStartInterfaceColor()) {
        aiAutoClick();
        cout << "���˹�����" << gameRunTimes << "�ֽ��빷������" << endl;
        Sleep(3000); //�ȴ�3s ���س���
        startSingleExpGame();
    }
}

/* ѭ���������˹��� */
void LoopStartSingleExp() {
    cout << "���������ĳ�ʼ����x" << endl;
    cin >> leaderScreenInit[0];
    cout << "���������ĳ�ʼ����y" << endl;
    cin >> leaderScreenInit[1];
    do
    {
        clickSingleExpButton(); //ִ�п�ʼս�����߼�
        Sleep(3000); //�ȴ�3s ���س���
    } while (gameRunTimes <= 500);
}
