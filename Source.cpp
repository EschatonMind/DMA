#include<iostream>
using namespace std;

int Largets(int arr[], int &n);
void main() {
	int n;
	cin >> n;
	int* a = new int[n]; // alocating dynamic array
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int largest = Largets(a, n);
	cout << largest;
	delete []a; // dealocating array
}

int Largets(int arr[], int &n) {
	int largest = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] > largest) {
			largest = arr[i];	
		}
	}
	return largest;
}