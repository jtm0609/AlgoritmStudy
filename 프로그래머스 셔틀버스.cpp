#include <string>
#include <vector>
#include<algorithm>
#include<iostream>

using namespace std;

string solution(int n, int t, int m, vector<string> timetable) {
	string answer = "";
	int s = timetable.size();
	vector <int> timetableN(s); //타임테이블을 분단위로 저장

	for (int i = 0; i < s; i++)
		timetableN[i] = 60 * atoi(timetable[i].substr(0, 2).c_str()) + atoi(timetable[i].substr(3, 2).c_str());

	sort(timetableN.begin(), timetableN.end());
	int time = 540; //출발시간
	int con; //콘이 탑승할 시간
	bool end_flag = false;
	for (int i = 1; i <= n; i++, time += t) {
		int mN = 0; //셔틀정원

		for (int j = 0; j < timetableN.size() && mN < m; j++) {
			if (timetableN[j] <= time) {
				if (mN == m - 1) // 그시간대의 셔틀이 한자리남았다면{
					if (i == n) { //+ 막차라면
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


