#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <windows.h>
#pragma comment (lib, "user32.lib")
/* ========鼠标点击事件 */
void aiAutoClick()
{
    int timeRandom = random(50) + 50;
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //左键按下
    Sleep(timeRandom);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); //左键抬起
}

/* ========拖动鼠标 */
void dragMouse(int toX, int toY)
{
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //左键按下
    Sleep(50);
    //鼠标移动，水平方向0位移，垂直方向drag_y距离
    mouse_event(MOUSEEVENTF_MOVE, toX, toY, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); //左键抬起
}

/* 获取句柄窗口*/
void getWindowScreen() {

    HWND hq = FindWindow("Win32Window", "阴阳师-网易游戏");
    //得到窗口大小
    RECT rect;
    GetWindowRect(hq, &rect);
    cout << FindWindow("Win32Window", "阴阳师-网易游戏") << endl;
    //移动窗口位置
    if (rect.left != 0 || rect.top != 0) {
        MoveWindow(hq, 0, 0, screenWidth, screenHeight, false);
    }
}

/* 获取句柄窗口*/
void getWindowScreenMember() {

    HWND hq = FindWindow("Win32Window", "阴阳师-网易游戏");
    //得到窗口大小
    RECT rect;
    GetWindowRect(hq, &rect);
    cout << FindWindow("Win32Window", "阴阳师-网易游戏") << endl;
    //移动窗口位置
    if (rect.left != 0 || rect.top != 0) {
        MoveWindow(hq, 1151, 52, memberW, memberH, false);
    }
}

/* ========获取指定位置屏幕颜色 */
bool getScreenColor(int x, int y, int r, int g, int b)
{
    HWND hWnd = ::GetDesktopWindow();
    HDC hdc = ::GetDC(hWnd);
    COLORREF pixel = ::GetPixel(hdc, x, y);
    if (pixel != CLR_INVALID) {
        int red = GetRValue(pixel);
        int green = GetGValue(pixel);
        int blue = GetBValue(pixel);
        //cout << "获取指定位置屏幕颜色" << red << "--" << green << "--" << blue << endl;
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

/* ========生成指定范围内的随机x,y 以及指定最大值 并移动鼠标到此位置 */
void moveMouseByRandom(int x, int y, int max) {
    int x_pos = random(max) + x;
    int y_pos = random(max) + y;
    SetCursorPos(x_pos, y_pos);
}


/* 执行随机点击动作随机x,y 以及指定最大值 */
void randomClick(int x, int y, int max) {
    moveMouseByRandom(x, y, max);
    int timeRandom = random(50) + 50;
    Sleep(timeRandom);
    aiAutoClick();
}

//getColor
bool getColor(int topPoint[5], int bottomPoint[5]) {
    //top坐标
    int top_x = topPoint[0];
    int top_y = topPoint[1];
    int top_r = topPoint[2];
    int top_g = topPoint[3];
    int top_b = topPoint[4];
    bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
    //bottom坐标
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

void closeErrorInterface() {
    int errorInterfaceBtn1[5] = { 1467, 162, 179, 146, 118 };
    int errorInterfaceBtn2[5] = { 1466, 177, 254, 183, 50 };
    int errorInterfaceBtn[3] = { 1600, 149, 12 };
    getBtn(errorInterfaceBtn1, errorInterfaceBtn2, errorInterfaceBtn);

    int errorTeamInterfaceBtn1[5] = { 705, 139, 232, 212, 207 }; //这个是像素1 { r, g, b, x, y }
    int errorTeamInterfaceBtn2[5] = { 720, 152, 232, 212, 207 }; //这个是像素2 { r, g, b, x, y }
    int errorTeamInterfaceBtn[3] = { 699, 135, 12 }; // 这个是点击的按钮坐标  x,y,random 实际点击区域为(x+random,y+random)
    getBtn(errorTeamInterfaceBtn1, errorTeamInterfaceBtn2, errorTeamInterfaceBtn); //两个像素点加一个点击按钮坐标 组成 一次 模拟人工点击
}