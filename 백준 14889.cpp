////����: ��ŸƮ�͸�ũ
////�˰���: ���Ʈ����
////https://fjvbn2003.tistory.com/434 �����Ͽ� Ǯ����
//
//#include<iostream>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//
//int N;
//int map[20][20];
//int visited[20];
//int ans = 100000000;
//void solve(int cnt, int cur) {
//	
//	//�̵���̉�ٸ�(�湮�Ȱ�, �湮����������) 
//	//a,b�� ���� �ջ�
//	if (cnt == N / 2) {
//		int a = 0;
//		int b = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = i+1; j < N; j++) {
//				if (visited[i] && visited[j]) {
//					a += map[i][j];
//					a += map[j][i];
//				}
//				else if (!visited[i] && !visited[j]) {
//					b += map[i][j];
//					b += map[j][i];
//				}
//
//			}
//		}
//		//�ּڰ� ��
//		ans = min(ans, abs(a - b));
//
//
//	}
//	//��͸� �̿��� 2���
//	for (int i = 0; i < N; i++) {
//		//i>cur�� �������ν� ���ε������� ū�ε����� ������
//		if (visited[i] == false && i > cur) {
//			visited[i] = true;
//			solve(cnt + 1, i);
//			//��Ʈ��ŷ
//			visited[i] = false;
//		}
//		
//	}
//}
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) 
//		for(int j=0; j<N; j++)
//			cin >> map[i][j];	
//
//	
//	solve(0, -1);
//	cout << ans;
//
//
//
//
//}