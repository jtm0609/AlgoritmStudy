//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<int> node[100]; //int node[10][10] //이차원벡터 10*10을 capacity만 확보
////1. vector<vector<int>>node(10,vector<int>(10,0)); //이차원벡터 10*10을 0으로초기화
////2. vector<int> node(10); //int node[10] //일차원백터 10*1을 0으로 초기화
//int visit[100];
//int cnt = 0;
//void dfs(int num);
//int main() {
//
//	int computer_num;
//	int couple_num;
//	int a, b;
//	
//	cin >> computer_num;
//	cin >> couple_num;
//
//
//	for (int i = 0; i < couple_num; i++) {
//		
//		cin >> a>> b;
//
//		node[a].push_back(b);
//		node[b].push_back(a);
//
//		//1번으로했을때 선언했을때 가능
//		//node[a][b] = 1;
//		//node[b][a] = 1;
//
//	}
//
//
//	//1번으로했을때 node벡터 출력문
//	//for (int i = 0; i < 10; i++) {
//	//	for (int j = 0; j < 10; j++) {
//	//		cout << node[i][j] << " ";
//	//	}
//	//	cout << "\n";
//	//}
//	
//
//	dfs(1);
//	cout << cnt-1;
//
//
//}
//
//void dfs(int num) {
//	
//	if (visit[num]) return;
//	visit[num] = 1;
//	cnt++;
//	//cout << num << " ";
//	for (int i = 0; i < node[num].size(); i++) {
//		int y = node[num][i];
//		dfs(y);
//	}
//	
//
//
//	//if(node[num]) return;
//
//}