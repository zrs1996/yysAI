#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <windows.h>
#pragma comment (lib, "user32.lib")
using namespace std;

#define RATIO 1.75
#define random(x) (rand()%x)

int gameRunTimes = 0;
int screenWidth = 1154; // 1154， 687  1138 679
int screenHeight = 687;

int memberW = 740;
int memberH = 455;
int noTarget = 0;
bool isEndGame = false; //是否结束了一场战斗 默认为false

//组队御魂模式下队长的挑战按钮
int leaderScreenInit[2] = { 9, 1 }; // 队长的初始化起点
int memberScreenInit[2] = { 9, 708 }; // 队员的初始化起点
int groupMemberScreen[2] = { 1160, 53 }; //组队御魂队长的初始化坐标
int leaderStartTop[5] = { 1082, 561, 140, 124, 86 };
int leaderStartRight[5] = { 1125, 607, 175, 120, 53 };
int leaderStartBottom[5] = { 1079, 659, 254, 112, 46 };
int leaderStartLeft[5] = { 1039, 607, 176, 122, 57 };
int leaderStartGameButtonX = 1078;
int leaderStartGameButtonY = 600;
//组队御魂模式下第一次出现的结算福袋按钮
int leaderEndTopFirst[5] = { 53, 96, 56, 38, 29 };
int leaderEndRightFirst[5] = { 80, 93, 158, 125, 85 };
int leaderEndBottomFirst[5] = { 68, 77, 183, 129, 59 };
int leaderEndLeftFirst[5] = { 70, 101, 165, 124, 82 };
int leaderLuckyBagButtonXFirst = 97; // 565;
int leaderLuckyBagButtonYFirst = 237; // 654;
//组队御魂模式下第二次出现的结算福袋按钮
int leaderEndTop[5] = { 57, 91, 231, 228, 226 };
int leaderEndRight[5] = { 84, 93, 156, 76, 101 };
int leaderEndBottom[5] = { 53, 622, 50, 42, 49 };//{ 53, 622, 56, 39, 29 };
int leaderEndLeft[5] = { 79, 622, 52, 42, 49 }; //170, 132, 88

//第二次出现的结算福袋按钮
//int secondEndTop[5] = { 160, 630, 235, 202, 19 }; // 166, 630, 247, 230, 44
//int secondEndRight[5] = { 280, 630, 247, 231, 28 }; // 301, 631, 247, 228, 39
int secondEndTop[5] = { 174, 626, 247, 229, 37 };
int secondEndRight[5] = { 309, 625, 247, 229, 41 };
int secondEndButtonX = 97;
int secondEndButtonY = 237;

int luckyBagEndTop1[5] = { 174, 626, 247, 229, 37 };
int luckyBagEndTop2[5] = { 309, 625, 247, 229, 41 };
int luckyBagEndButton[3] = { 31, 380, 100 };

//int newSecondEndTop[5] = { 166, 630, 247, 230, 44 };
//int newSecondEndRight[5] = { 301, 631, 247, 229, 39 };

int newSecondEndTop[5] = { 166, 630, 103, 105, 19 };
int newSecondEndRight[5] = { 301, 631, 135, 121, 96 };


//int secondLuckyBagEndTop[5] = { 497, 593, 113, 43, 12 };
//int secondLuckyBagEndRight[5] = { 643, 591, 55, 2, 4 };
int secondLuckyBagEndTop[5] = { 497, 593, 56, 79, 87 };
int secondLuckyBagEndRight[5] = { 643, 591, 64, 83, 91 };

int maskTop[5] = { 1030, 260, 30, 21, 14 };
int maskRight[5] = { 1000, 529, 30, 21, 14 };
int maskButtonX = 97;
int maskButtonY = 237;

