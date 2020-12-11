//문제: 카드 1
//알고리즘: 구현 , 덱

#include<iostream>
#include<deque>
using namespace std;
int n;
deque<int> card;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		card.push_back(i);
	}

	while (card.size() > 1) {
		int temp = card.front();
		card.pop_front();
		cout << temp<<" ";

		if (card.size() != 1) {
			temp = card.front();
			card.pop_front();
			card.push_back(temp);
		}

	}

	cout << card.front();
}
