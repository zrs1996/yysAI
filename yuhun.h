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

/* �Ĵ�9 */
/* �����ʼ��ť ����ս�� */
void startHC9()
{
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
		endTeam(); //ִ�н���ս�����߼�
	} while (gameRunTimes <= 60);
}