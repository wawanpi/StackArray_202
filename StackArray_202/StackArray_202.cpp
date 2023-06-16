#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	StackArray() {
		top = -1;
	}

	void push() {
		cout << "\nEnter an Element.";
		int element;
		cin >> element;


		if (top == 4) {		// step 1
			cout << "Number of data exceeds the limit." << endl;
			return;
		}

		top++;
		stack_array[top] = element;	//step3
		cout << endl;
		cout << "'" << element << "'" << " Ditambahkan(pushed)" << endl;

	}

	void pop() {
		if (empty()) {		//step 1
			cout << "\nStack is empty. Cannot pop." << endl;	//1.a
			return;		//1.b
		}

		cout << "\nThe popped element is: " << stack_array[top] << endl;	// step 2
		top--;	//step 3 decrement
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\n***Stack Menu***\n";
		cout << "1, Push\n";
		cout << "2. Pop\n";
		cout << "3. Display\n";
		cout << "4, Exit\n";
		cout << "\nEnter your choice: ";
		cin >> ch;
		switch (ch) {
		case '1': {
			s.push();
			break;
		}
		case '2':
			if (s.empty()) {
				cout << "\nStack is empty." << endl;
				break;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\nInvalid choice" << endl;
			break;
		}
	}
}