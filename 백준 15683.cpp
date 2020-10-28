////����: ����
////�˰���: ���Ʈ����(dfs)
////https://kevinthegrey.tistory.com/163 �����Ͽ�Ǯ����
////���� cctv�� ������ ��ǥ�� �ľ�����, ��cctv��ǥ���������� Ǯ�����.
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
//int rotation[] = { NULL,4,2,4,4,1 }; // ��CCTV�� ȸ��Ƚ��
//
//struct CCTV
//{
//	int type, x, y;
//
//};
////cctv�� �ִ� 8��
//CCTV cctv[8];
//
////�ѹ����� -1(#)�� �����ϴ��Լ�
//void update(int dir, CCTV cctv) {
//	//cctv�� �������� dir���⿡ ���� üũ����
//	//dir->  0:��, 1:�� ,2:��, 3:��
//	dir %= 4;
//	//����
//	if (dir == 0) {
//		for (int j = cctv.y+1; j < M; j++) {
//			if (map[cctv.x][j] == 6) break;
//			map[cctv.x][j] = -1;
//		}
//	}
//	//����
//	else if (dir == 1) {
//		for (int i = cctv.x - 1; i >= 0; i--) {
//			if (map[i][cctv.y] == 6)
//				break;
//			map[i][cctv.y] = -1;
//		}
//	}
//
//	//����
//	else if (dir == 2) {
//		for (int j = cctv.y - 1; j >= 0; j--) {
//			if (map[cctv.x][j] == 6)
//				break;
//			map[cctv.x][j] = -1;
//		}
//	}
//	
//	//����
//	else if (dir == 3) {
//		for (int i = cctv.x + 1; i < N; i++) {
//			if (map[i][cctv.y] == 6)
//				break;
//			map[i][cctv.y] = -1;
//		}
//	}
//}
//
////��� ����Ǽ� ����Ž��
//void dfs(int cctv_idx) {
//
//	if (cctv_idx == cctv_size) {
//		int cnt = 0;
//		//0�ǰ���
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
//	//dir < rotation[type]: ��cctvŸ�Կ��´� ȸ��Ƚ���� ����������
//	for (int dir = 0; dir < rotation[type]; dir++) {
//
//		//map ���
//		//�����迭�� �ӽù迭�� ������ ��Ʈ��ŷ�� ����������
//		memcpy(backup,map,sizeof(map));
//
//		//map ������Ʈ
//		//update�Լ��� �� ���⸸ �����ϴ� �Լ�
//		//���� ���Լ��� �ʿ信 �°� ȣ�����ָ��
//
//		//cctv1��
//		if (type == 1) {
//			update(dir, cctv[cctv_idx]);
//		}
//		//cctv2��: �⺻����� �� 180�� �ݴ������ ������
//		else if (type == 2) {
//			update(dir, cctv[cctv_idx]);
//			update(dir + 2, cctv[cctv_idx]);
//		}
//		//cctv3��: �⺻����� 90�������� ������
//		else if (type == 3) {
//			update(dir, cctv[cctv_idx]);
//			update(dir + 1, cctv[cctv_idx]);
//		}
//		//cctv4��: �⺻����� 90��, 180�� ������ ������
//		else if (type == 4) {
//			update(dir, cctv[cctv_idx]);
//			update(dir+1, cctv[cctv_idx]);
//			update(dir + 2, cctv[cctv_idx]);
//		}
//		//cctv5��: ������ ��ΰ���
//		else if (type == 5) {
//			update(dir, cctv[cctv_idx]);
//			update(dir + 1, cctv[cctv_idx]);
//			update(dir + 2, cctv[cctv_idx]);
//			update(dir + 3, cctv[cctv_idx]);
//
//		}
//		dfs(cctv_idx + 1);
//
//		//��Ʈ��ŷ :map����
//		memcpy(map, backup, sizeof(backup));
//
//	}
//
//}
//
//int main() {
//	//�Է�
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//			//cctv���(�ִ� 8����)
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