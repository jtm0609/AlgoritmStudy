////����: ���
////�˰���: ���Ʈ����+dfs
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//int N;
//vector<pair<int,int>> dp;
//int ans;
//int temp_p;
//
//void solve(int date, int t, int p) {
//	int next_date = date + t;
//
//	//���� date�� N����ũ�� Ż�� 
//	if (next_date > N)
//		return;
//
//	//�ִ밪��
//	ans = max(ans, p);
//
//	//��ͷ� ������Ǽ� Ž��
//	for (int i = next_date; i < N; i++) {
//		int next_t = dp[i].first;
//		int next_p = dp[i].second;
//	
//		solve(i, next_t, p+next_p);
//	}
//}
//int main() {
//	//�Է�
//	cin >> N;
//	//1�Ϻ��� N�ϱ����Է�
//	for (int i = 0; i < N; i++) {
//		int t,p; //�Ⱓ, �ݾ�
//		cin >> t >> p;
//		dp.push_back(pair<int, int>(t, p));
//	}
//	
//	//��ͷ� ������Ǽ� Ž��
//	for (int i = 0; i < N; i++) {
//		solve(i,dp[i].first, dp[i].second);
//	
//	}
//
//	cout << ans;
//
//
//
//}