////����: �ĺ���õ�ϱ� LV �ǹ�1
////�˰���: ����
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N, C;
//vector<pair<int,int>> v;
//
//bool mysort(pair<pair<int,int>,int> num1, pair<pair<int, int>, int> num2) {
//	if (num1.second != num2.second) {
//		return num1.second < num2.second;
//	}				
//	//��õ���� ���ٸ�
//	else if (num1.second == num2.second) {
//		//�������°��� �������� ����
//		return num1.first.first < num2.first.first;
//	}
//}
//
//bool anssort(pair<pair<int, int>, int> num1, pair<pair<int, int>, int> num2) {
//	return (num1.first.second < num2.first.second);
//}
//
//void solve(vector<pair<pair<int, int>,int>> candi) {
//	while (!v.empty()) {
//		bool isAlive = false;
//		
//
//		int idx = v.front().first;
//		int value = v.front().second;
//		v.erase(v.begin() + 0);
//
//		//��õ�� ����� ����Ʋ�� �ִٸ�
//		for (int i = 0; i < candi.size(); i++) {
//			if (candi[i].first.second == value) {
//				candi[i].second += 1;
//				isAlive = true;
//				break;
//			}
//		}
//		if (isAlive) {
//			sort(candi.begin(), candi.end(), mysort);
//			continue;
//		}
//
//		//��õ�ѻ���� ����Ʋ�� ������
//		else {
//			//��õ�ѻ���� ����Ʋ������, ��á����, ��������� ��������
//			if (candi.size() == N) {
//				candi.erase(candi.begin() + 0);
//			}
//			candi.push_back(make_pair(make_pair(idx, value),0));
//			
//		}
//		
//		//��õ���� ���������� ����(��õ���� ���ϴٸ� �ð��� �����Ȱ��� ������)
//		sort(candi.begin(),candi.end(),mysort);
//				
//
//	}
//
//	//��õ���� ���������� ����
//	sort(candi.begin(), candi.end(), anssort);
//	for (int i = 0; i < candi.size(); i++) {
//		cout << candi[i].first.second << " ";
//	}
//	
//
//
//}
//int main() {
//	
//	cin >> N;
//	cin >> C;
//
//	//<�ð�,������ȣ>,��ǥ��
//	vector<pair<pair<int, int>, int>> candi;
//	for (int i = 0; i < C; i++) {
//		int num;
//		cin >> num;
//		v.push_back(make_pair(i,num));
//	}
//	
//	solve(candi);
//
//
//}