int acceptInviteTag = 0;
/* 队员接受邀请 */
void acceptInvite() {
	if (acceptInviteTag) return;
	int btn1[5] = { 122, 252, 99, 188, 110 };
	int btn2[5] = { 142, 252, 85, 177, 96 };
	int btn[3] = { 119, 245, 10 };
	if (getBtn(btn1, btn2, btn)) {
		acceptInviteTag = 1;
	}
}

int acceptEveryInviteTag = 0;
/* 队员自动接受邀请 */
void acceptEveryInvite() {
	if (acceptEveryInviteTag) return;
	int btn1[5] = { 134, 259, 84, 175, 95 };
	int btn2[5] = { 213, 252, 237, 199, 145 };
	int btn[3] = { 203, 245, 10 };
	if (getBtn(btn1, btn2, btn)) {
		acceptEveryInviteTag = 1;
	}
}

/* 队长的挑战按钮 */
int startYuhunBtn1[5] = { 1874, 443, 65, 51, 36 };
int startYuhunBtn2[5] = { 1853, 461, 59, 47, 34 };
int startYuhunBtn[5] = { 1850, 441, 15 };

//御魂 开始战斗
void startYuHun() {
	cout << "队长开始挑战" << endl;
	if (getBtn(startYuhunBtn1, startYuhunBtn2, startYuhunBtn)) {
		gameRunTimes++;
		Sleep(10000);
	}
}

/* 队长的结算界面识别 */
int teamEndBtn1[5] = { 1266, 468, 247, 230, 47 };
int teamEndBtn2[5] = { 1354, 469, 247, 229, 39 };
int teamEndBtn[3] = { 1176, 173, 30 };

/* 队员的结算界面识别 */
int memberEndBtn1[5] = { 177, 632, 247, 229, 40 };
int memberEndBtn2[5] = { 314, 632, 247, 229, 39 };
int memberEndBtn[3] = { 51, 203, 30 };

void teamInviteMember() {
	int teamInviteBtn1[5] = { 1476, 283, 113, 94, 76 };
	int teamInviteBtn2[5] = { 1562, 328, 243, 178, 94 };
	int teamInviteBtn[3] = { 1476, 283, 6 };
	int teamInviteConfirm[3] = { 1563, 324, 10 };
	if (getBtn(teamInviteBtn1, teamInviteBtn2, teamInviteBtn)) {
		Sleep(random(500) + 500);
		clickRandom(teamInviteConfirm);
	}
}

//组队御魂 循环开始战斗
void LoopStartDoubleGame() {
	while (gameRunTimes <= 450)
	{
		Sleep(random(500) + 1500); //等待1s 加载场景
		startYuHun();
		Sleep(random(500) + 1500); //等待1s 加载场景
		acceptInvite();
		acceptEveryInvite();
		//队员点击福蛋
		endPve(memberEndBtn1, memberEndBtn2, memberEndBtn);
		//队长点击福蛋
		endPve(teamEndBtn1, teamEndBtn2, teamEndBtn);
		//队长默认邀请
		teamInviteMember();
	}
}

/* 荒川9 */
/* 点击开始按钮 进入战斗 */
void startHC9()
{
	cout << "荒川" << endl;
	//开始战斗
	if (getColor(HC9L, HC9R) || getColor(HC9L2, HC9R2)) {
		randomClick(HC9Btn1[0], HC9Btn1[1], HC9Btn1[2]);
		gameRunTimes++;
		Sleep(1000);
	}
}

//点击准备
void readyHC9()
{
	//开始战斗
	if (getColor(readyHC9L, readyHC9R)) {
		randomClick(readyHC9Btn1[0], readyHC9Btn1[1], readyHC9Btn1[2]);
		Sleep(1000);
	}
}

void LoopStartHC9() {
	do
	{
		startHC9(); //执行开始战斗的逻辑
		Sleep(2000); //等待1s
		readyHC9(); //点击准备
		Sleep(1000); //等待1s
		endTeam(); //执行结束战斗的逻辑
	} while (gameRunTimes <= 60);
}