//Ʋ��
//�ڵ�� �׸��� 3120
//#include<iostream>
//using namespace std;
//int main() {
//
//	int curTemp;
//	int objectiveTemp;
//	int result;
//	int c;
//
//	cin >> curTemp;
//	cin >> objectiveTemp;
//	result = abs(objectiveTemp - curTemp) / 10;
//
//	//10���� ���� ������
//	c = abs(objectiveTemp - curTemp) % 10;
//	if (c == 1 || c == 5)
//		result += 1;
//	else if (c == 2 || c == 4 ||c==6|| c == 9)
//		result += 2;
//	else if (c == 3 || c == 7 || c == 8)
//		result += 3;
//
//	cout << result << endl;
//
//
//	
//
//}

//1�� �Ǳ����ؼ��� +1 (1ȸ)
//2�� �Ǳ����ؼ��� +1 +1 (2ȸ)
//3�� �Ǳ� ���ؼ��� +1 +1 +1, +5 -1 -1 (3ȸ)
//4�� �Ǳ� ���ؼ��� +5 -1 (2ȸ)
//5�� �Ǳ� ���ؼ��� +5 (1ȸ)
//6�� �Ǳ� ���ؼ��� +5 +1 (2ȸ)
//7�� �Ǳ� ���ؼ��� +5 +1 +1 (3ȸ)
//8�� �ڱ� ���ؼ��� +10 -1 -1 (3ȸ)
//9�� �Ǳ� ���ؼ��� +10 -1 (2ȸ)
