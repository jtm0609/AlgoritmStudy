////https://rebas.kr/763 �ؼ����� Ǯ����
//����: 2048(easy)
//�˰���: dfs
//#include<iostream>
//#include<queue>
//#include<cstring>
//#include<algorithm>
//
//using namespace std;
//int ans;
//int a[20][20];
//int n;
//queue<int> q;
//
////�迭���� 0(����)�� ������ ������ ť������
//void get(int i, int j) {
//	if (a[i][j]) {
//		q.push(a[i][j]);
//		//ť�������ϰ�, ����ǥ�� 0(����)������
//		a[i][j]=0;
//	}
//}
//
//void merge(int i, int j, int di, int dj) {
//	while (!q.empty()) {
//		int x = q.front(); 
//		q.pop();
//		
//		//Ư�� ��ǥ�� �ִ°��� �����̶�� ť�ǰ��� ����
//		if (!a[i][j])
//			a[i][j] = x;
//		//Ư�� ��ǥ�� �ִ°��� ť���ִ°��� ���ٸ� 2�谡��
//		else if (a[i][j] == x) {
//			a[i][j] = x * 2;
//			//������������ �̵�
//			i += di, j += dj;
//		}
//		//Ư�� ��ǥ�� �ִ°��� ť���ִ� ���� �ٸ��ٸ� �����̵��� ����ǥ������
//		else {
//			i += di, j += dj;
//			a[i][j] = x;
//		}
//	
//
//
//	}
//}
//
//void move(int k) {
//
//	//���� �̵�
//	if (k == 0) {
//		for (int j = 0; j < n; j++) {
//			for (int i = 0; i < n; i++)
//				get(i, j); //������ ť������
//			merge(0, j, 1, 0); //���� ����� , �ڿ� �� �Ķ���Ͱ� ��������Ÿ��
//		}
//	}
//
//	//�Ʒ��� �̵�
//	else if (k == 1) {
//		for (int j = 0; j < n; j++) {
//			for (int i = n - 1; i >= 0; i--)
//				get(i, j); //�Ʒ����� ť������
//			merge(n - 1, j, -1, 0);
//		}
//	}
//
//	//���� �̵�
//	else if (k == 2) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++)
//				get(i, j);
//			merge(i, 0, 0, 1);
//		}
//	}
//
//	//������ �̵�
//	else {
//		for (int i = 0; i < n; i++) {
//			for (int j = n - 1; j <= 0; j--)
//				get(i, j); //�����ʿ����� ť�� ����
//			merge(i, n - 1, 0, -1);
//		}
//	}
//
//
//}
//void dfs(int cnt) {
//	//�ִ� 5�������Ƿ� 5��°���Ǹ�, �迭���� ����ū���� ã��
//	if (cnt == 5) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (ans < a[i][j])
//					ans = a[i][j];
//			}
//		}
//		return ;
//	}
//
//	//��Ʈ��ŷ�� ���� �����迭�� ������ ���ο�迭������� �����迭�� copy��
//	//������� cnt�� 0�϶�, �ݺ������� ���������̵��ϰ� �ٽÿ��� �迭���� �����������̵��ؾ���
//	int b[20][20];
//	memcpy(b, a, sizeof(a));
//	for (int k = 0; k < 4; k++) {
//		//�����̵�
//		move(k);
//		dfs(cnt + 1);
//		//���� �迭�� ���ư�
//		memcpy(a, b, sizeof(b));
//	}
//
//}
//
//int main() {
//	
//	//�Էºκ�
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			int num;
//			cin >> num;
//			a[i][j] = num;
//		}
//	}
//
//	dfs(0);
//	cout << ans;
//
//
//
//
//
//}