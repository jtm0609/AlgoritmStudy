////https://rebas.kr/763 해설보고 풀었음
//문제: 2048(easy)
//알고리즘: dfs
//#include<iostream>
//#include<queue>
//#include<cstring>
//#include<algorithm>
//
//using namespace std;
//int ans;
//int a[20][20];
//int n;
//queue<int> q;
//
////배열에서 0(공백)을 제외한 값들을 큐에저장
//void get(int i, int j) {
//	if (a[i][j]) {
//		q.push(a[i][j]);
//		//큐에저장하고, 그좌표를 0(공백)으로함
//		a[i][j]=0;
//	}
//}
//
//void merge(int i, int j, int di, int dj) {
//	while (!q.empty()) {
//		int x = q.front(); 
//		q.pop();
//		
//		//특정 좌표에 있는값이 공백이라면 큐의값을 저장
//		if (!a[i][j])
//			a[i][j] = x;
//		//특정 좌표에 있는값과 큐에있는값과 같다면 2배가됨
//		else if (a[i][j] == x) {
//			a[i][j] = x * 2;
//			//다음방향으로 이동
//			i += di, j += dj;
//		}
//		//특정 좌표에 있는값과 큐에있는 값이 다르다면 방향이동후 그좌표에저장
//		else {
//			i += di, j += dj;
//			a[i][j] = x;
//		}
//	
//
//
//	}
//}
//
//void move(int k) {
//
//	//위쪽 이동
//	if (k == 0) {
//		for (int j = 0; j < n; j++) {
//			for (int i = 0; i < n; i++)
//				get(i, j); //위부터 큐에저장
//			merge(0, j, 1, 0); //앞은 행과열 , 뒤에 두 파라미터가 방향을나타냄
//		}
//	}
//
//	//아래쪽 이동
//	else if (k == 1) {
//		for (int j = 0; j < n; j++) {
//			for (int i = n - 1; i >= 0; i--)
//				get(i, j); //아래부터 큐에저장
//			merge(n - 1, j, -1, 0);
//		}
//	}
//
//	//왼쪽 이동
//	else if (k == 2) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++)
//				get(i, j);
//			merge(i, 0, 0, 1);
//		}
//	}
//
//	//오른쪽 이동
//	else {
//		for (int i = 0; i < n; i++) {
//			for (int j = n - 1; j <= 0; j--)
//				get(i, j); //오른쪽열부터 큐에 저장
//			merge(i, n - 1, 0, -1);
//		}
//	}
//
//
//}
//void dfs(int cnt) {
//	//최대 5번까지므로 5번째가되면, 배열에서 가장큰값을 찾음
//	if (cnt == 5) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (ans < a[i][j])
//					ans = a[i][j];
//			}
//		}
//		return ;
//	}
//
//	//백트래킹을 위해 원본배열을 저장할 새로운배열을만들고 기존배열을 copy함
//	//예를들어 cnt가 0일때, 반복문에서 왼쪽으로이동하고 다시원본 배열에서 오른쪽으로이동해야함
//	int b[20][20];
//	memcpy(b, a, sizeof(a));
//	for (int k = 0; k < 4; k++) {
//		//방향이동
//		move(k);
//		dfs(cnt + 1);
//		//원래 배열로 돌아감
//		memcpy(a, b, sizeof(b));
//	}
//
//}
//
//int main() {
//	
//	//입력부분
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			int num;
//			cin >> num;
//			a[i][j] = num;
//		}
//	}
//
//	dfs(0);
//	cout << ans;
//
//
//
//
//
//}