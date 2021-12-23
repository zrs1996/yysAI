

/* ========组队御魂模式 */
//组队御魂模式下识别队长的开始挑战按钮
bool getLeaderStartButton() {
	//top坐标
	int top_x = leaderStartTop[0] + leaderScreenInit[0];
	int top_y = leaderStartTop[1] + leaderScreenInit[1];
	int top_r = leaderStartTop[2];
	int top_g = leaderStartTop[3];
	int top_b = leaderStartTop[4];
	bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
	//right坐标
	int right_x = leaderStartRight[0] + leaderScreenInit[0];
	int right_y = leaderStartRight[1] + leaderScreenInit[1];
	int right_r = leaderStartRight[2];
	int right_g = leaderStartRight[3];
	int right_b = leaderStartRight[4];
	bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
	//bottom坐标
	int bottom_x = leaderStartBottom[0] + leaderScreenInit[0];
	int bottom_y = leaderStartBottom[1] + leaderScreenInit[1];
	int bottom_r = leaderStartBottom[2];
	int bottom_g = leaderStartBottom[3];
	int bottom_b = leaderStartBottom[4];
	bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
	//left坐标
	int left_x = leaderStartLeft[0] + leaderScreenInit[0];
	int left_y = leaderStartLeft[1] + leaderScreenInit[1];
	int left_r = leaderStartLeft[2];
	int left_g = leaderStartLeft[3];
	int left_b = leaderStartLeft[4];
	bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
	cout << "组队御魂模式下识别队长的开始挑战按钮" << top << right << bottom << left << endl;
	if (top && right && bottom && left) {
		int startButton_x = leaderStartGameButtonX + leaderScreenInit[0];
		int startButton_y = leaderStartGameButtonY + leaderScreenInit[1];
		moveMouseByRandom(startButton_x, startButton_y, 15);
		return 1;
	}
	else {
		return 0;
	}
}

//组队御魂模式下第一次识别结算福袋按钮
bool getFirstDoubleEndButton(int initX, int initY) {
	//top坐标
	int top_x = leaderEndTopFirst[0] + initX;
	int top_y = leaderEndTopFirst[1] + initY;
	int top_r = leaderEndTopFirst[2];
	int top_g = leaderEndTopFirst[3];
	int top_b = leaderEndTopFirst[4];
	bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
	//right坐标
	int right_x = leaderEndRightFirst[0] + initX;
	int right_y = leaderEndRightFirst[1] + initY;
	int right_r = leaderEndRightFirst[2];
	int right_g = leaderEndRightFirst[3];
	int right_b = leaderEndRightFirst[4];
	bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
	//bottom坐标
	int bottom_x = leaderEndBottomFirst[0] + initX;
	int bottom_y = leaderEndBottomFirst[1] + initY;
	int bottom_r = leaderEndBottomFirst[2];
	int bottom_g = leaderEndBottomFirst[3];
	int bottom_b = leaderEndBottomFirst[4];
	bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
	//left坐标
	int left_x = leaderEndLeftFirst[0] + initX;
	int left_y = leaderEndLeftFirst[1] + initY;
	int left_r = leaderEndLeftFirst[2];
	int left_g = leaderEndLeftFirst[3];
	int left_b = leaderEndLeftFirst[4];
	bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
	cout << "组队御魂模式下第一次识别结算福袋按钮" << top << right << bottom << left << endl;
	if (top && right && bottom && left) {
		int endButton_x = 0;
		if (random(500) > 170) {
			endButton_x = random(150) + 20;
		}
		else {
			endButton_x = random(130) + 1000;
		}
		int endButton_y = random(170) + 380;
		moveMouseByRandom(endButton_x + initX, endButton_y + initY, 1);
		return 1;
	}
	else {
		return 0;
	}
}

