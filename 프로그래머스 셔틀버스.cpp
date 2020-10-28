#include <string>
#include <vector>
#include<algorithm>
#include<iostream>

using namespace std;

string solution(int n, int t, int m, vector<string> timetable) {
	string answer = "";
	int s = timetable.size();
	vector <int> timetableN(s); //Ÿ�����̺��� �д����� ����

	for (int i = 0; i < s; i++)
		timetableN[i] = 60 * atoi(timetable[i].substr(0, 2).c_str()) + atoi(timetable[i].substr(3, 2).c_str());

	sort(timetableN.begin(), timetableN.end());
	int time = 540; //��߽ð�
	int con; //���� ž���� �ð�
	bool end_flag = false;
	for (int i = 1; i <= n; i++, time += t) {
		int mN = 0; //��Ʋ����

		for (int j = 0; j < timetableN.size() && mN < m; j++) {
			if (timetableN[j] <= time) {
				if (mN == m - 1) // �׽ð����� ��Ʋ�� ���ڸ����Ҵٸ�{
					if (i == n) { //+ �������
						con = timetableN[j] - 1;
						end_flag = true;
						break;
					}
			}
			else {
				timetableN.erase(timetableN.begin() + j);
				j--;
				mN++;
			}

		}

		if (end_flag == true)
			break;

		if (i == n && mN < m)
			con = time;

	}


	if (con / 60 < 10) {
		if (con % 60 < 10)
			return "0" + to_string(con / 60) + ":0" + to_string(con % 60);
		else
			return "0" + to_string(con / 60) + ":" + to_string(con % 60);
	}
	else {
		if (con % 60 < 10)
			return to_string(con / 60) + ":0" + to_string(con % 60);
		else
			return to_string(con / 60) + ":" + to_string(con % 60);
	}
	return answer;
}


