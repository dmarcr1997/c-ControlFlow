#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	int num = 0;
	cout << "Enter a positive integers to sum them enter -1 when finished\n";
	cout << "Enter -2 to reset sum to zero\n";
	do {
		cout << "Enter an integer: ";
		cin >> num;
		if (num == -2) {
			sum = 0;
			cout << "Reset Sum\n";
			continue;
		}
		if (sum > 100) {
			break; 
		}
		if (num != -1) {
			sum += num;
		}
	} while (num != -1);
	cout << "\nYour sum is " << sum << endl;
}