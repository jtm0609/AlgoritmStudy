//#include <iostream>
//#include <sstream>
//#include<algorithm>
//
//using namespace std;
//int map[101];
//
//void solution(int day, int width, int** blocks) {
//	// TODO: �̰��� �ڵ带 �ۼ��ϼ���. �߰��� �ʿ��� �Լ��� ���������� �����ؼ� ����ϼŵ� �˴ϴ�.
//	int day_cnt = 0;
//	int cmt=0;
//	
//	while (day_cnt < day) {
//		//�����ױ�
//		for (int i = 0; i < width; i++)
//			map[i] += blocks[day_cnt][i];
//		for(int i=0; i<width; i++){
//		//Ž��
//		for (int j = 1; j < width - 1; j++) {
//			int min_value = 0;
//			//�߰����ִº��� ���ʿ����ʺ����� �۴ٸ�
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