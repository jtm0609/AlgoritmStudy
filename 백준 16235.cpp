////����: ��������ũ
////�˰���: ����
////������ �߸��о ����̺����Ѻκп��� �Ǽ��� ����
////����: https://jaimemin.tistory.com/1188 ������ ���̶� �ڵ� 95%��ġ����(���� �Ĺ��� ����������, �����Ѵ��� �ӽú��͸� �����)
////Ǭ��¥: 2020-12-23
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n, m, k;
//int add[11][11];
//int water[11][11];
//vector<int> tree_age[11][11];
//int dir[8][2] = {
//	{-1,0}, {0,1}, {1,0}, {0,-1}, {-1,1},{1,1},{1,-1},{-1,-1}
//};
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < n);
//}
//
//int solve() {
//	//k����� ����ũ
//	for (int y = 0; y < k; y++) {
//
//		//�� ����
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (!tree_age[i][j].empty()) {
//					int dead = 0;
//					vector<int> temp;
//					//���̰� ���������� ��������
//					sort(tree_age[i][j].begin(), tree_age[i][j].end());
//					for (int t = 0; t < tree_age[i][j].size(); t++) {
//						int age = tree_age[i][j][t];
//						//����� �ڽ��� �����̻��̶��
//						if (water[i][j] >= age) {
//							//��и���
//							water[i][j] -= age;
//							//���̸�ŭ ����� ���� �Ĺ����� ���̸� ������Ŵ
//							temp.push_back(age + 1);
//						}
//
//						//���� ����� �����ϴٸ� �����Ĺ����� ���̸� ������
//						else
//							dead += age / 2; 
//
//					}
//
//						//���� �Ĺ����� ���� ����
//						tree_age[i][j].clear();
//						for (int v = 0; v < temp.size(); v++)
//							tree_age[i][j].push_back(temp[v]);
//
//						//����
//						water[i][j] += dead;
//					}
//				}
//			}
//		
//
//
//			//����
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < n; j++) {
//					if (!tree_age[i][j].empty()) {
//						for (int t = 0; t < tree_age[i][j].size(); t++) {
//							//���̰� 5�ǹ�����
//							if (tree_age[i][j][t] % 5 == 0) {
//								//�ֺ� 8ĭ ����
//								for (int d = 0; d < 8; d++) {
//									int nx = i + dir[d][0];
//									int ny = j + dir[d][1];
//									if (!isInside(nx, ny)) continue;
//									//���̰� 1�� ���� ����
//									tree_age[nx][ny].push_back(1);
//								}
//							}
//						}
//					}
//				}
//			}
//
//			//�ܿ�
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < n; j++) {
//					water[i][j] += add[i][j];
//				}
//			}
//
//	}
//	int ret = 0;
//	//k���� ������ �����ǰ���
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (!tree_age[i][j].empty()) {
//				ret += tree_age[i][j].size();
//			}
//		}
//	}
//	return ret;
//}
//
//int main() {
//	cin >> n >> m >> k;
//
//	//������ ��а� �κ��� �߰��� ��� �Է�
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			water[i][j] = 5;
//			cin >> add[i][j];
//		}
//	}
//
//	//������ ������ ��ǥ, ����
//	for (int i = 0; i < m; i++) {
//		int x, y, age;
//		cin >> x >> y >> age;
//		tree_age[x - 1][y - 1].push_back(age);
//	}
//
//	int ret = solve();
//	cout << ret;
//
//
//}
