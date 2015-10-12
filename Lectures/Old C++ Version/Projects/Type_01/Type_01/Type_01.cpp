int main() {
	// ������ ����
	short int si;				// short int Ÿ��
	unsigned short int usi;		// unsigned short int Ÿ��
	int i;						// int Ÿ��(�׵��� ����ϴ� Ÿ��)
	unsigned int ui;			// unsigned int Ÿ��
	long int li;				// long int Ÿ��
	unsigned long ul;			// unsigned long Ÿ��

	// ���� ���� ����
	si = 40000;		// ERROR : short int���Դ� �ʹ� ū ��
	usi = 40000;	// OK : unsigned short int�� ���� ������
	i = 40000;		// OK
	ui = 40000;		// OK
	li = 40000;		// OK
	ul = 40000;		// OK

	// ���� �� ū ���� ����
	si = 70000;		// ERROR : short int���Դ� �ʹ� ū ��
	usi = 70000;	// ERROR : unsigned short int���Ե� �ʹ� ū ��
	i = 70000;		// OK
	ui = 70000;		// OK
	li = 70000;		// OK
	ul = 70000;		// OK

	// �� ū ���� ����
	si = 2200000000;	// ERROR : short int���Դ� �ʹ� ū ��
	i = 2200000000;		// ERROR : int���Դ� �ʹ� ū ��
	li = 2200000000;	// ERROR : long int���Դ� �ʹ� ū ��
	usi = 2200000000;	// ERROR : unsigned short int���Դ� �ʹ� ū ��
	ui = 2200000000;	// OK
	ul = 2200000000;	// OK

	// unsigned int�� unsigned long int�� �Ѱ�� ���?
	ui = 4300000000;	// ERROR : unsigned int���Ե� �ʹ� ū ��
	ul = 4300000000;	// ERROR : unsigned long int���Ե� �ʹ� ū ��

	// ������ ����
	si = -100;		// OK
	usi = -100;		// ERROR : unsigned short int�� ���� ���� �Ұ���
	i = -100;		// OK
	ui = -100;		// ERROR : unsigned int�� ���� ���� �Ұ���
	li = -100;		// OK
	ul = -100;		// ERROR : unsigned loing int�� ���� ���� �Ұ���

	return 0;
}