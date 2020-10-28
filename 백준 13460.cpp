////https://dragonitecio.tistory.com/768
////�ؼ�Ǯ�̺��� Ǯ����
//����: ����Ż��2
//�˰���: bfs
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//int W, H;
//int cnt; //�������� ������Ƚ��
//int rx, ry, bx, by;
//int nrx, nry, nbx, nby;
//int orx, ory, obx, oby;
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//int visit[12][12][12][12];
//
//struct point {
//	int rx, ry, bx, by;
//};
//queue<point> q;
//vector<string>map;
//int ans;
//
//
//
//void bfs() {
//	while (!q.empty()) {
//		int qSize = q.size();
//		while (qSize--) {
//			//�̵��ϱ��� ����,�Ķ����� ��ǥ
//			orx = q.front().rx;
//			ory = q.front().ry;
//			obx = q.front().bx;
//			oby = q.front().by;
//			q.pop();
//
//			//�̵��ϱ����� ����������ǥ�� ���ۿ��ְ� �Ķ����� ���ۿ����ٸ� Ż��
//			if (map[orx][ory] == 'O' && map[obx][oby] != 'O') {
//				ans = cnt;
//				return;
//			}
//
//			//�̵�
//			for (int i = 0; i < 4; i++) {
//				rx = orx;
//				ry = ory;
//				bx = obx;
//				by = oby;
//
//				//���� �� �̵�
//				while (1) {
//					nrx = rx + dx[i];
//					nry = ry + dy[i];
//					//���� ���� ���� �����ų�, ���ۿ� ���� Ż��
//					if (map[nrx][nry] == '#' || map[rx][ry] == 'O')
//						break;
//					rx = nrx;
//					ry = nry;
//				}
//
//				//�Ķ� �� �̵�
//				while (1) {
//					nbx = bx + dx[i];
//					nby = by + dy[i];
//					//�Ķ� ���� ���� �����ų�, ���ۿ� ���� Ż��
//					if (map[nbx][nby] == '#' || map[bx][by] == 'O')break;
//					bx = nbx;
//					by = nby;
//				}
//
//				//���� ���� �Ķ����� ��ǥ�� ���ٸ� �̵��ϱ��� ��ǥ�� ����ؼ� ������
//				
//				if (rx == bx && ry == by) {
//					//�Ķ����� ���ۿ� ���� �ȵǹǷ�, continue�ؼ� �ٽ��̵�
//					if (map[bx][by] == 'O') continue;
//					if(abs(orx-rx)+ abs(ory-ry)> abs(obx-bx) + abs(oby-by)){
//						rx -= dx[i];
//						ry -= dy[i];
//					}
//					else {
//						bx -= dx[i];
//						by -= dy[i];
//					}
//				}
//
//				//���� �̵��ߴ��������� ���̵��ϸ� �ٽ� �Ųٷΰ��������̹Ƿ� continue�� �ٽ��̵�
//				if (visit[rx][ry][bx][by]) continue;
//				visit[rx][ry][bx][by] = 1;
//
//				//�ٽ� bfs
//				q.push({ rx,ry,bx,by });
//
//
//			}
//		}
//		if (cnt == 10) {
//			ans = -1;
//			return;
//		}
//		cnt++;
//	}
//
//	//ť������ �����°��
//	ans = -1;
//	return;
//}
//
//
//int main() {
//	
//	//�Էºκ�
//	cin >> W >> H;
//	for (int i = 0; i < W; i++) {
//		string str;
//		cin >> str;
//		map.push_back(str);
//		for (int j = 0; j < H; j++) {
//			if (map[i][j] == 'R') {
//				rx = i;
//				ry = j;
//				map[i][j] = '.';
//			}
//			else if (map[i][j] == 'B') {
//				bx = i;
//				by = j;
//				map[i][j] = '.';
//			}
//		}
//	}
//
//	visit[rx][ry][bx][by] = 1;
//	q.push({ rx,ry,bx,by });
//	bfs();
//	cout << ans;
//}