////组队御魂模式下第一次出现的结算福袋按钮
//int leaderEndTopFirst[5] = { 415, 112, 100, 20, 13 };
//int leaderEndRightFirst[5] = { 474, 149, 131, 26, 17 };
//int leaderEndBottomFirst[5] = { 727, 155, 205, 180, 128 };
//int leaderEndLeftFirst[5] = { 887, 149, 182, 156, 104 };
//int leaderLuckyBagButtonXFirst = 97; // 565;
//int leaderLuckyBagButtonYFirst = 237; // 654;
////组队御魂模式下第二次出现的结算福袋按钮
//int leaderEndTop[5] = { 426, 578, 58, 138, 205 };
//int leaderEndRight[5] = { 438, 591, 130, 170, 218 };
//int leaderEndBottom[5] = { 492, 593, 113, 43, 12 };
//int leaderEndLeft[5] = { 649, 589, 55, 2, 4 };
//int leaderLuckyBagButtonX = 97;
//int leaderLuckyBagButtonY = 237;


// 合成结界卡界面  继续添加按钮
int synthesisTop[5] = { 940, 582, 201, 169, 90 };
int synthesisRight[5] = { 950, 571, 75, 37, 13 };




//协作关闭按钮坐标
int cooperationTop[5] = { 686, 140, 232, 212, 207 };
int cooperationRight[5] = { 704, 140, 232, 212, 207 };
int cooperationBottom[5] = { 691, 155, 232, 212, 207 };
int cooperationLeft[5] = { 695, 151, 227, 159, 162 };
int cooperationButtonX = 695;
int cooperationButtonY = 149;

//单人御魂挑战按钮
int singleStartTop[5] = { 1027, 543, 137, 103, 80 };
int singleStartRight[5] = { 1088, 604, 103, 71, 34 };
int singleStartBottom[5] = { 982, 603, 216, 204, 181 };
int singleStartLeft[5] = { 1025, 643, 224, 214, 191 };
int singleStartButtonX = 1028;
int singleStartButtonY = 597;

//狗粮经验界面
int expInterfaceTop[5] = { 248, 150, 73, 54, 37 };
int expInterfaceRight[5] = { 984, 294, 155,  88, 29 };
int expInterfaceBottom[5] = { 552, 526, 129, 98, 59 };
int expInterfaceLeft[5] = { 856, 518, 176, 131, 74 };
//开始探索按钮
int expInterfaceButtonX = 839;
int expInterfaceButtonY = 515;
//困28小怪1 傀儡师
int hardMonster28FirstTop[5] = { 823, 280, 67, 78, 131 };
int hardMonster28FirstRight[5] = { 850, 283, 221, 223, 249 };
int hardMonster28FirstBottom[5] = { 855, 304, 68, 57, 67 };
int hardMonster28FirstLeft[5] = { 827, 302, 163, 163, 199 };
int hardMonster28FirstButtonX = 839;
int hardMonster28FirstButtonY = 291;
//困28小怪2  傀儡师
int hardMonster28SecondTop[5] = { 1034, 291, 44, 51, 99 };
int hardMonster28SecondRight[5] = { 1060, 287, 222, 221, 239 };
int hardMonster28SecondBottom[5] = { 1062, 308, 49, 56, 104 };
int hardMonster28SecondLeft[5] = { 1031, 309, 209, 211, 243 };
int hardMonster28SecondButtonX = 1048;
int hardMonster28SecondButtonY = 299;
//退出按钮
int backExpButtonX = 42;
int backExpButtonY = 94;
//退出确认按钮
int backExpConfirmButtonX = 687;
int backExpConfirmButtonY = 397;


//御灵开始按钮5, 6
int spritStartButtonTop[5] = { 1018, 539, 125, 92, 70 };
int spritStartButtonRight[5] = { 1060, 568, 87, 57, 41 };
int spritStartButtonBottom[5] = { 1046, 647, 56, 32, 21 };
int spritStartButtonLeft[5] = { 961, 606, 121, 80, 36 };
int spritStartButtonX = 1017;
int spritStartButtonY = 602;


//好友界面关闭按钮 20
int friendsButtonTop[5] = { 1029, 121, 89, 44, 42 };
int friendsButtonRight[5] = { 1056, 132, 232, 211, 207 };
int friendsButtonBottom[5] = { 1064, 162, 72, 31, 40 };
int friendsButtonLeft[5] = { 1048, 141, 231, 206, 201 };
int friendsButtonX = 1048;
int friendsButtonY = 141;

