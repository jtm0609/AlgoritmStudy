////문제: 주사위굴리기
////알고리즘: 시뮬레이션
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//
//int n, m; //가로 세로
//int x, y; //주사위 위치
//int command_count;
//int map[20][20];
//queue<int> command_q;
//int dir[5][2] = { {},{0,1},{0,-1},{-1,0},{1,0} }; //동서북남
//
//struct dice {
//	//주사위의 윗면, 아랫면, 왼쪽면, 오른쪽면, 앞면 ,뒷면
//	int up, down, left, right, front, back; 
//};
//
////배열조건 검사
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//
//int main() {
//	struct dice dice = { 0,0,0,0 };
//
//	//맵 정보 입력
//	cin >> n >> m >>x>>y>> command_count;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//		
//	}
//	//명령어 정보 입력
//	for(int i=0; i< command_count; i++){
//		int command;
//		cin >> command;
//		command_q.push(command);
//	}
//	
//
//	//명령어 하나씩꺼냄
//	while (!command_q.empty()) {
//		int command = command_q.front();
//		command_q.pop();
//	
//		int nx, ny;
//
//		//주사위 이동
//		nx =x+ dir[command][0];
//		ny =y+ dir[command][1]; 
//
//		//배열안에있으면
//		if (isInside(nx, ny)) {
//			x = nx;
//			y = ny;
//		}
//		//없다면 무시 -> continue
//		else {
//			continue;
//		}
//			
//		//주사위의 면들이 값이 바뀌므로 사전에 임시로 값을 저장해놈
//		int temp_u = dice.up;
//		int temp_d = dice.down;
//		int temp_l = dice.left;
//		int temp_r=dice.right;
//		int temp_f = dice.front;
//		int temp_b = dice.back;
//		//동
//		if (command == 1) {
//			//북->동
//			//동->남
//			//남->서
//			//서->북
//			dice.up = temp_r;
//			dice.right = temp_d;
//			dice.down = temp_l;
//			dice.left = temp_u;
//		}
//		//서
//		else if (command == 2) {
//			//동->북
//			//남->동
//			//서->남
//			//북->서
//			dice.right = temp_u;
//			dice.down = temp_r;
//			dice.left = temp_d;
//			dice.up = temp_l;
//
//		}
//		//북
//		else if (command == 3) {
//			//북->뒤
//			//뒤->남
//			//남->앞
//			//앞->북
//			dice.up = temp_b;
//			dice.back = temp_d;
//			dice.down = temp_f;
//			dice.front = temp_u;
//
//		}
//		//남
//		else if (command == 4) {
//			//북->앞
//			//앞->남
//			//남->뒤
//			//뒤->북
//			dice.up = temp_f;
//			dice.front = temp_d;
//			dice.down = temp_b;
//			dice.back = temp_u;
//
//
//		}
//		
//		//맵의 값이 0이면 주사위의 아랫면의값을 맵에대입
//		if (map[x][y] == 0) {
//			map[x][y]=dice.down;
//		}
//		//맵이 값이 0이아니면, 맵의값을 주사위의 아랫면으로 대입 후 맵의 값 0 초기화
//		else if (map[x][y] != 0) {
//			dice.down = map[x][y];
//			map[x][y] = 0;
//		}
//
//		//주사위 윗면 출력
//		cout << dice.up << "\n";
//
//	}
//}