//组队御魂模式下第二次识别结算福袋按钮
bool getDoubleEndButton(int initX, int initY) {
	//top坐标
	int top_x = leaderEndTop[0] + initX;
	int top_y = leaderEndTop[1] + initY;
	int top_r = leaderEndTop[2];
	int top_g = leaderEndTop[3];
	int top_b = leaderEndTop[4];
	bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
	//right坐标
	int right_x = leaderEndRight[0] + initX;
	int right_y = leaderEndRight[1] + initY;
	int right_r = leaderEndRight[2];
	int right_g = leaderEndRight[3];
	int right_b = leaderEndRight[4];
	bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
	//bottom坐标
	int bottom_x = leaderEndBottom[0] + initX;
	int bottom_y = leaderEndBottom[1] + initY;
	int bottom_r = leaderEndBottom[2];
	int bottom_g = leaderEndBottom[3];
	int bottom_b = leaderEndBottom[4];
	bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
	//left坐标
	int left_x = leaderEndLeft[0] + initX;
	int left_y = leaderEndLeft[1] + initY;
	int left_r = leaderEndLeft[2];
	int left_g = leaderEndLeft[3];
	int left_b = leaderEndLeft[4];
	bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
	cout << "组队御魂模式下第二次识别结算福袋按钮" << top << right << bottom << left << endl;
	if (top && right && bottom && left) {
		int endButton_x = 0;
		if (random(500) > 170) {
			endButton_x = random(150) + 20;
		}
		else {
			endButton_x = random(130) + 1000;
		}
		int endButton_y = random(170) + 380;
		moveMouseByRandom(endButton_x + initX, endButton_y + initY, 1);
		return 1;
	}
	else {
		return 0;
	}
}

/* =========单人御魂模式 */
//识别单人御魂模式的开始按钮
bool getSingleStartButtonColor() {
	//top坐标
	int top_x = singleStartTop[0] + leaderScreenInit[0];
	int top_y = singleStartTop[1] + leaderScreenInit[1];
	int top_r = singleStartTop[2];
	int top_g = singleStartTop[3];
	int top_b = singleStartTop[4];
	bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
	//right坐标
	int right_x = singleStartRight[0] + leaderScreenInit[0];
	int right_y = singleStartRight[1] + leaderScreenInit[1];
	int right_r = singleStartRight[2];
	int right_g = singleStartRight[3];
	int right_b = singleStartRight[4];
	bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
	//bottom坐标
	int bottom_x = singleStartBottom[0] + leaderScreenInit[0];
	int bottom_y = singleStartBottom[1] + leaderScreenInit[1];
	int bottom_r = singleStartBottom[2];
	int bottom_g = singleStartBottom[3];
	int bottom_b = singleStartBottom[4];
	bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
	//left坐标
	int left_x = singleStartLeft[0] + leaderScreenInit[0];
	int left_y = singleStartLeft[1] + leaderScreenInit[1];
	int left_r = singleStartLeft[2];
	int left_g = singleStartLeft[3];
	int left_b = singleStartLeft[4];
	bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
	cout << "组队御魂模式下识别队长的开始挑战按钮" << top << right << bottom << left << endl;
	if (top && right && bottom && left) {
		int startButton_x = singleStartButtonX + leaderScreenInit[0];
		int startButton_y = singleStartButtonY + leaderScreenInit[1];
		moveMouseByRandom(startButton_x, startButton_y, 20);
		return 1;
	}
	else {
		return 0;
	}
}

//组队御魂 开始战斗
void doubleStartGame() {
	//执行关闭悬赏协作界面动作
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
	closeCooperationButton(memberScreenInit[0], memberScreenInit[1]);
	//开始战斗
	if (getLeaderStartButton()) {
		aiAutoClick();
		gameRunTimes++;
		cout << "组队御魂第" << gameRunTimes << "次开始战斗" << endl;
		Sleep(5000); //等待3s 加载动画
		/* 执行随机动作 randomAction 点击 好友或者打开聊天界面 */
		randomAction(leaderScreenInit[0], leaderScreenInit[1], 5000, 5000);
		Sleep(5000); //等待3s 加载动画
		randomAction(memberScreenInit[0], memberScreenInit[1], 5000, 5000);
	}
}


//组队御魂 队长结束战斗
void doubleLeaderEndGame() {
	//执行关闭悬赏协作界面动作
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
	//执行结束战斗
	if (
		getEndButton(secondEndTop, secondEndRight, leaderScreenInit[0], leaderScreenInit[1]) ||
		getEndButton(secondLuckyBagEndTop, secondLuckyBagEndRight, leaderScreenInit[0], leaderScreenInit[1]) ||
		getTwoPointButton(failedButtonTop, failedButtonBottom, failedButtonX, failedButtonY)
		) {
		cout << "御魂 队长结束战斗" << endl;
		Sleep(random(2000) + 500);
		aiAutoClick();
		isEndGame = true;
	}
}