//聊天界面关闭按钮15
int chatButtonTop[5] = { 577, 354, 215, 209, 184 };
int chatButtonRight[5] = { 578, 393, 73, 54, 35 };
int chatButtonBottom[5] = { 597, 395, 91, 69, 47 };
int chatButtonLeft[5] = { 560, 356, 101, 82, 66 };
int chatButtonX = 583;
int chatButtonY = 354;

int startBreakThroughTimes = 0;
//打开结界突破界面的按钮
int openBreakThroughButtonX = 245; //20
int openBreakThroughButtonY = 600; //20
//int openBreakThroughButtonTop[5] = { 269, 616, 166, 101, 26 };
//int openBreakThroughButtonBottom[5] = { 394, 613, 202, 146, 71 };
int openBreakThroughButtonTop[5] = { 269, 616, 162, 97, 23 };
int openBreakThroughButtonBottom[5] = { 394, 613, 138, 61, 18 };

//打开寮突界面的按钮
int openCommonBreakThroughButtonX = 1071; //1080-1120 40
int openCommonBreakThroughButtonY = 359; //360-440 80
//int breakThroughInterfaceButtonRight[5] = { 1074, 365, 99, 63, 42 };
//int breakThroughInterfaceButtonBottom[5] = { 1096, 425, 167, 156, 140 };
int breakThroughInterfaceButtonRight[5] = { 1074, 365, 102, 67, 43 };
int breakThroughInterfaceButtonBottom[5] = { 1096, 425, 113, 86, 65 };

//寮突界面第一次点击寮突
//int firstBreakThroughButtonRight[5] = { 379, 173, 214, 199, 183 };
//int firstBreakThroughButtonBottom[5] = { 644, 265, 162, 143, 136 };
int firstBreakThroughButtonRight[5] = { 379, 173, 214, 200, 184 };
int firstBreakThroughButtonBottom[5] = { 644, 265, 179, 168, 159 };
int firstBreakThroughButtonX = 470; //180
int firstBreakThroughButtonY = 170; //80

int firstBreakBtn1[5] = { 552, 114, 248, 243, 224 };
int firstBreakBtn2[5] = { 633, 118, 99, 76, 59 };
int firstBreakBtn[3] = { 520, 170, 20 };

//寮突界面第二次点击寮突
int secondBreakThroughButtonRight[5] = { 664, 164, 172, 149, 134 };
int secondBreakThroughButtonBottom[5] = { 653, 266, 162, 143, 136 };
int secondBreakThroughButtonX = 540; //100
int secondBreakThroughButtonY = 355; //50

int startBreakBtn1[5] = { 550, 358, 243, 178, 94 };
int startBreakBtn2[5] = { 635, 384, 243, 178, 94 };
int startBreakBtn[3] = { 560, 355, 30 };

int failedButtonX = 200; //200-900
int failedButtonY = 100; //100-340
int failedButtonTop[5] = { 411, 164, 75, 67, 82 };
int failedButtonBottom[5] = { 792, 511, 65, 62, 42 };

int closeConnect1[5] = { 692, 136, 190, 62, 97 };
int closeConnect2[5] = { 716, 154, 230, 203, 201};
int closeConnectbtn[3] = { 692, 136, 10};

int closeErrorBreakBtn1[5] = { 396, 161, 89, 83, 76 };
int closeErrorBreakBtn2[5] = { 397, 164, 89, 84, 77 };
int closeErrorBreakBtn[3] = { 97, 48, 20 };

//关闭寮突界面的按钮
int closeBreakThroughButtonX = 1054; //45
int closeBreakThroughButtonY = 121; //50
//int closeBreakThroughButtonTop[5] = { 1058, 139, 130, 43, 54 };
//int closeBreakThroughButtonBottom[5] = { 1082, 166, 232, 215, 208 };
int closeBreakThroughButtonTop[5] = { 1058, 139, 132, 53, 65 };
int closeBreakThroughButtonBottom[5] = { 1082, 166, 99, 45, 53 };

int closeCoolDown1[5] = { 550, 358, 176, 169, 161 };
int closeCoolDown2[5] = { 640, 385, 176, 169, 161 };
int closeCoolDown[3] = { 110, 67, 30 };

