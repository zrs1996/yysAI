#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <windows.h>
#pragma comment (lib, "user32.lib")
/* ========������¼� */
void aiAutoClick()
{
    int timeRandom = random(50) + 50;
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //�������
    Sleep(timeRandom);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); //���̧��
}

/* ========�϶���� */
void dragMouse(int toX, int toY)
{
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //�������
    Sleep(50);
    //����ƶ���ˮƽ����0λ�ƣ���ֱ����drag_y����
    mouse_event(MOUSEEVENTF_MOVE, toX, toY, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); //���̧��
}

/* ��ȡ�������*/
void getWindowScreen() {

    HWND hq = FindWindow("Win32Window", "����ʦ-������Ϸ");
    //�õ����ڴ�С
    RECT rect;
    GetWindowRect(hq, &rect);
    cout << FindWindow("Win32Window", "����ʦ-������Ϸ") << endl;
    //�ƶ�����λ��
    if (rect.left != 0 || rect.top != 0) {
        MoveWindow(hq, 0, 0, screenWidth, screenHeight, false);
    }
}

/* ��ȡ�������*/
void getWindowScreenMember() {

    HWND hq = FindWindow("Win32Window", "����ʦ-������Ϸ");
    //�õ����ڴ�С
    RECT rect;
    GetWindowRect(hq, &rect);
    cout << FindWindow("Win32Window", "����ʦ-������Ϸ") << endl;
    //�ƶ�����λ��
    if (rect.left != 0 || rect.top != 0) {
        MoveWindow(hq, 1151, 52, memberW, memberH, false);
    }
}

/* ========��ȡָ��λ����Ļ��ɫ */
bool getScreenColor(int x, int y, int r, int g, int b)
{
    HWND hWnd = ::GetDesktopWindow();
    HDC hdc = ::GetDC(hWnd);
    COLORREF pixel = ::GetPixel(hdc, x, y);
    if (pixel != CLR_INVALID) {
        int red = GetRValue(pixel);
        int green = GetGValue(pixel);
        int blue = GetBValue(pixel);
        cout << "��ȡָ��λ����Ļ��ɫ" << red << "--" << green << "--" << blue << endl;
        if (red == r && green == g && blue == b) {
            return 1;
        }
        else {
            DeleteDC(hdc);
            COLORREF pixel = NULL;
            return 0;
        }
    }
    else {
        DeleteDC(hdc);
        COLORREF pixel = NULL;
        return 0;
    }
}

/* ========����ָ����Χ�ڵ����x,y �Լ�ָ�����ֵ ���ƶ���굽��λ�� */
void moveMouseByRandom(int x, int y, int max) {
    int x_pos = random(max) + x;
    int y_pos = random(max) + y;
    SetCursorPos(x_pos, y_pos);
}

/* ========����ָ����Χ�ڵ����x,y �Լ�ָ�����ֵ ���ƶ���굽��λ�� */
void newMoveMouseByRandom(int x, int y, int maxX, int maxY) {
    int x_pos = random(maxX) + x;
    int y_pos = random(maxY) + y;
    SetCursorPos(x_pos, y_pos);
}

/* ִ���������������x,y �Լ�ָ�����ֵ */
void randomClick(int x, int y, int max) {
    moveMouseByRandom(x, y, max);
    int timeRandom = random(50) + 50;
    Sleep(timeRandom);
    aiAutoClick();
}

/* ʶ��Ŀ��λ�õ���ɫ */
bool getAnyLocationColor(int startX, int startY, int colorTop[5], int colorRight[5], int colorBottom[5], int colorLeft[5], int originLocation[2], int max) {
    //top����
    int top_x = colorTop[0] + originLocation[0];
    int top_y = colorTop[1] + originLocation[1];
    int top_r = colorTop[2];
    int top_g = colorTop[3];
    int top_b = colorTop[4];
    bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
    //right����
    int right_x = colorRight[0] + originLocation[0];
    int right_y = colorRight[1] + originLocation[1];
    int right_r = colorRight[2];
    int right_g = colorRight[3];
    int right_b = colorRight[4];
    bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
    //bottom����
    int bottom_x = colorBottom[0] + originLocation[0];
    int bottom_y = colorBottom[1] + originLocation[1];
    int bottom_r = colorBottom[2];
    int bottom_g = colorBottom[3];
    int bottom_b = colorBottom[4];
    bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
    //left����
    int left_x = colorLeft[0] + originLocation[0];
    int left_y = colorLeft[1] + originLocation[1];
    int left_r = colorLeft[2];
    int left_g = colorLeft[3];
    int left_b = colorLeft[4];
    bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
    cout << "ʶ��Ŀ��λ�õ���ɫ����������" << top << right << bottom << left << endl;
    if (top && right && bottom && left) {
        int startButton_x = startX + originLocation[0];
        int startButton_y = startY + originLocation[1];
        moveMouseByRandom(startButton_x, startButton_y, max);
        return 1;
    }
    else {
        return 0;
    }
}

