
// /* �˳��������� */
// void backToExpInterface() {
//     SetCursorPos(backExpButtonX, backExpButtonY);
//     aiAutoClick();
//     Sleep(2000);
//     SetCursorPos(backExpConfirmButtonX, backExpConfirmButtonY);
//     aiAutoClick();
// }
// /* ��ʼ���˹�����ս */
// void startSingleExpGame() {
//     while (getExpMonster281ButtonColor() || getExpMonster282ButtonColor())
//     {
//         aiAutoClick();
//         gameRunTimes++;
//         Sleep(10000);
//         do
//         {
//             //doubleLeaderEndGame();
//             Sleep(1000);
//         } while (!isEndGame);
//         isEndGame = false;
//         Sleep(3000);
//     }
//     /* �˳��������� */
//     backToExpInterface();
// }

// /* ������˹���̽����ť ���뵥�˹������� */
// void clickSingleExpButton()
// {
//     //ִ�йر�����Э�����涯��
//     //���뵥�˹�������
//     if (getSingleExpStartInterfaceColor()) {
//         aiAutoClick();
//         cout << "���˹�����" << gameRunTimes << "�ֽ��빷������" << endl;
//         Sleep(3000); //�ȴ�3s ���س���
//         startSingleExpGame();
//     }
// }

// /* ѭ���������˹��� */
// void LoopStartSingleExp() {
//     cout << "���������ĳ�ʼ����x" << endl;
//     cin >> leaderScreenInit[0];
//     cout << "���������ĳ�ʼ����y" << endl;
//     cin >> leaderScreenInit[1];
//     do
//     {
//         clickSingleExpButton(); //ִ�п�ʼս�����߼�
//         Sleep(3000); //�ȴ�3s ���س���
//     } while (gameRunTimes <= 500);
// }
