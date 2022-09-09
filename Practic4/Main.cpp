#include <iostream>
using namespace std;

template <typename T>
void show_arr(T arr[], const int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

// ������ 1
template <typename T>
void clear_arr(T arr[], const int lenght, T n) {
	cout << "[";
	for (int i = 0; i < lenght; i++) {		
		if (arr[i] == n)
			arr[i] = 0;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
}

// ������ 2
int index_sum(int array[], int array2[], const int lenght, int ind) {
	int index = 0;
	if (ind > lenght - 1 || ind < 0) {
		cout << "Error!\n";
		return 0;
	}
	for (int i = 0; i < lenght; i++)	
		index = array[ind] + array2[ind];
		return index;
}

// ������ 3
template <typename T>
void mean_arr(T arr[], const int lenght) {
	double min = arr[0];
	double max = arr[0];
	for (int i = 0; i < lenght; i++) {
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	cout << "����������� ����� � ������� = " << min << endl;
	cout << "������������ ����� � ������� = " << max << endl;
	cout << "������� �������������� ������������ � ������������� �����: " << (max + min) / 2 << endl;
}

// ������ 4
void prime_range(int A, int B) {
	for (int i = A; i <= B; i++) {
		for (int j = 2; j < B; j++) {
			if (i % j == 0) {
				if (i != j)
					break;
				cout << i << "\n";
				break;
			}
		}
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	double n, index, m;

	// ������ 1
	cout << "������ 1.\n";	
	const int size = 6;
	double arr[size] = { 2.0, -4.0, 5.5, 3.14, 2.0, 2.0 };
	cout << "����������� ������:\n";
	show_arr(arr, size);
	cout << "������� �����: ";
	cin >> n;
	cout << "�������� ������:\n";
	clear_arr(arr, size, n);
	cout << "\n\n";

	// ������ 2	
	cout << "������ 2.\n";
	const int size2 = 4;
	int arr2[size2] = { 2, 7, 4, 8 };
	int arr3[size2] = { 4, 2, 1, 9 };
	cout << "����������� �������:\n";
	show_arr(arr2, size2);
	show_arr(arr3, size2);
	cout << "������� ������: ";
	cin >> n;
	cout << "����� �������� ������� ��� ������ " << n << " = " << index_sum(arr2, arr3, size2, n) << "\n\n";	

	// ������ 3
	cout << "������ 3.\n";
	cout << "����������� ������:\n";
	const int size4 = 5;
	double arr4[size4] = { -4, -9.4, 0.0, 8.14, 2.1 };
	show_arr(arr4, size4);
	mean_arr(arr4, size4);
	cout << "\n\n";

	// ������ 4
	cout << "������ 4\n������� ������ ���������: ";
	cin >> n;
	cout << "������� ����� ���������: ";
	cin >> m;
	prime_range(n, m);

	
	return 0;
}