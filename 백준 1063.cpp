////����: ŷ
////�˰���: ����
//
//#include<iostream>
//#include<map>
//using namespace std;
//int board[8][8];
//int N;
//map<char, int> m;
//map<int, char> a;
//int king_x, king_y;
//int stone_x, stone_y;
//int dir[8][2] = { {0,1},{0,-1},{-1,0},{1,0},{1,1},{1,-1},{-1,1},{-1,-1} };
//
//bool isInside(int a, int b) {
//	return (a > 0 && a <= 8) && (b > 0 && b <= 8);
//}
//int main() {
//	m['A'] = 1; m['B'] = 2; m['C'] = 3; m['D'] = 4; m['E'] = 5; m['F'] = 6; m['G'] = 7; m['H'] = 8;
//	a[1] = 'A'; a[2] = 'B'; a[3] = 'C'; a[4] = 'D'; a[5] = 'E'; a[6] = 'F'; a[7] = 'G'; a[8] = 'H';
//	string king;
//	string stone;
//	cin >> king >> stone >> N;
//	//ŷ�� �ִ°�1, �����ִ°� 2
//	king_x = king[1]-'0'; king_y = m[king[0]];
//	stone_x = stone[1]-'0'; stone_y = m[stone[0]];
//	
//
//	board[king_x][king_y] = 1;
//	board[stone_x][stone_y] = 2;
//
//	for (int i = 0; i < N; i++) {
//
//		string move;
//		cin >> move;
//		int d=0;
//		int king_nx=0, king_ny=0, stone_nx=0, stone_ny=0;
//		if (move == "R") d = 0;
//		else if (move == "L") d = 1;
//		else if (move == "B") d = 2;
//		else if (move == "T") d = 3;
//		else if (move == "RT") d = 4;
//		else if (move == "LT") d = 5;
//		else if (move == "RB") d = 6;
//		else if (move == "LB") d = 7;
//		
//		//ŷ�� �̵�����ǥ
//		king_nx = king_x + dir[d][0];
//		king_ny = king_y + dir[d][1];
//		
//		//ŷ�� �̵�����ġ�� ������̶��
//		if (isInside(king_nx, king_ny)) {
//			//ŷ�� �̵�����ġ�� �����ִٸ� ���� �̵�����ǥ ����
//			if (board[king_nx][king_ny] == 2) {
//				stone_nx += stone_x + dir[d][0];
//				stone_ny += stone_y + dir[d][1];
//				if (isInside(stone_nx, stone_ny)) {
//					board[king_x][king_y] = 0;
//					board[king_nx][king_ny] = 1;
//					board[stone_nx][stone_ny] = 2;
//					king_x = king_nx;
//					king_y = king_ny;
//					stone_x = stone_nx;
//					stone_y = stone_ny;
//				}
//
//			}
//
//			//���ٸ� �׳��̵�
//			else {
//				{
//					board[king_x][king_y] = 0;
//					board[king_nx][king_ny] = 1;
//					king_x = king_nx; 
//					king_y = king_ny;
//				}
//
//			}
//		}
//
//
//	}
//	cout << a[king_y]<<king_x <<endl;
//	cout << a[stone_y]<<stone_x << endl;
//}
