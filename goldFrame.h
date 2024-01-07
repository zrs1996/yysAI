///* 队员--个人突破 */
//bool quitBreakTag = false;
//int loopStatusTag = 1;
//int member_gameRunTimes = 1;
//int member_breakTimes = 1;
//
////关闭异常打开的界面
//void closeErrorInterface()
//{
//    cout << "关闭错误结界" << endl;
//    int btn1[5] = { 1215, 351, 96, 92, 85 };
//    int btn2[5] = { 1195, 436, 35, 35, 40 };
//    int btn[3] = { 1165, 250, 30 };
//
//    int btn_up1[5] = { 1171, 236, 18, 12, 12 };
//    int btn_up2[5] = { 1212, 306, 20, 13, 12 };
//    int btn_up[3] = { 1171, 236, 20 };
//
//    int btn_info1[5] = { 1171, 236, 31, 20, 20 };
//    int btn_info2[5] = { 1212, 306, 34, 22, 20 };
//    int btn_info[3] = { 1171, 236, 20 };
//
//    if (getBtn(btn1, btn2, btn) || getBtn(btn_up1, btn_up2, btn_up) || getBtn(btn_info1, btn_info2, btn_info)) {
//        cout << "已关闭错误结界" << endl;
//    };
//}
//
////连退9次 使结界降级
//void quitForDeLevel() {
//    int initX = 1310;
//    int initY = 180;
//    int x = initX + ( 188 * (member_breakTimes - 1));
//    int y = initY + (78 * (member_breakTimes - 1));
//    int btn[3] = { x, y, 40 };
//    clickRandom(btn);
//    Sleep(random(200) + 200);
//}
//
//bool getCurLevel() {
//    cout << "识别是否 有58级的结界" << endl;
//    int btn1[5] = { 1253, 187, 243, 238, 219 };
//    int btn2[5] = { 1260, 188, 220, 214, 196 };
//    if (getColor(btn1, btn2))
//    {
//        quitBreakTag = true;
//        cout << "有58级的结界 开始进入 连退9次环节" << endl;
//        quitForDeLevel();
//        member_breakTimes = 10;
//        return false;
//    }
//    return true;
//}
//void LoopMemberPersonBreakThrough()
//{
//    
//    /* 循环开始个人突破 */
//    while (loopStatusTag < 500)
//    {
//        cout << "循环开始个人突破 第:" << member_gameRunTimes << "轮" << endl;
//        //member_breakTimes = 6;
//        while (member_breakTimes <= 9)
//        {
//            cout << "个人突破 第:" << member_breakTimes << "次" << endl;
//
//            /* 关闭异常界面 */
//            closeErrorInterface();
//
//            /* 识别是否 有58级的结界 */
//            if (getCurLevel()) {
//                /* 开始挑战 */
//                attackBreakThrough_member();
//                /* 结束挑战 */
//                endBreakThrough_member();
//                /* 点击福袋 */
//                endLuckyBag_member();
//                /* 识别是否没有突破票了 */
//                //noTimes_member();
//                Sleep(2000);
//            }
//        }
//
//        Sleep(5000);
//        /* 结束挑战 */
//        //endBreakThrough_member();
//        Sleep(5000);
//
//        /* 点击福袋 */
//        //endLuckyBag_member();
//
//        quitBreakTag = false;
//        //refreshBreakThrough_member();
//        member_breakTimes = 1;
//        member_gameRunTimes++;
//    }
//}
