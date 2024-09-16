int _gameRunTimes = 0;

/* 超鬼王搜索*/
void search_CGW()
{
    if (getColor(CGW_search1, CGW_search2)) {
        Sleep(1000);
        randomClick(CGW_search_btn[0], CGW_search_btn[1], CGW_search_btn[2]);
        _gameRunTimes++;
    }
}

/* 点击开始按钮 进入战斗 */
void start_CGW()
{
    //开始战斗
    if (getColor(CGW_start1, CGW_start2)) {
        Sleep(1000);
        randomClick(CGW_start_btn[0], CGW_start_btn[1], CGW_start_btn[2]);
    }
}

/* 准备按钮*/
void ready_CGW()
{
    if (getColor(CGW_ready1, CGW_ready2)) {
        Sleep(1000);
        randomClick(CGW_ready_btn[0], CGW_ready_btn[1], CGW_ready_btn[2]);
    }
}

/* 结算界面*/
void end_CGW()
{
    if (getColor(CGW_end1, CGW_end2)) {
        Sleep(1000);
        randomClick(CGW_end_btn[0], CGW_end_btn[1], CGW_end_btn[2]);
    }
}

/* 喝茶 */
void clear_CGW() {
    if (getColor(CGW_clear1, CGW_clear1)) {
        Sleep(1000);
        randomClick(CGW_clear_btn[0], CGW_clear_btn[1], CGW_clear_btn[2]);
    }
}

void check_five_CGW() {
    if (getColor(CGW_six1, CGW_six2)) {
        cout << "是六星鬼王" << endl;
        //声音
    //int do = 523;
    //int re = 578;
    //int mi = 659;
    //int fa = 698;
    //int so = 784;
    //int la = 880;
    //int si = 988;
        Beep(523, 500);
        Beep(578, 500);
        Beep(659, 500);
    }
    
}

void LoopStartCGW() {
    do 
    {
        Sleep(random(500) + 1500);
        cout << "超鬼王搜索" << endl;
        search_CGW();
        cout << "判断是否是五星鬼王" << endl;
        check_five_CGW();
        cout << "开始按钮" << endl;
        start_CGW();
        cout << "准备按钮" << endl;
        ready_CGW();
        cout << "结算界面" << endl;
        end_CGW();
        cout << "喝茶" << endl;
        clear_CGW();
    } while (gameRunTimes <= 50);
}
//int time_start = 0;
//int timer = 0;
//void chcke_member_break() {
//    int gameRunTimes_member_break = 0;
//    int time_end = GetTickCount();
//    while (gameRunTimes_member_break <= 6 && (timer > 0 && time_end - time_start < 1200000))
//    {
//        timer = 0;
//        openBreakThroughInterface_member(); //打开结界界面
//
//        openCommonBreakThroughInterface_member(); //打开寮突界面
//
//        clickBreakTeam_member(); //点击寮突
//
//        clickBreak_member();//点击结界
//
//        startAttack_memebr(); //开始寮突战斗
//
//        end_break_member(); //结束寮突战斗
//    }
//    if (gameRunTimes_member_break > 6) {
//        time_start = GetTickCount(); //从操作系统启动经过的毫秒数
//        timer = 1;
//    }
//}

//void LoopStartCGW2() {
//    do
//    {
//        Sleep(random(500) + 1500);
//        cout << "超鬼王搜索" << endl;
//        search_CGW();
//        cout << "开始按钮" << endl;
//        start_CGW();
//        cout << "准备按钮" << endl;
//        ready_CGW();
//        cout << "结算界面" << endl;
//        end_CGW();
//        cout << "喝茶" << endl;
//        clear_CGW();
//
//        chcke_member_break();
//    } while (gameRunTimes <= 999);
//}


/* 祈福之行 单刷 */
void loopQiFu() {
    while (gameRunTimes < 90)
    {
        Sleep(1000);
        int btn1[5] = { 473, 187, 39, 23, 23};
        int btn2[5] = { 525, 215, 40, 25, 25 };
        int btn[3] = { 473, 187, 10 };
        if (getBtn(btn1, btn2, btn)) {
            Sleep(60000);
            gameRunTimes++;
        }

  /*      int failBtn1[5] = {};
        int failBtn2[5] = {};
        int failBtn[3] = {};
        getBtn(failBtn1, failBtn2, failBtn);*/
    }
}

/* 单刷活动 */
void LoopPve() {
    while (gameRunTimes < 800)
    {
        Sleep(500 + random(500));
        int btn1[5] = { 1026,558,94,131,124 };
        int btn2[5] = { 1105,632,51,76,71 };
        int btn[3] = { 1026,558,65 };
        int wishSelectBtn[3] = { 36, 173, 150 };
        if (getBtn(btn1, btn2, btn)) {
            cout << "结算奖励界面" << endl;
            gameRunTimes++;
            Sleep(17000 + random(5000));
            Sleep(500 + random(500));
            clickRandom(wishSelectBtn);
            Sleep(500 + random(500));
            clickRandom(wishSelectBtn);
        }
        else {
            Sleep(500 + random(500));
            clickRandom(wishSelectBtn);
        }
        Sleep(2000 + random(500));
        closeErrorInterface();
    }
}

void LoopYuanLaiGuang() {
    while (gameRunTimes < 999)
    {
        Sleep(500 + random(500));
        int btn1[5] = { 1026,553,80,52,36};
        int btn2[5] = { 1105,632,55,32,21 };
        int btn[3] = { 1026,553,70 };
        if (getBtn(btn1, btn2, btn)) {
            Sleep(18000 + random(5000));
            gameRunTimes++;
        }
        int btn21[5] = { 176,633,247,227,31 };
        int btn22[5] = { 163,623,144,179,221 };
        int btn23[3] = { 25, 184, 90 };
        getBtn(btn21, btn22, btn23);
        closeErrorInterface();
    }
}

void LoopYuanLaiGuangSkill() {
    while (gameRunTimes < 50)
    {
        Sleep(1000);
        int btn1[5] = { 1025,557,82,54,39 };
        int btn2[5] = { 1112,623,56,33,22 };
        int btn[3] = { 1025,557,70 };
        if (getBtn(btn1, btn2, btn)) {
            Sleep(90000 + random(20000));
            gameRunTimes++;
           

        }


        int btn21[5] = { 176,633,247,227,31 };
        int btn22[5] = { 163,623,144,179,221 };
        int btn23[3] = { 25, 184, 90 };
        if (getBtn(btn21, btn22, btn23)) {
            Sleep(3000);
        }
        else {
            int btn21[5] = { 748,163,246,240,210 };
            int btn22[5] = { 839,143,246,241,211 };
            int btn23[3] = { 25, 184, 90 };
            if (getBtn(btn21, btn22, btn23)) {
                Sleep(3000);
            }
        }

        // 选择祝福
        int confirmWish1[5] = { 532,605,254,226,147 };
        int confirmWish12[5] = { 532,606,255,227,152 };
        int confirmWish13[3] = { 532,605, 20 };
        if (getBtn(confirmWish1, confirmWish12, confirmWish13)) {
            int wishSelectBtn[3] = { 90,479,80 };
            clickRandom(wishSelectBtn);
        }

        int failBtn1[5] = { 367,464,247,247,244 };
        int failBtn2[5] = { 609,465,206,62,60 };
        int failBtn[3] = { 38,125,100 };
        getBtn(failBtn1, failBtn2, failBtn);

        closeErrorInterface();
    }
}


void LoopActivity() {
    LoopYuanLaiGuang();
}