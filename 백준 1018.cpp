////����: ü���� �ٽ� ĥ�ϱ�
////�˰���: ���Ʈ����
//
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//int n, m;
//char map[51][51];
//int ans= 987654321;
//
//
////������ ������ü����
//string B[8] = {
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"}
//};
//
////������ ���ü����
//string W[8] = {
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"},
//	{"WBWBWBWB"},
//	{"BWBWBWBW"} ,
//	{"WBWBWBWB"},
//	{"BWBWBWBW"}
//};
//
////ü���� Ȯ��
//int solve(int a, int b) {
//	int blackFirst = 0;
//	int whiteFirst = 0;
//
//	for (int i = a; i < a + 8; i++)
//		for (int j = b; j < b + 8; j++)
//			if (map[i][j] != B[i - a][j - b])
//				blackFirst++;
//
//
//	for (int i = a; i < a + 8; i++)
//		for (int j = b; j < b + 8; j++)
//			if (map[i][j] != W[i - a][j - b])
//				whiteFirst++;
//
//	return min(whiteFirst, blackFirst);
//
//
//
//
//}
//int main() {
//	cin >> n >> m; //����
//
//	for (int i = 0; i < n; i++) {
//		cin >> map[i];
//	}
//
//	
//	for (int i = 0; i+7 < n; i++) {
//		for (int j = 0; j+7 < m; j++) {		
//			//�ּڰ� ��
//			ans = min(ans, solve(i, j));
//		}
//	}
//
//	cout << ans;
//
//
//}