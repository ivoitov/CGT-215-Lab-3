#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int num = 0;
	int output;
	//Prompt for getting the number of interest, also making sure that it's not zero and not negative
	while (num <= 0) {
		cout << "Please enter the number you want a factorial of: " << endl;
		cin >> num;
		if (num <= 0) {
			cout << "Please enter a positive number: " << endl;
			cin >> num;
		}
	}

	output = num;
	//Operation for factorial
	for (int i = 1; i < num; i++) {
		output = output * i;
		cout << " * ";
		cout << i;
	}
	cout << " * " << num << endl;
	cout << "" << endl;
	cout << "This is your final answer: " << endl;
	cout << output << endl;

}
void arithmetic() {
	int startnum = 0;
	int output = 0;
	int dif = 0;
	int length = 0;
	int sum = 0;
	//Asking user for the 3 significant numbers and making sure that all 3 inputs from the user are positive
	while (dif <= 0) {
		cout << "Please enter the difference between the numbers in the series: " << endl;
		cin >> dif;
		if (dif <= 0) {
			cout << "Please enter a positive number: " << endl;
			cin >> dif;
		}
	}
	while (startnum <= 0) {
		cout << "Please enter the starting number in the series: " << endl;
		cin >> startnum;
		if (startnum <= 0) {
			cout << "Please enter a positive number: " << endl;
			cin >> startnum;
		}
	}
	while (length <= 0) {
		cout << "Please enter the total number of elements in the series: " << endl;
		cin >> length;
		if (length <= 0) {
			cout << "Please enter a positive number: " << endl;
			cin >> length;
		}
	}
	//Arithmetic calculation and output
	int tracker = startnum;
	for (int i = 1; i <= length; i++)
	{
		cout << " + " << tracker;
		sum += tracker;
		tracker = tracker + dif;
	}
	cout << " = " << sum;
	cout << "" << endl;
}
void geometric() {
	int startnum = 0;
	int length = 0;
	int multiplier = 0;
	//Gathering of all inputs making sure that the list length is positive
	cout << "Enter a number to start at: " << endl;
	cin >> startnum;
	cout << "Enter a number to multiply by each time :" << endl;
	cin >> multiplier;
	while (length <= 0) {
		cout << "Enter the number of terms in the series: " << endl;
		cin >> length;
		if (length <= 0) {
			cout << "Please enter a positive number: " << endl;
			cin >> length;
		}
	}
	int tracker = startnum;
	int sum = 0;
	//Operation for geometric sequence and output
	for (int i = 0; i < length; i++) {
		tracker = startnum * pow(multiplier, i);
		cout << tracker << " * ";
		sum += tracker;
	}
	cout << "" << endl;
	cout << "The final answer is: " << sum << endl;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}