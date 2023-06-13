#include <iostream>
#define N 100

using namespace std;

int top = -1;
int arr[N];

void push(int data) {
	arr[top + 1] = data;
	top++;
}

int pop() {
	int data = arr[top];
	cout << "Pop : " << data << endl;
	return 0;
}

void print() {
	cout << "Instack : ";
	for (int i = 0; i <= top; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl << endl;
}

int main() {
	while (1) {
		cout << "1.push    2.pop    3.종료" << endl << "입력 : ";
		int a;
		cin >> a;

		if (a == 1) {
			int push_num;
			cout << "값을 입력하세요 : ";
			cin >> push_num;
			push(push_num);
			print();
		}
		else if (a == 2) {
			pop();
		}
		else if (a == 3) {
			return 0;
		}
		else {
			cout << endl;
			continue;
		}
	}
}