//选择寮突道馆
int selectYYLButton1[5] = { 508, 552, 152, 61, 46 };
int selectYYLButton2[5] = { 639, 586, 243, 178, 94 };
int selectYYLButton[3] = { 546, 554, 20 };

int clickSelectYYLBtn1[5] = { 962, 68, 126, 94, 71};
int clickSelectYYLBtn2[5] = { 1115, 114, 126, 93, 69};
int clickSelectYYLBtn[3] = { 1005, 137, 30 };
int startYYLBtn[3] = { 776, 485, 30 };


//队员寮突
int gameRunTimes_member_break = 0;
//队员 打开寮突界面
int openBreakThrough1[5] = { 1319, 455, 227, 213, 199 };
int openBreakThrough2[5] = { 1346, 475, 142, 115, 94 };
int openBreakThrough_button[3] = { 1327, 452, 20 };
//队员 点击寮突
int click_break_team1[5] = { 1845, 298, 95, 61, 39 };
int click_break_team2[5] = { 1865, 342, 86, 54, 35 };
int click_break_team_btn[3] = { 1843, 308, 20 };
//队员 点击结界
int click_break1[5] = { 1358, 192, 170, 151, 135 };
int click_break2[5] = { 1470, 145, 93, 69, 50 };
int click_break_btn[3] = { 1466, 183, 40 };
//队员 点击进攻
int start_attck1[5] = { 1501, 293, 237, 170, 91 };
int start_attck2[5] = { 1558, 311, 243, 178, 94};
int start_attck_btn[3] = { 1510, 290, 20 };
//队员 结算
int end_break_member1[5] = { 1526, 391, 45, 24, 20 };
int end_break_member2[5] = { 1565, 438, 52, 2, 4 };
int end_break_member_btn[3] = { 1166, 136, 90 };
//队员 关闭寮突界面
int close_break_btn[3] = { 1832, 157, 15 };

// 个人结界突破 坐标
//1. 当前一轮结界突破 初始坐标
// 135, 170, 208, 192, 176
// 409, 170, 202, 185, 168
// 132, 270, 169, 144, 130
// 404, 266, 211, 195, 180
// 可点击范围 x 135 - 404 269   y 170 - 266 96
int personbreakTop[5] = { 221, 180, 218, 205, 189 };
int personbreakBottom[5] = { 222, 181, 218, 205, 189 };
int personbreakBtn[3] = { 220, 170, 96 };
int personintobreakBtn[3] = { 320, 360, 30 };

int personintobreakration[2] = { 295, 120 };
int personbreakratiox = 295;
int personbreakratioy = 120;

//2.挑战失败的结界
// 364, 175, 194, 121, 13
// 405, 188, 61, 11, 7
int failBreakTop[5] = { 364, 175, 194, 121, 13  };
int failBreakBot[5] = { 405, 188, 61, 11, 7  };

//3.已挑战的结界
// 141, 178, 109, 102, 94
// 363, 202, 207, 191, 172
int alreadyBreakTop[5] = { 141, 178, 109, 102, 94 };
int alreadyBreakBot[5] = { 363, 202, 207, 191, 172 };

//当前处于点击了结界 但还未进入游戏中
int clickOneBreakTop[5] = { 137, 111, 26, 26, 28 };
int clickOneBreakBot[5] = { 68, 243, 85, 75, 65 };
int clickOneBreakBtn[3] = { 78, 94, 20 };
//当前处于未点击结界
int __alreadyBreakTop[5] = { 137, 111, 60, 58, 64 };
int __alreadyBreakBot[5] = { 68, 243, 208, 188, 164 };


//组队御魂 队长 结算界面
int groupEndBtnL[5] = { 1267, 468, 244, 220, 33 }; // 244, 220, 33   245, 224, 32
int groupEndBtnR[5] = { 1352, 467, 247, 231, 52 }; // 247, 231, 52 249, 237, 47
int groupEndBtnL2[5] = { 1267, 468, 245, 224, 32 };
int groupEndBtnR2[5] = { 1352, 467, 249, 237, 47 };

//队员窗口位置及大小
// 1160, 53     740 455


