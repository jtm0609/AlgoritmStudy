////���� ��溸���ϱ� (�ǹ�2)
////�˰���: �׸���
////�ð����⵵: O(n)
////ù��°������ O(n)�̴� why? ���ڷ� �� �����鼭 ������ �������� �����ִ°Ŷ� O(N)�̴�.
////1. ����: https://velog.io/@junho5336/Algorithm-%EB%B0%B1%EC%A4%80-1911-%ED%9D%99%EA%B8%B8-%EB%B3%B4%EC%88%98%ED%95%98%EA%B8%B0
////2. ����: https://jaimemin.tistory.com/1324
//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int n, l; //�����̼�(10^4), �κ�������
//
//int main() {
//	cin >> n >> l;
//	vector<pair<int, int>>v;
//	for (int i = 0; i < n; i++) {
//		int start, end;
//		cin >> start >> end;
//		v.push_back(make_pair(start, end));
//	}
//
//	sort(v.begin(), v.end());
//	int answer = 0;
//	int idx = 0;
//	for (int i = 0; i < v.size(); i++) {
//		if (idx >= v[i].second) {
//			continue;
//		}
//		if (v[i].first > idx)
//			idx = v[i].first;
//		int cnt = (v[i].second - (idx + 1)) / l + 1;
//		answer += cnt;
//		idx += l * cnt;
//		
//	}
//	cout << answer;
//
//
//}
