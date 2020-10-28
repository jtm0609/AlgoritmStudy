////문제: 뱀
////알고리즘: 시뮬레이션 + Queue
////https://debuglog.tistory.com/159  꼬리부분구현을 잘못해서 약간 참조하였음
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int n;//맵 크기
//int map[100][100];
//int k; //사과의 개수
//int l; //회전할방향 개수
//int head_x, head_y;
//int tail_x, tail_y;
//int dir=0; //현재방향
//int d[4][2] = { {0,1},{-1,0},{0,-1},{1,0} };//동북서남
//int cnt;//시간
//
//queue<pair<int, char>> rot; //방향이 담겨져있는 큐
//queue<pair<int, int>>snake; //뱀이 현재 좌표들이 담겨져있는 큐
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < n);
//}
//
//int main() {
//	//맵크기 입력
//	cin >> n;
//	
//
//	//사과 좌표입력
//	cin >> k;
//	for (int i = 0; i < k; i++) {
//		int x, y; //사과의 위치
//		cin >> x >> y;
//		map[x-1][y-1] = 1; //사과가있는곳을 1 로 표현
//	}
//	//방향 입력
//	cin >> l;
//	for (int i = 0; i < l; i++) {
//		int X;
//		char C;
//		cin >> X >> C;
//		rot.push(pair<int, char>(X,C));
//	}
//
//
//	head_x = 0, head_y = 0, tail_x = 0, tail_y = 0;
//	map[0][0] = 2;
//
//	//매초마다 뱀이동
//	while (1) {
//		cnt++;
//
//		//머리를 늘려, 머리를 다음칸에 이동할 위치
//		head_x += d[dir][0];
//		head_y += d[dir][1];
//
//		//탈출조건: 벽이거나, 뱀의몸에 부딪히거나
//		if (!isInside(head_x, head_y) )
//			break;
//		if (map[head_x][head_y] == 2)
//			break;
//
//		//머리이동
//		snake.push(pair<int, int>(head_x, head_y));
//
//		//사과가 없다면
//		if(map[head_x][head_y]==0)  {
//			//꼬리가 위치한칸을 비우고
//			map[tail_x][tail_y] = 0;
//			//꼬리이동
//			tail_x = snake.front().first;
//			tail_y = snake.front().second;
//			snake.pop();
//		}
//		//뱀이있는곳을 2로표현 
//		map[head_x][head_y] = 2;
//
//		
//		//마지막에 방향회전
//		//뱀의 방향 변환 시간이 됬다면 회전
//		if (!rot.empty()) {
//			if (cnt == rot.front().first) {
//				//반시계 방향으로 회전
//				if (rot.front().second == 'L') {
//					dir = ((dir + 1) % 4);
//
//				}
//				//시계 방향으로 회전
//				else {
//					dir = ((dir + 3) % 4);
//				}
//				rot.pop();
//			}
//		}
//
//	}
//
//
//	cout << cnt;
//
//
//}