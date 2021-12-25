
// /* 退出狗粮副本 */
// void backToExpInterface() {
//     SetCursorPos(backExpButtonX, backExpButtonY);
//     aiAutoClick();
//     Sleep(2000);
//     SetCursorPos(backExpConfirmButtonX, backExpConfirmButtonY);
//     aiAutoClick();
// }
// /* 开始单人狗粮挑战 */
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
//     /* 退出狗粮副本 */
//     backToExpInterface();
// }

// /* 点击单人狗粮探索按钮 进入单人狗粮场景 */
// void clickSingleExpButton()
// {
//     //执行关闭悬赏协作界面动作
//     //进入单人狗粮场景
//     if (getSingleExpStartInterfaceColor()) {
//         aiAutoClick();
//         cout << "单人狗粮第" << gameRunTimes << "轮进入狗粮副本" << endl;
//         Sleep(3000); //等待3s 加载场景
//         startSingleExpGame();
//     }
// }

// /* 循环开启单人狗粮 */
// void LoopStartSingleExp() {
//     cout << "请输入您的初始坐标x" << endl;
//     cin >> leaderScreenInit[0];
//     cout << "请输入您的初始坐标y" << endl;
//     cin >> leaderScreenInit[1];
//     do
//     {
//         clickSingleExpButton(); //执行开始战斗的逻辑
//         Sleep(3000); //等待3s 加载场景
//     } while (gameRunTimes <= 500);
// }
