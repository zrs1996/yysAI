///* ��Ա--����ͻ�� */
//bool quitBreakTag = false;
//int loopStatusTag = 1;
//int member_gameRunTimes = 1;
//int member_breakTimes = 1;
//
////�ر��쳣�򿪵Ľ���
//void closeErrorInterface()
//{
//    cout << "�رմ�����" << endl;
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
//        cout << "�ѹرմ�����" << endl;
//    };
//}
//
////����9�� ʹ��罵��
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
//    cout << "ʶ���Ƿ� ��58���Ľ��" << endl;
//    int btn1[5] = { 1253, 187, 243, 238, 219 };
//    int btn2[5] = { 1260, 188, 220, 214, 196 };
//    if (getColor(btn1, btn2))
//    {
//        quitBreakTag = true;
//        cout << "��58���Ľ�� ��ʼ���� ����9�λ���" << endl;
//        quitForDeLevel();
//        member_breakTimes = 10;
//        return false;
//    }
//    return true;
//}
//void LoopMemberPersonBreakThrough()
//{
//    
//    /* ѭ����ʼ����ͻ�� */
//    while (loopStatusTag < 500)
//    {
//        cout << "ѭ����ʼ����ͻ�� ��:" << member_gameRunTimes << "��" << endl;
//        //member_breakTimes = 6;
//        while (member_breakTimes <= 9)
//        {
//            cout << "����ͻ�� ��:" << member_breakTimes << "��" << endl;
//
//            /* �ر��쳣���� */
//            closeErrorInterface();
//
//            /* ʶ���Ƿ� ��58���Ľ�� */
//            if (getCurLevel()) {
//                /* ��ʼ��ս */
//                attackBreakThrough_member();
//                /* ������ս */
//                endBreakThrough_member();
//                /* ������� */
//                endLuckyBag_member();
//                /* ʶ���Ƿ�û��ͻ��Ʊ�� */
//                //noTimes_member();
//                Sleep(2000);
//            }
//        }
//
//        Sleep(5000);
//        /* ������ս */
//        //endBreakThrough_member();
//        Sleep(5000);
//
//        /* ������� */
//        //endLuckyBag_member();
//
//        quitBreakTag = false;
//        //refreshBreakThrough_member();
//        member_breakTimes = 1;
//        member_gameRunTimes++;
//    }
//}
