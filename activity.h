//#include "breakThrough.h"

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
        closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
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
//        closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
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