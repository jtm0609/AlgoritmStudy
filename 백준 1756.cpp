////����: ���ڱ��� (���5)
////�˰��� : �̺�Ž��
////����: https://slllju.tistory.com/15
////n,m�� ���� 30��(10^5)�̹Ƿ� ���� for���� ������ (10^10)���� �ð��ʰ��� ����
////���� �̺�Ž�� or DP�˰����� ����ؼ� Ǯ����Ѵ�.
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define maxn 3000001
//#define inf 1000000009
//int a[maxn]; //����
//int main() {
//	int n, m;
//	a[0] = inf;
//	cin >> n >> m;
//
//	//����Ư���� ������������ ���̰� �����ɼ����ִٴ����� �˼��ִ�.
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		a[i] = min(a[i - 1], a[i]);
//	}
//
//	int dough = 0; int old = 0; int pos = n + 1;
//	while (m--) {
//		old = dough;
//		cin >> dough;
//
//		//���찡 ��á�ٸ�
//		if (!pos) continue;
//
//		//���� ���׺��� �۰ų� ���� �����̸� �ٷ����� �ø���.
//		if (dough <= old) {
//			pos--;
//			continue;
//		}
//		//�׷����ʴٸ� �̺�Ž������ �˸��� ��ġ�� ã�´�.
//		else {
//			int low = 0; int mid; int high = pos - 1;
//			while (low <= high) {
//				mid = (low + high) / 2;
//				if (dough <= a[mid]) {
//					low = mid + 1;
//					pos = mid;
//				}
//				else high = mid - 1;
//			}
//		}
//	}
//	cout << pos;
//}