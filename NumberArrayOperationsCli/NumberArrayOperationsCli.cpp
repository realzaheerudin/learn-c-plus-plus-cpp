// NumberArrayOperationsCli.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <iomanip> 

using namespace std;

const int ARRAY_SIZE = 10; // Maximum size of the array 

// Function prototypes 
void display(int arr[], int size);
double getAverage(int arr[], int size);
int getLargest(int arr[], int size);
int getSmallest(int arr[], int size);
int getNumOccurrences(int arr[], int size, int num);

int main() {
	int array[ARRAY_SIZE] = { 3, 5, 1, 8, 2, 7, 3, 9, 4, 6 };
	int choice;

	do {
		// Display menu 
		cout << "Menu:" << endl;
		cout << "1. Display" << endl;
		cout << "2. Get Average" << endl;
		cout << "3. Get Largest" << endl;
		cout << "4. Get Smallest" << endl;
		cout << "5. Get Number of Occurrences" << endl;
		cout << "6. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			display(array, ARRAY_SIZE);
			break;
		case 2:
			cout << "Average: " << fixed << setprecision(2) << getAverage(array, ARRAY_SIZE) << endl;
			break;
		case 3:
			cout << "Largest: " << getLargest(array, ARRAY_SIZE) << endl;
			break;
		case 4:
			cout << "Smallest: " << getSmallest(array, ARRAY_SIZE) << endl;
			break;
		case 5:
			int num;
			cout << "Enter a number to find its occurrences: ";
			cin >> num;
			cout << "Occurrences of " << num << ": " << getNumOccurrences(array, ARRAY_SIZE, num) << endl;
			break;
		case 6:
			cout << "Exiting..." << endl;
			break;
		default:
			cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
		}

	} while (choice != 6);

	return 0;
}

// Function definitions 
void display(int arr[], int size) {
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

double getAverage(int arr[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

int getLargest(int arr[], int size) {
	int largest = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}
	return largest;
}

int getSmallest(int arr[], int size) {
	int smallest = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < smallest) {
			smallest = arr[i];
		}
	}
	return smallest;
}

int getNumOccurrences(int arr[], int size, int num) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == num) {
			count++;
		}
	}
	return count;
}