/* =========���ѽ���رհ�ť */
//ʶ����ѽ���رհ�ť
bool getFriendsButton(int initX, int initY) {
    //top����
    int top_x = friendsButtonTop[0] + initX;
    int top_y = friendsButtonTop[1] + initY;
    int top_r = friendsButtonTop[2];
    int top_g = friendsButtonTop[3];
    int top_b = friendsButtonTop[4];
    bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
    //right����
    int right_x = friendsButtonRight[0] + initX;
    int right_y = friendsButtonRight[1] + initY;
    int right_r = friendsButtonRight[2];
    int right_g = friendsButtonRight[3];
    int right_b = friendsButtonRight[4];
    bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
    //bottom����
    int bottom_x = friendsButtonBottom[0] + initX;
    int bottom_y = friendsButtonBottom[1] + initY;
    int bottom_r = friendsButtonBottom[2];
    int bottom_g = friendsButtonBottom[3];
    int bottom_b = friendsButtonBottom[4];
    bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
    //left����
    int left_x = friendsButtonLeft[0] + initX;
    int left_y = friendsButtonLeft[1] + initY;
    int left_r = friendsButtonLeft[2];
    int left_g = friendsButtonLeft[3];
    int left_b = friendsButtonLeft[4];
    bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
    cout << top << right << bottom << left << endl;
    if (top && right && bottom && left) {
        int endButton_x = friendsButtonX + initX;
        int endButton_y = friendsButtonY + initY;
        moveMouseByRandom(endButton_x, endButton_y, 8);
        return 1;
    }
    else {
        return 0;
    }
}

//�رպ��ѽ���رհ�ť
void closeFriendsButton(int x, int y) {
    //ʶ����ѽ���رհ�ť
    cout << "ʶ����ѽ���" << endl;
    if (getFriendsButton(x, y)) {
        cout << "ִ�йرպ��ѽ��涯��" << endl;
        aiAutoClick();
    }
}

/* =========������水ť */
//ʶ��������水ť
bool getChatButton(int initX, int initY) {
    //top����
    int top_x = chatButtonTop[0] + initX;
    int top_y = chatButtonTop[1] + initY;
    int top_r = chatButtonTop[2];
    int top_g = chatButtonTop[3];
    int top_b = chatButtonTop[4];
    bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
    //right����
    int right_x = chatButtonRight[0] + initX;
    int right_y = chatButtonRight[1] + initY;
    int right_r = chatButtonRight[2];
    int right_g = chatButtonRight[3];
    int right_b = chatButtonRight[4];
    bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
    //bottom����
    int bottom_x = chatButtonBottom[0] + initX;
    int bottom_y = chatButtonBottom[1] + initY;
    int bottom_r = chatButtonBottom[2];
    int bottom_g = chatButtonBottom[3];
    int bottom_b = chatButtonBottom[4];
    bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
    //left����
    int left_x = chatButtonLeft[0] + initX;
    int left_y = chatButtonLeft[1] + initY;
    int left_r = chatButtonLeft[2];
    int left_g = chatButtonLeft[3];
    int left_b = chatButtonLeft[4];
    bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
    cout << top << right << bottom << left << endl;
    if (top && right && bottom && left) {
        int endButton_x = chatButtonX + initX;
        int endButton_y = chatButtonY + initY;
        moveMouseByRandom(endButton_x, endButton_y, 8);
        return 1;
    }
    else {
        return 0;
    }
}

//�ر�������水ť
void closeChatButton(int x, int y) {
    //ʶ��������水ť
    cout << "ʶ��������水ť" << endl;
    if (getChatButton(x, y)) {
        cout << "ִ�йر�������水ť����" << endl;
        aiAutoClick();
    }
}

/* =========����Э�� */
/* ʶ������Э����ť */
bool getCooperationButton(int initX, int initY) {
    //top����
    int top_x = cooperationTop[0] + initX;
    int top_y = cooperationTop[1] + initY;
    int top_r = cooperationTop[2];
    int top_g = cooperationTop[3];
    int top_b = cooperationTop[4];
    bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
    //right����
    int right_x = cooperationRight[0] + initX;
    int right_y = cooperationRight[1] + initY;
    int right_r = cooperationRight[2];
    int right_g = cooperationRight[3];
    int right_b = cooperationRight[4];
    bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
    //bottom����
    int bottom_x = cooperationBottom[0] + initX;
    int bottom_y = cooperationBottom[1] + initY;
    int bottom_r = cooperationBottom[2];
    int bottom_g = cooperationBottom[3];
    int bottom_b = cooperationBottom[4];
    bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
    //left����
    int left_x = cooperationLeft[0] + initX;
    int left_y = cooperationLeft[1] + initY;
    int left_r = cooperationLeft[2];
    int left_g = cooperationLeft[3];
    int left_b = cooperationLeft[4];
    bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
    //cout << top << right << bottom << left << endl;
    if (top && right && bottom && left) {
        int endButton_x = cooperationButtonX + initX;
        int endButton_y = cooperationButtonY + initY;
        moveMouseByRandom(endButton_x, endButton_y, 8);
        return 1;
    }
    else {
        return 0;
    }
}

