struct IHaveAPointer {
	int x, y;
	long* pl;
};

int main() {
	// ������ ������ ����
	long l = 300;

	// ����ü ������ ����
	IHaveAPointer ihap;

	// ������ ����Ű�� ����
	ihap.pl = &l;

	return 0;
}