#include <iostream>
#define N 100

using namespace std;

int top = 0;

struct arr
{
	string name = "0000\n";
	int id;
};

struct arr da[N];

void push(string input) { // 입장
	da[top].name = input;
	top++;
}

int pop() { //퇴장

	// 입력한 이름이 첫번째 대기열이 아닐 때 pop 불가. - 조건문 검사 필요
	int data1 = da[top].id;
	cout << "Pop : " << data1 << endl; \
		return 0;
}

void print() { // 대기열 출력
	cout << "대기열 : ";
	for (int i = 0; i < 100 && da[i].name != "0000\n"; i++)
	{
		cout << da[i].name << " ";
	}
	cout << endl << endl;
}

int main() {
	while (1) {

		int input;
		cout << "1.입장    2.퇴장    3.폐장" << endl << "입력 : ";
		cin >> input;

		if (input == 1) { // 입장
			string push_name;
			cout << "이름을 입력하세요 : ";
			cin >> push_name;
			push(push_name);
			print();
		}
		else if (input == 2) { // 퇴장
			pop();
		}
		else if (input == 3) { // 폐장
			return 0;
		}
		else {
			/*cout << endl;
			continue;*/

			// 큐 자료형 테스트를 위해 임시 코드변경.
			// 구조체의 인덱스를 하나씩 감소시킬 수 있는지

			/*cout << "0번째" << da[0].name << endl;
			cout << "1번째" << da[1].name << endl;*/

			for (int i = 0; i < 100 && da[i].name != "0000\n"; i++) {
				da[i] = da[i + 1];
				cout << i << "번째" << da[i].name << endl;
				/*cout << da[1].name << endl;*/
			}
			/*cout << "0번째" << da[0].name << endl;
			cout << "1번째" << da[1].name << endl;*/
		}
	}
}
