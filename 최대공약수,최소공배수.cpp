//
//
//int gcd(int a, int b) {
//	//a�� b���� Ŀ����
//	if (b > a) {
//		int temp = b;
//		b = a;
//		a = temp;
//	}
//
//	//��Ŭ���� ȣ����
//	//b�� 0�μ��� a�� gcd���Ǵ��� ����
//	while (b != 0) {
//		int n = a % b;
//		a = b;
//		b = n;
//	}
//	//�ִ����� ����
//	return a;
//
//}
//
////�ּҰ���� ���ϱ�
////a*b�� �ִ������� ��������
//int lcm(int a, int b) {
//	return a * b / gcd(a, b);
//}