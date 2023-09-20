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
	else {
		/* �ӳ�����ս��ť */
		int startYuhunBtn11[5] = { 1856, 441, 240, 220, 144 };
		int startYuhunBtn21[5] = { 1880, 470, 229, 195, 98 };
		if (getBtn(startYuhunBtn11, startYuhunBtn21, startYuhunBtn)) {
			gameRunTimes++;
			Sleep(10000);
		}
	}
}

/* �ӳ��Ľ������ʶ�� */
int teamEndBtn1[5] = { 1267, 469, 247, 228, 33 };
int teamEndBtn2[5] = { 1355, 469, 247, 228, 34 };
int teamEndBtn[3] = { 1176, 173, 30 };

/* ��Ա�Ľ������ʶ�� */
int memberEndBtn1[5] = { 175, 631, 247, 230, 44 };
int memberEndBtn2[5] = { 313, 635, 240, 209, 14 };
int memberEndBtn[3] = { 28, 192, 30 };

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

		closeErrorInterface();

		startYuHun();
		Sleep(random(500) + 1500); //�ȴ�1s ���س���
		acceptInvite();
		acceptEveryInvite();
		//��Ա�������
		endPve(memberEndBtn1, memberEndBtn2, memberEndBtn);
		//�ӳ��������
		endPve(teamEndBtn1, teamEndBtn2, teamEndBtn);
		//�ӳ�Ĭ������
		//teamInviteMember();
	}
}

void LoopStartGame() {
	while (gameRunTimes <= 500)
	{
		int btn1[5] = { 1808, 438, 217, 206, 184 };
		int btn2[5] = { 1838, 463, 222, 211, 188 };
		int btn[3] = { 1803, 438, 10 };
		if (getBtn(btn1, btn2, btn)) {
			Sleep(random(3000) + 55000);
		}


		int singleYuhunBtn1[5] = { 1802, 443, 226, 216, 193 };
		int singleYuhunBtn2[5] = { 1846, 454, 227, 215, 194 };
		int singleYuhunBtn[3] = { 1811, 437, 10 };
		if (getBtn(singleYuhunBtn1, singleYuhunBtn2, singleYuhunBtn)) {
			Sleep(random(3000) + 5000);
		}

		endMember();
		Sleep(random(1000) + 1000);
	}
}