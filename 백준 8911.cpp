////문제: 거북이
////알고리즘: 구현
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int d[4][2] = { {-1,0},{0,1},{1,0},{0,-1} }; //북동남서
//
//void solve() {
//	string str;
//	int x, y, minX, minY, maxX, maxY;
//	x = y = minX = minY = maxX = maxY = 0;
//	int cur = 0;
//	cin >> str;
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] == 'F') {
//			x += d[cur][0];
//			y += d[cur][1];
//		}
//		else if (str[i] == 'B') {
//			x -= d[cur][0];
//			y -= d[cur][1];
//		}
//		else if (str[i] == 'L') {
//			cur = (cur + 3) % 4;
//		}
//		else if (str[i] == 'R') {
//			cur = (cur + 1) % 4;
//		}
//		minX = min(x, minX);
//		minY = min(y, minY);
//		maxX = max(x, maxX);
//		maxY = max(y, maxY);
//	}
//	cout << (maxX - minX) * (maxY - minY)<<endl;
//
//
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		solve();
//	}
//
//}