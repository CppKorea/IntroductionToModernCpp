int main() {
	// int Ÿ���� �ּҸ� void �����Ϳ� ����
	int i = 400;
	void* pv = &i;

	// pv�� ������ �ּҸ� int* Ÿ���� ������ �Ű� ����
	int* pi = (int*)pv;

	return 0;
}