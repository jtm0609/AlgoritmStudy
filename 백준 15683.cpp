////문제: 감시
////알고리즘: 브루트포스(dfs)
////https://kevinthegrey.tistory.com/163 참고하여풀었음
////먼저 cctv의 개수와 좌표를 파악한후, 그cctv좌표를기준으로 풀어나간다.
//
//
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int N, M;
//int map[8][8];
//int ans = 1234567890;
//int cctv_size;
//int rotation[] = { NULL,4,2,4,4,1 }; // 각CCTV의 회전횟수
//
//struct CCTV
//{
//	int type, x, y;
//
//};
////cctv는 최대 8개
//CCTV cctv[8];
//
////한방향을 -1(#)로 갱신하는함수
//void update(int dir, CCTV cctv) {
//	//cctv를 기준으로 dir방향에 대한 체크를함
//	//dir->  0:동, 1:북 ,2:서, 3:남
//	dir %= 4;
//	//동쪽
//	if (dir == 0) {
//		for (int j = cctv.y+1; j < M; j++) {
//			if (map[cctv.x][j] == 6) break;
//			map[cctv.x][j] = -1;
//		}
//	}
//	//북쪽
//	else if (dir == 1) {
//		for (int i = cctv.x - 1; i >= 0; i--) {
//			if (map[i][cctv.y] == 6)
//				break;
//			map[i][cctv.y] = -1;
//		}
//	}
//
//	//서쪽
//	else if (dir == 2) {
//		for (int j = cctv.y - 1; j >= 0; j--) {
//			if (map[cctv.x][j] == 6)
//				break;
//			map[cctv.x][j] = -1;
//		}
//	}
//	
//	//남쪽
//	else if (dir == 3) {
//		for (int i = cctv.x + 1; i < N; i++) {
//			if (map[i][cctv.y] == 6)
//				break;
//			map[i][cctv.y] = -1;
//		}
//	}
//}
//
////모든 경우의수 완전탐색
//void dfs(int cctv_idx) {
//
//	if (cctv_idx == cctv_size) {
//		int cnt = 0;
//		//0의개수
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (map[i][j] == 0)
//					cnt++;
//			}
//		}
//		if (ans > cnt)
//			ans = cnt;
//		return;
//
//	}
//
//	int backup[8][8];
//	int type = cctv[cctv_idx].type;
//
//	//dir < rotation[type]: 각cctv타입에맞는 회전횟수를 기준으로함
//	for (int dir = 0; dir < rotation[type]; dir++) {
//
//		//map 백업
//		//원본배열을 임시배열에 저장함 백트래킹때 백업해줘야함
//		memcpy(backup,map,sizeof(map));
//
//		//map 업데이트
//		//update함수는 한 방향만 갱신하는 함수
//		//따라서 이함수를 필요에 맞게 호출해주면됨
//
//		//cctv1번
//		if (type == 1) {
//			update(dir, cctv[cctv_idx]);
//		}
//		//cctv2번: 기본방향과 그 180도 반대방향을 감시함
//		else if (type == 2) {
//			update(dir, cctv[cctv_idx]);
//			update(dir + 2, cctv[cctv_idx]);
//		}
//		//cctv3번: 기본방향과 90도방향을 감시함
//		else if (type == 3) {
//			update(dir, cctv[cctv_idx]);
//			update(dir + 1, cctv[cctv_idx]);
//		}
//		//cctv4번: 기본방향과 90도, 180도 방향을 감시함
//		else if (type == 4) {
//			update(dir, cctv[cctv_idx]);
//			update(dir+1, cctv[cctv_idx]);
//			update(dir + 2, cctv[cctv_idx]);
//		}
//		//cctv5번: 전방향 모두감시
//		else if (type == 5) {
//			update(dir, cctv[cctv_idx]);
//			update(dir + 1, cctv[cctv_idx]);
//			update(dir + 2, cctv[cctv_idx]);
//			update(dir + 3, cctv[cctv_idx]);
//
//		}
//		dfs(cctv_idx + 1);
//
//		//백트래킹 :map복원
//		memcpy(map, backup, sizeof(backup));
//
//	}
//
//}
//
//int main() {
//	//입력
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//			//cctv라면(최대 8개임)
//			if (map[i][j] != 0 && map[i][j] != 6) {
//				cctv[cctv_size].x = i;
//				cctv[cctv_size].y = j;
//				cctv[cctv_size].type = map[i][j];
//				cctv_size++;
//			}
//		}
//
//	}
//	dfs(0);
//	cout << ans;
//}