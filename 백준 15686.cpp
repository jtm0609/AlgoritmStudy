////����: ġŲ���
////�˰���: ���Ʈ����(dfs)
////https://na982.tistory.com/category/%EC%82%BC%EC%84%B1%20SW%20%EC%97%AD%EB%9F%89%20%ED%85%8C%EC%8A%A4%ED%8A%B8%20%EA%B8%B0%EC%B6%9C%20%ED%92%80%EC%9D%B4?page=4
//// �����Ͽ�Ǯ����
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//struct POSI {
//	int x, y;
//};
//
//int n, m;
//int ans= 0x7fffffff;
//vector<POSI> house_v;
//vector<POSI> chicken_v;
//vector<POSI> pick_v;
//
//void dfs(int pos) {
//
//	//ġŲ���� m�� ���ߴٸ�
//	if (pick_v.size() == m) {
//		int candi=0;
//		//������ ġŲ�Ÿ�
//		//���� ���� ġŲ������ �Ÿ��� �ּҰ��Ǵ� ���� ����
//		for (int i = 0; i < house_v.size(); i++) {
//			int min_dis = 1000000;
//			for (int j = 0; j < pick_v.size(); j++) {
//				min_dis=min(min_dis,abs(house_v[i].x - pick_v[j].x) + abs(house_v[i].y - pick_v[j].y));
//			}
//			//������ ġŲ�Ÿ�
//			candi += min_dis;
//		}
//
//		//�ּҰ� ��
//		if (ans > candi)
//			ans = candi;
//
//		return;
//	}
//
//	//dfs�� Ȱ���� ġŲ���� 3�����ϴ� ����Ǽ� ���Ž��
//	for (int i = pos; i < chicken_v.size(); i++) {
//		pick_v.push_back(chicken_v[i]);
//		dfs(i + 1);
//		//��Ʈ��ŷ
//		pick_v.pop_back();
//	}
//		
//}
//
//int main() {
//	POSI target;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			int temp;
//			cin >> temp;
//			//��
//			if (temp == 1) {
//				target.x = i;
//				target.y = j;
//				house_v.push_back(target);
//			}
//			//ġŲ��
//			else if (temp == 2) {
//				target.x = i;
//				target.y = j;
//				chicken_v.push_back(target);
//			}
//		}
//	}
//
//	//Ž��
//	dfs(0);
//	cout << ans;
//}