//#include <iostream>
//#include <sstream>
//#include<algorithm>
//
//using namespace std;
//int map[101];
//
//void solution(int day, int width, int** blocks) {
//	// TODO: 이곳에 코드를 작성하세요. 추가로 필요한 함수와 전역변수를 선언해서 사용하셔도 됩니다.
//	int day_cnt = 0;
//	int cmt=0;
//	
//	while (day_cnt < day) {
//		//벽돌쌓기
//		for (int i = 0; i < width; i++)
//			map[i] += blocks[day_cnt][i];
//		for(int i=0; i<width; i++){
//		//탐색
//		for (int j = 1; j < width - 1; j++) {
//			int min_value = 0;
//			//중간에있는벽이 왼쪽오른쪽벽보다 작다면
//			if ((map[j] < map[j - 1]) && (map[j] < map[j + 1])) {
//				min_value = min(map[j - 1], map[j + 1]);
//				while (map[j] < min_value) {
//					map[j]++;
//					cmt++;
//				}
//
//			}
//			else if ((map[j] < map[j - 1]) && (map[j] == map[j + 1])) {
//				int idx = 0;
//				for (int k = j + 1; k < width - 1; k++) {
//					if (map[k] < map[k + 1]) {
//						min_value = min(map[j - 1], map[k + 1]);
//						idx = k + 1;
//					}
//					else if (map[k] == map[k + 1])
//						continue;
//
//					else
//						break;
//
//				}
//				for (int z = j; z < idx; z++) {
//					while (map[j] < min_value) {
//						map[j]++;
//						cmt++;
//					}
//				}
//
//
//			}
//		}
//		
//	}
//
//		day_cnt++;
//		cout << cmt<<endl;
//	}
//	cout << cmt;
//}
//
//struct input_data {
//	int day;
//	int width;
//	int** blocks;
//};
//
//void process_stdin(struct input_data& inputData) {
//	string line;
//	istringstream iss;
//
//	getline(cin, line);
//	iss.str(line);
//	iss >> inputData.day;
//
//	getline(cin, line);
//	iss.clear();
//	iss.str(line);
//	iss >> inputData.width;
//
//	inputData.blocks = new int* [inputData.day];
//	for (int i = 0; i < inputData.day; i++) {
//		getline(cin, line);
//		iss.clear();
//		iss.str(line);
//		inputData.blocks[i] = new int[inputData.width];
//		for (int j = 0; j < inputData.width; j++) {
//			iss >> inputData.blocks[i][j];
//		}
//	}
//}
//
//int main() {
//	struct input_data inputData;
//	process_stdin(inputData);
//
//	solution(inputData.day, inputData.width, inputData.blocks);
//
//	return 0;
//}