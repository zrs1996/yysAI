#pragma once
/* 肝金框 */

int active = 1;

bool couldStart = true;

int closeConnectBtn1[5] = { 702, 136, 232, 212, 207 };
int closeConnectBtn2[5] = { 720, 152, 232, 212, 207 };
int closeConnectBtn[5] = { 702, 136, 10 };


void getIsNeedQuit()
{
    cout << "识别当前是否是57级结界" << endl;
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
        cout << "开始连退9次环节" << endl;
        return;
    }
     quitBreakTag = false;
   
    /*if (getColor(btn1, btn2) || getColor(done_btn1, done_btn2))
    {
    }*/
}

void quitAttack() {
    Sleep(4000);
    cout << "点击返回按钮" << endl;
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
    cout << "退出结界" << endl;
    int btn21[5] = { 629, 397, 243, 178, 94 };
    int btn22[5] = { 716, 424, 243, 178, 94 };
    int btn23[3] = { 629, 397, 15 };
    getBtn(btn21, btn22, btn23);
    Sleep(2000);
}

void endTeamLuckyBag()
{
    cout << "识别福袋" << endl;
    int btn1[5] = { 683, 416, 37, 33, 33 };
    int btn2[5] = { 590, 509, 45, 24, 20 };
    int btn[3] = { 511, 411, 30 };
    getBtn(btn1, btn2, btn);
}

void noBreakTimes()
{
    cout << "识别是否没有突破票了" << endl;
    int btn1[5] = {};
    int btn2[5] = {};
    if (getColor(btn1, btn2)) {
        couldStart = false;
    }
}

bool getNowInterfaceIsBreak() {
    cout << "识别当前是否处于 结界突破界面" << endl;
    int btn1[5] = { 542, 112, 248, 243, 224 };
    int btn2[5] = { 1094, 150, 232, 212, 207 };
    return getColor(btn1, btn2);
}


void attackBreakThrough()
{
    cout << "开始战斗" << endl;


    // 当前是第几个结界 active

    // 未击破时 计算active坐标
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
    cout << "点击头像卡片" << endl;
    // active 是否 已击破
    if (!getBtn(startBtn1_cur, startBtn2_cur, startBtn_cur)) {
        // 已击破  active++
        cout << "当前结界已击破" << endl;
        active++;
        return;
    }
    Sleep(1000);
    cout << "点击进攻按钮" << endl;
    if (getBtn(startBtn1_ready_cur, startBtn2_ready_cur, startBtn_ready_cur)) {
        cout << "进入战斗界面" << endl;
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

    ///* 结束挑战 */
    endBreakThrough();

    Sleep(3000);

    ///* 结束挑战 */
    endBreakThrough();

    Sleep(2000);


    cout << "刷新结界" << endl;
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
    /* 循环开始个人突破 */
    while (startBreakThroughTimes < 500)
    {
        cout << "循环开始个人突破 第:" << team_gameRunTimes << "轮" << endl;
        while (active <= 9)
        {
            cout << "个人突破 第:" << active << "次" << endl;

            /* 关闭错误结界 */
            //cout << "关闭错误结界 closeErrorBreak----" << endl;
            //closeBreakThroughInterface();

            if (getNowInterfaceIsBreak()) {
                cout << "当前处于 结界突破界面 开始挑战" << endl;

                /* 识别是否没有突破票了 */
                //noBreakTimes();

                /* 识别是否 有60级的结界 */
                getIsNeedQuit();

                /* 开始挑战 */
                attackBreakThrough();
            }

           
            ///* 结束挑战 */
            endBreakThrough();

            ///* 点击福袋 */
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