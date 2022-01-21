#include<iostream>

using namespace std;

int twenty_seven[20] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

int sum(int month) {
	int answer = 0;
	for (int i = 0; i < month; i++) {
		answer += twenty_seven[i];
	}
	return answer;
}

int main() {

	int month;
	int day;

	cin >> month >> day;

	
	month--;

	int answer = sum(month) + day;

	string answer_day[7] = { "SUN", "MON" , "TUE" , "WED" , "THU" , "FRI" ,"SAT"};

	//month ���ޱ����� ��� ���� ���ϱ� + day ���ϰ� 7�� ���� ������ mod ���� �����Ͽ� ��������.

	answer %= 7;
	cout << answer_day[answer] << endl;

	return 0;
}