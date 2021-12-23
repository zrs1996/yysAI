

/* ========�������ģʽ */
//�������ģʽ��ʶ��ӳ��Ŀ�ʼ��ս��ť
bool getLeaderStartButton() {
	//top����
	int top_x = leaderStartTop[0] + leaderScreenInit[0];
	int top_y = leaderStartTop[1] + leaderScreenInit[1];
	int top_r = leaderStartTop[2];
	int top_g = leaderStartTop[3];
	int top_b = leaderStartTop[4];
	bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
	//right����
	int right_x = leaderStartRight[0] + leaderScreenInit[0];
	int right_y = leaderStartRight[1] + leaderScreenInit[1];
	int right_r = leaderStartRight[2];
	int right_g = leaderStartRight[3];
	int right_b = leaderStartRight[4];
	bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
	//bottom����
	int bottom_x = leaderStartBottom[0] + leaderScreenInit[0];
	int bottom_y = leaderStartBottom[1] + leaderScreenInit[1];
	int bottom_r = leaderStartBottom[2];
	int bottom_g = leaderStartBottom[3];
	int bottom_b = leaderStartBottom[4];
	bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
	//left����
	int left_x = leaderStartLeft[0] + leaderScreenInit[0];
	int left_y = leaderStartLeft[1] + leaderScreenInit[1];
	int left_r = leaderStartLeft[2];
	int left_g = leaderStartLeft[3];
	int left_b = leaderStartLeft[4];
	bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
	cout << "�������ģʽ��ʶ��ӳ��Ŀ�ʼ��ս��ť" << top << right << bottom << left << endl;
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

//�������ģʽ�µ�һ��ʶ����㸣����ť
bool getFirstDoubleEndButton(int initX, int initY) {
	//top����
	int top_x = leaderEndTopFirst[0] + initX;
	int top_y = leaderEndTopFirst[1] + initY;
	int top_r = leaderEndTopFirst[2];
	int top_g = leaderEndTopFirst[3];
	int top_b = leaderEndTopFirst[4];
	bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
	//right����
	int right_x = leaderEndRightFirst[0] + initX;
	int right_y = leaderEndRightFirst[1] + initY;
	int right_r = leaderEndRightFirst[2];
	int right_g = leaderEndRightFirst[3];
	int right_b = leaderEndRightFirst[4];
	bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
	//bottom����
	int bottom_x = leaderEndBottomFirst[0] + initX;
	int bottom_y = leaderEndBottomFirst[1] + initY;
	int bottom_r = leaderEndBottomFirst[2];
	int bottom_g = leaderEndBottomFirst[3];
	int bottom_b = leaderEndBottomFirst[4];
	bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
	//left����
	int left_x = leaderEndLeftFirst[0] + initX;
	int left_y = leaderEndLeftFirst[1] + initY;
	int left_r = leaderEndLeftFirst[2];
	int left_g = leaderEndLeftFirst[3];
	int left_b = leaderEndLeftFirst[4];
	bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
	cout << "�������ģʽ�µ�һ��ʶ����㸣����ť" << top << right << bottom << left << endl;
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

//�������ģʽ�µڶ���ʶ����㸣����ť
bool getDoubleEndButton(int initX, int initY) {
	//top����
	int top_x = leaderEndTop[0] + initX;
	int top_y = leaderEndTop[1] + initY;
	int top_r = leaderEndTop[2];
	int top_g = leaderEndTop[3];
	int top_b = leaderEndTop[4];
	bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
	//right����
	int right_x = leaderEndRight[0] + initX;
	int right_y = leaderEndRight[1] + initY;
	int right_r = leaderEndRight[2];
	int right_g = leaderEndRight[3];
	int right_b = leaderEndRight[4];
	bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
	//bottom����
	int bottom_x = leaderEndBottom[0] + initX;
	int bottom_y = leaderEndBottom[1] + initY;
	int bottom_r = leaderEndBottom[2];
	int bottom_g = leaderEndBottom[3];
	int bottom_b = leaderEndBottom[4];
	bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
	//left����
	int left_x = leaderEndLeft[0] + initX;
	int left_y = leaderEndLeft[1] + initY;
	int left_r = leaderEndLeft[2];
	int left_g = leaderEndLeft[3];
	int left_b = leaderEndLeft[4];
	bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
	cout << "�������ģʽ�µڶ���ʶ����㸣����ť" << top << right << bottom << left << endl;
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

/* =========��������ģʽ */
//ʶ��������ģʽ�Ŀ�ʼ��ť
bool getSingleStartButtonColor() {
	//top����
	int top_x = singleStartTop[0] + leaderScreenInit[0];
	int top_y = singleStartTop[1] + leaderScreenInit[1];
	int top_r = singleStartTop[2];
	int top_g = singleStartTop[3];
	int top_b = singleStartTop[4];
	bool top = getScreenColor(top_x, top_y, top_r, top_g, top_b);
	//right����
	int right_x = singleStartRight[0] + leaderScreenInit[0];
	int right_y = singleStartRight[1] + leaderScreenInit[1];
	int right_r = singleStartRight[2];
	int right_g = singleStartRight[3];
	int right_b = singleStartRight[4];
	bool right = getScreenColor(right_x, right_y, right_r, right_g, right_b);
	//bottom����
	int bottom_x = singleStartBottom[0] + leaderScreenInit[0];
	int bottom_y = singleStartBottom[1] + leaderScreenInit[1];
	int bottom_r = singleStartBottom[2];
	int bottom_g = singleStartBottom[3];
	int bottom_b = singleStartBottom[4];
	bool bottom = getScreenColor(bottom_x, bottom_y, bottom_r, bottom_g, bottom_b);
	//left����
	int left_x = singleStartLeft[0] + leaderScreenInit[0];
	int left_y = singleStartLeft[1] + leaderScreenInit[1];
	int left_r = singleStartLeft[2];
	int left_g = singleStartLeft[3];
	int left_b = singleStartLeft[4];
	bool left = getScreenColor(left_x, left_y, left_r, left_g, left_b);
	cout << "�������ģʽ��ʶ��ӳ��Ŀ�ʼ��ս��ť" << top << right << bottom << left << endl;
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

//������� ��ʼս��
void doubleStartGame() {
	//ִ�йر�����Э�����涯��
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
	closeCooperationButton(memberScreenInit[0], memberScreenInit[1]);
	//��ʼս��
	if (getLeaderStartButton()) {
		aiAutoClick();
		gameRunTimes++;
		cout << "��������" << gameRunTimes << "�ο�ʼս��" << endl;
		Sleep(5000); //�ȴ�3s ���ض���
		/* ִ��������� randomAction ��� ���ѻ��ߴ�������� */
		randomAction(leaderScreenInit[0], leaderScreenInit[1], 5000, 5000);
		Sleep(5000); //�ȴ�3s ���ض���
		randomAction(memberScreenInit[0], memberScreenInit[1], 5000, 5000);
	}
}


//������� �ӳ�����ս��
void doubleLeaderEndGame() {
	//ִ�йر�����Э�����涯��
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
	//ִ�н���ս��
	if (
		getEndButton(secondEndTop, secondEndRight, leaderScreenInit[0], leaderScreenInit[1]) ||
		getEndButton(secondLuckyBagEndTop, secondLuckyBagEndRight, leaderScreenInit[0], leaderScreenInit[1]) ||
		getTwoPointButton(failedButtonTop, failedButtonBottom, failedButtonX, failedButtonY)
		) {
		cout << "���� �ӳ�����ս��" << endl;
		Sleep(random(2000) + 500);
		aiAutoClick();
		isEndGame = true;
	}
}

//������� ��Ա����ս��
void doubleMemberEndGame() {
	//ִ�йر�����Э�����涯��
	closeCooperationButton(memberScreenInit[0], memberScreenInit[1]);
	if (getFirstDoubleEndButton(memberScreenInit[0], memberScreenInit[1])) {
		Sleep(random(500) + 500);
		aiAutoClick();
	}
	if (getDoubleEndButton(memberScreenInit[0], memberScreenInit[1])) {
		cout << "���� ��Ա����ս��" << endl;
		Sleep(random(500) + 500);
		aiAutoClick();
		/* ִ��������� randomAction ��� ���ѻ��ߴ�������� */
		randomAction(memberScreenInit[0], memberScreenInit[1], 5000, 5000);
	}
}

//�������� ����ս��
void SingleYuHunEndGame() {
	cout << "ʶ���Ա�������" << endl;
	//ִ�н���ս��
	if (
		getEndButton(secondEndTop, secondEndRight, leaderScreenInit[0], leaderScreenInit[1]) ||
		getEndButton(secondLuckyBagEndTop, secondLuckyBagEndRight, leaderScreenInit[0], leaderScreenInit[1]) ||
		getTwoPointButton(failedButtonTop, failedButtonBottom, failedButtonX, failedButtonY) ||
		getFirstDoubleEndButton(leaderScreenInit[0], leaderScreenInit[1])) {
		cout << "������� ��Ա�������" << endl;
		aiAutoClick();
	}
}



//��������ս��
int endYuHun(int left[5], int right[5], int x, int y) {
	cout << "ʶ��ӳ��������" << endl;
	if (getColor(left, right)) {
		cout << "���� ����ս��" << endl;
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



//����
int spritStart1[5] = { 1027, 544, 93, 71, 54 };
int spritStart2[5] = { 993, 644, 59, 36, 31 };
int spritBtn1[3] = { 990, 570, 30 };

/* ʶ��������ս��ť�� �����ս��ť ��ʼս�� */
void clickSpritButton() {
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]); //ִ�йر�����Э�����涯��
	//��ʼս��
	if (getColor(spritStart1, spritStart2)) {
		Sleep(1000);
		randomClick(spritBtn1[0], spritBtn1[1], spritBtn1[2]);
		gameRunTimes++;
		cout << "�����" << gameRunTimes << "�ο�ʼս��" << endl;
		Sleep(30000); //�ȴ�����ս������
	}
}

/* ѭ������������ս */
void LoopStartSpritGame() {
	while (gameRunTimes <= 500)
	{
		clickSpritButton(); //ִ�п�ʼս�����߼�
		Sleep(random(500) + 500); //�ȴ�1s ���س���
		doubleLeaderEndGame(); //����ս��
		Sleep(random(500) + 500); //�ȴ�1s ���س���
	}
}




int acceptInviteTag = 0;
/* ��Ա�������� */
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
/* ��Ա�Զ��������� */
void acceptEveryInvite() {
	if (acceptEveryInviteTag) return;
	int btn1[5] = { 134, 259, 84, 175, 95 };
	int btn2[5] = { 213, 252, 237, 199, 145 };
	int btn[3] = { 203, 245, 10 };
	if (getBtn(btn1, btn2, btn)) {
		acceptEveryInviteTag = 1;
	}
}

/* �ӳ�����ս��ť */
int startYuhunBtn1[5] = { 1874, 443, 65, 51, 36 };
int startYuhunBtn2[5] = { 1853, 461, 59, 47, 34 };
int startYuhunBtn[5] = { 1850, 441, 15 };

//���� ��ʼս��
void startYuHun() {
	cout << "�ӳ���ʼ��ս" << endl;
	if (getBtn(startYuhunBtn1, startYuhunBtn2, startYuhunBtn)) {
		gameRunTimes++;
		Sleep(10000);
	}
}

/* �ӳ��Ľ������ʶ�� */
int teamEndBtn1[5] = { 1266, 468, 247, 230, 47 };
int teamEndBtn2[5] = { 1354, 469, 247, 229, 39 };
int teamEndBtn[3] = { 1176, 173, 30 };

/* ��Ա�Ľ������ʶ�� */
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

//������� ѭ����ʼս��
void LoopStartDoubleGame() {
	while (gameRunTimes <= 450)
	{
		Sleep(random(500) + 1500); //�ȴ�1s ���س���
		startYuHun();
		Sleep(random(500) + 1500); //�ȴ�1s ���س���
		acceptInvite();
		acceptEveryInvite();
		//��Ա�������
		endPve(memberEndBtn1, memberEndBtn2, memberEndBtn);
		//�ӳ��������
		endPve(teamEndBtn1, teamEndBtn2, teamEndBtn);
		//�ӳ�Ĭ������
		teamInviteMember();
	}
}

/* ��������ģʽ */
/* �����ʼ��ť ����ս�� */
void startSingleGame()
{
	//ִ�йر�����Э�����涯��
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
	//��ʼս��
	if (getSingleStartButtonColor()) {
		cout << "���������" << gameRunTimes << "�ο�ʼս��" << endl;
		cout << "�ȴ�1��" << endl;
		aiAutoClick();
		/* ִ��������� randomAction ��� ���ѻ��ߴ�������� */
		randomAction(leaderScreenInit[0], leaderScreenInit[1], 10000, 10000);
		Sleep(10000);
		gameRunTimes++;
	}
}

/* �������� ҵԭ�� */
void LoopStartGame()
{
	do
	{
		startSingleGame(); //ִ�п�ʼս�����߼�
		Sleep(1000); //�ȴ�1s
		doubleLeaderEndGame(); //ִ�н���ս�����߼�
	} while (gameRunTimes <= 500);
}

/* �Ĵ�9 */
/* �����ʼ��ť ����ս�� */
void startHC9()
{
	//ִ�йر�����Э�����涯��
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
	cout << "�Ĵ�" << endl;
	//��ʼս��
	if (getColor(HC9L, HC9R) || getColor(HC9L2, HC9R2)) {
		randomClick(HC9Btn1[0], HC9Btn1[1], HC9Btn1[2]);
		gameRunTimes++;
		Sleep(1000);
	}
}

//���׼��
void readyHC9()
{
	//ִ�йر�����Э�����涯��
	closeCooperationButton(leaderScreenInit[0], leaderScreenInit[1]);
	//��ʼս��
	if (getColor(readyHC9L, readyHC9R)) {
		randomClick(readyHC9Btn1[0], readyHC9Btn1[1], readyHC9Btn1[2]);
		Sleep(1000);
	}
}

void LoopStartHC9() {
	do
	{
		startHC9(); //ִ�п�ʼս�����߼�
		Sleep(2000); //�ȴ�1s
		readyHC9(); //���׼��
		Sleep(1000); //�ȴ�1s
		doubleLeaderEndGame(); //ִ�н���ս�����߼�
	} while (gameRunTimes <= 60);
}