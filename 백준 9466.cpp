////����: �� ������Ʈ
////�˰���: dfs
////����: https://rile1036.tistory.com/106
//
//
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//int t;
//int n;
//int s[100001];
//bool visit[100001];
//bool check[100001];
//int cnt;
//void dfs(int idx) {
//	visit[idx] = true;
//	int next = s[idx];
//	
//	//ó���湮�ߴٸ� Ž��
//	if (!visit[next])
//		dfs(next);
//
//	//�湮�Ѱ��̸� ����Ŭ�̰ų�, �Ѹ��� ������ �̷����������
//	else {
//		if (!check[next]) {
//			for (int i = next; i != idx; i = s[i]) cnt++;
//				cnt++;
//
//		}
//	}
//
//	//����Ŭ�ϸ鼭 üũ�ѹ迭,
//	//����Ŭ�� ���Եǰų� ���Ե�����������̹Ƿ� true���Ͽ� ������ȸ�Ҷ� �ش� �ε����� �ǳʶٰ�����
//	check[idx] = true;
//}
//
////�迭 �ʱ�ȭ
//void init() {
//	memset(s, 0, sizeof(s));
//	memset(visit, false, sizeof(visit));
//	memset(check, false, sizeof(visit));
//
//}
//
//int main() {
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		init();
//		cin >> n;
//		for (int j = 1; j <= n; j++) {
//			cin >> s[j];
//		}
//		cnt = 0;
//		for (int j = 1; j <= n; j++) {
//			if(!visit[j])
//			dfs(j);
//
//		}
//		//ȥ������ ���
//		cout << n - cnt << endl;
//		
//	}
//
//}