//组队御魂 队员结束战斗
void doubleMemberEndGame() {
	//执行关闭悬赏协作界面动作
	closeCooperationButton(memberScreenInit[0], memberScreenInit[1]);
	if (getFirstDoubleEndButton(memberScreenInit[0], memberScreenInit[1])) {
		Sleep(random(500) + 500);
		aiAutoClick();
	}
	if (getDoubleEndButton(memberScreenInit[0], memberScreenInit[1])) {
		cout << "御魂 队员结束战斗" << endl;
		Sleep(random(500) + 500);
		aiAutoClick();
		/* 执行随机动作 randomAction 点击 好友或者打开聊天界面 */
		randomAction(memberScreenInit[0], memberScreenInit[1], 5000, 5000);
	}
}

//单人御魂 结束战斗
void SingleYuHunEndGame() {
	cout << "识别队员结算界面" << endl;
	//执行结束战斗
	if (
		getEndButton(secondEndTop, secondEndRight, leaderScreenInit[0], leaderScreenInit[1]) ||
		getEndButton(secondLuckyBagEndTop, secondLuckyBagEndRight, leaderScreenInit[0], leaderScreenInit[1]) ||
		getTwoPointButton(failedButtonTop, failedButtonBottom, failedButtonX, failedButtonY) ||
		getFirstDoubleEndButton(leaderScreenInit[0], leaderScreenInit[1])) {
		cout << "组队御魂 队员点击福袋" << endl;
		aiAutoClick();
	}
}



//结束御魂战斗
int endYuHun(int left[5], int right[5], int x, int y) {
	cout << "识别队长结算界面" << endl;
	if (getColor(left, right)) {
		cout << "御魂 结束战斗" << endl;
		int endButton_x = 0;
		endButton_x = random(90) + 10;
		int endButton_y = random(200) + 160;
		moveMouseByRandom(endButton_x + x, endButton_y + y, 1);
		Sleep(1000);
		aiAutoClick();
		return 1;
	}
	return 0;
}



//御灵
int spritStart1[5] = { 1027, 544, 93, 71, 54 };
int spritStart2[5] = { 993, 644, 59, 36, 31 };
int spritBtn1[3] = { 990, 570, 30 };

/* 识别到御灵挑战按钮后 点击挑战按钮 开始战斗 */
void clickSpritButton() {
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]); //执行关闭悬赏协作界面动作
	//开始战斗
	if (getColor(spritStart1, spritStart2)) {
		Sleep(1000);
		randomClick(spritBtn1[0], spritBtn1[1], spritBtn1[2]);
		gameRunTimes++;
		cout << "御灵第" << gameRunTimes << "次开始战斗" << endl;
		Sleep(30000); //等待加载战斗场景
	}
}

/* 循环开启御灵挑战 */
void LoopStartSpritGame() {
	while (gameRunTimes <= 500)
	{
		clickSpritButton(); //执行开始战斗的逻辑
		Sleep(random(500) + 500); //等待1s 加载场景
		doubleLeaderEndGame(); //结束战斗
		Sleep(random(500) + 500); //等待1s 加载场景
	}
}




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
int memberEndBtn1[5] = { 173, 622, 251, 245, 49 };
int memberEndBtn2[5] = { 309, 624, 247, 231, 49 };
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

/* 单人御魂模式 */
/* 点击开始按钮 进入战斗 */
void startSingleGame()
{
	//执行关闭悬赏协作界面动作
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
	//开始战斗
	if (getSingleStartButtonColor()) {
		cout << "单人御魂第" << gameRunTimes << "次开始战斗" << endl;
		cout << "等待1秒" << endl;
		aiAutoClick();
		/* 执行随机动作 randomAction 点击 好友或者打开聊天界面 */
		randomAction(leaderScreenInit[0], leaderScreenInit[1], 10000, 10000);
		Sleep(10000);
		gameRunTimes++;
	}
}

/* 单人御魂 业原火 */
void LoopStartGame()
{
	do
	{
		startSingleGame(); //执行开始战斗的逻辑
		Sleep(1000); //等待1s
		doubleLeaderEndGame(); //执行结束战斗的逻辑
	} while (gameRunTimes <= 500);
}

/* 荒川9 */
/* 点击开始按钮 进入战斗 */
void startHC9()
{
	//执行关闭悬赏协作界面动作
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
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
	//执行关闭悬赏协作界面动作
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
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
		doubleLeaderEndGame(); //执行结束战斗的逻辑
	} while (gameRunTimes <= 60);
}