/* �ر�����Э�� */
void closeCooperationButton(int x, int y) {
    //ʶ������Э������
    cout << "//ʶ������Э������" << endl;
    if (getCooperationButton(x, y)) {
        cout << "ִ�йر�����Э�����涯��" << endl;
        aiAutoClick();
    }
}

/*   ִ���������  */
void randomAction(int initX, int initY, int randomTime1, int randomTime2) {
    cout << "ִ���������" << endl;
    int checkClick = random(30);
    if (checkClick > 10) {
        if (checkClick > 20) {
            cout << "���������" << endl;
            closeCooperationButton(initX, initY);
            randomClick(157 + initX, 65 + initY, 20); //���������
            Sleep(random(randomTime1));
            closeCooperationButton(initX, initY);
            randomClick(584 + initX, 356 + initY, 20); //�ر��������
        }
        else {
            cout << "�򿪺��ѽ���" << endl;
            closeCooperationButton(initX, initY);
            randomClick(96 + initX, 67 + initY, 20); //�򿪺��ѽ���
            Sleep(random(randomTime2));
            closeCooperationButton(initX, initY);
            randomClick(1047 + initX, 140 + initY, 25); //�رպ��ѽ���
        }
    }
    else {
        cout << "�޲���" << endl;
        Sleep(random(randomTime2));
    }
}


/* ����Ҫʶ��������İ�ť */
bool getTwoPointButton(int topPoint[5], int bottomPoint[5], int x, int y) {
    //top����
    int top_x = topPoint[0] + leaderScreenInit[0];
    int top_y = topPoint[1] + leaderScreenInit[1];
    int top_r = topPoint[2];
    int top_g = topPoint[3];
    int top_b = topPoint[4];
    bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
    //bottom����
    int bottom_x = bottomPoint[0] + leaderScreenInit[0];
    int bottom_y = bottomPoint[1] + leaderScreenInit[1];
    int bottom_r = bottomPoint[2];
    int bottom_g = bottomPoint[3];
    int bottom_b = bottomPoint[4];
    bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
    cout << "getTwoPointButton----" << top << bottom << endl;
    if (top && bottom) {
        int endButton_x = x + leaderScreenInit[0];
        int endButton_y = y + leaderScreenInit[1];
        moveMouseByRandom(endButton_x, endButton_y, 8);
        return 1;
    }
    else {
        return 0;
    }
}

/* ����Ҫʶ��������İ�ť */
bool getEndButton(int topPoint[5], int bottomPoint[5], int x, int y) {
    //top����
    int top_x = topPoint[0] + x;
    int top_y = topPoint[1] + y;
    int top_r = topPoint[2];
    int top_g = topPoint[3];
    int top_b = topPoint[4];
    bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
    //bottom����
    int bottom_x = bottomPoint[0] + x;
    int bottom_y = bottomPoint[1] + y;
    int bottom_r = bottomPoint[2];
    int bottom_g = bottomPoint[3];
    int bottom_b = bottomPoint[4];
    bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
    cout << "getEndButton----" << top << bottom << endl;
    if (top && bottom) {
        int endButton_x = 0;
        if (random(500) > 170) {
            endButton_x = random(150) + 20;
        }
        else {
            endButton_x = random(130) + 1000;
        }
        int endButton_y = random(170) + 380;
        moveMouseByRandom(endButton_x + x, endButton_y + y, 1);
        return 1;
    }
    else {
        return 0;
    }
}

//getColor
bool getColor(int topPoint[5], int bottomPoint[5]) {
    //top����
    int top_x = topPoint[0];
    int top_y = topPoint[1];
    int top_r = topPoint[2];
    int top_g = topPoint[3];
    int top_b = topPoint[4];
    bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
    //bottom����
    int bottom_x = bottomPoint[0];
    int bottom_y = bottomPoint[1];
    int bottom_r = bottomPoint[2];
    int bottom_g = bottomPoint[3];
    int bottom_b = bottomPoint[4];
    bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
    cout << "getColor----" << top_x << "--"<< top_y << "--" << bottom_x << "--" << bottom_y << "===" << top << "++" << bottom << endl;
    if (top && bottom) {
        return 1;
    }
    else {
        return 0;
    }
}

void clickRandom(int btn[3]) {
    moveMouseByRandom(btn[0], btn[1], btn[2]);
    int timeRandom = random(50) + 50;
    Sleep(timeRandom);
    aiAutoClick();
}

bool getBtn(int btn1[5], int btn2[5], int btn[3]) {
    if (getColor(btn1, btn2)) {
        Sleep(random(500) + 500);
        clickRandom(btn);
        return true;
    }
    return false;
}