//百鬼夜行
//百鬼夜行入口
int throwBeansEntryBtn1[5] = { 1037, 572, 66, 51, 36 };
int throwBeansEntryBtn2[5] = { 964, 557, 95, 52, 21 };
int throwBeansEntry[3] = { 943, 546, 55 };

//选择鬼王
int firstGhostKing[3] = { 255, 537, 15 };
int twinGhostKing[3] = { 543, 500, 15 };
int triGhostKing[3] = { 879, 496, 15 };

//开始百鬼夜行
int startThrowBeans1[5] = { 1000, 537, 240, 214, 170 };
int startThrowBeans2[5] = { 1064, 585, 96, 65, 54  };
int startThrowBeansBtn[3] = { 989, 541, 90 };

//每次扔出的豆子数量
int beansBtn1[5] = { 344, 618, 248, 202, 120 };
int beansBtn3[5] = { 344, 618, 254, 207, 123 };
int beansBtn2[5] = { 355, 621, 55, 36, 32 };
int beansNun[4] = { 343, 610, 30, 171 };

//撒豆子
int throwBeans[4] = { 600, 260, 300 };

//退出百鬼夜行
int endthrowBeans1[5] = { 92, 163, 157, 96, 189 };
int endthrowBeans2[5] = { 1061, 564, 216, 191, 129 };
int endthrowBeans3[5] = { 1061, 564, 215, 189, 128 };

// 有60级结界 要退出
int outBreakTag = 0;
int outBreakL[5] = { 155, 206, 185, 178, 162 };
int outBreakR[5] = { 166, 208, 194, 188, 171 };
int outBreakBtn1[3] = { 30, 54, 10 };
int outBreakBtn2[3] = { 630, 400, 30 };
int outBreakBtn3[3] = { 920, 550, 20 };
int outBreakBtn4[3] = { 655, 400, 20 };

//荒川9
int HC9L[5] = { 993, 538, 223, 213, 190 };
int HC9R[5] = { 973, 594, 209, 42, 32 };
int HC9L2[5] = { 1040, 539, 227, 214, 191 };
int HC9R2[5] = { 1026, 591, 244, 101, 40 };
int HC9Btn1[3] = { 955, 550, 30 };

int readyHC9L[5] = { 1063, 523, 255, 242, 206 };
int readyHC9R[5] = { 994, 629, 232, 204, 151 };
int readyHC9Btn1[3] = { 1000, 500, 30 };

//超鬼王搜索
int CGW_search1[5] = { 1044, 507, 73, 50, 25 };
int CGW_search2[5] = { 1051, 560, 221, 194, 134 };
int CGW_search_btn[3] = { 1020, 520, 20 };

//开始按钮
int CGW_start1[5] = { 1031, 572, 59, 30, 13 };
int CGW_start2[5] = { 1019, 632, 159, 196, 225 };
int CGW_start_btn[3] = { 1020, 560, 20 };

//准备按钮
int CGW_ready1[5] = { 993, 630, 232, 202, 150 };
int CGW_ready2[5] = { 1091, 628, 239, 216, 168 };
int CGW_ready_btn[3] = { 1010, 510, 30 };

//结算界面
int CGW_end1[5] = { 619, 532, 255, 204, 30 };
int CGW_end2[5] = { 532, 321, 248, 243, 224 };
int CGW_end_btn[3] = { 300, 50, 200 };

//喝茶
int CGW_clear1[5] = { 509, 439, 243, 178, 94 };
int CGW_clear2[5] = { 567, 458, 233, 54, 30 };
int CGW_clear_btn[3] = { 533, 430, 30 };

//五星 - 首领技
int CGW_five1[5] = { 390, 362, 248, 246, 155 };
int CGW_five2[5] = { 408, 375, 31, 34, 53 };

//五星 - 勾玉
int CGW_five3[5] = { 168, 234, 145, 137, 137 };
int CGW_five4[5] = { 166, 235, 145, 137, 138 };
int CGW_five_back[5] = { 158, 235, 245, 131, 58 };

int CGW_six1[5] = { 166, 235, 200, 40, 232 };
int CGW_six2[5] = { 168, 233, 191, 62, 226 };
