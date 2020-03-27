#include"Func.h"

int arr[SIZE_ARR];

void FillRand(int start, int end) {

for (int i = 0; i < SIZE_ARR; i++)
	arr[i] = start + rand() % ((end - start) + 1);

}
void  ShowArr() {
	for (int i = 0; i < SIZE_ARR; i++) {
		cout << arr[i] << " ";
		Sleep(500);
	}
	cout << endl;
}
void SearchingElem(int elem) {
	bool res = false;
	for (int i = 0; i < SIZE_ARR; i++) {
		if (arr[i] == elem) {
			cout << i << " index.\n";
			return;
		}
	}
	cout << "Entered elem doesn't find.\n";
}
void AvgArr() {
	double avg = 0;
	for (int i = 0; i < SIZE_ARR; i++)
		avg += arr[i];
	avg /= SIZE_ARR;
	cout << "Avgerage = " << avg << endl;
}
void Multiples() {
	int count = 0;
	for (int i = 0; i < SIZE_ARR; i++)
		if (arr[i] % 5 == 0 && arr[i]!=0)
			count++;
	cout << "Number of multiples of 5 = " << count << endl;
}
void Bubble(int order) {
	for (int i = 0; i < SIZE_ARR - 1; i++) {
		for (int j = 0; j < SIZE_ARR - 1; j++) {
			if (order == 1) {
				if (arr[j] > arr[j + 1])
					swap(arr[j], arr[j + 1]);
			}
			else if (order == 2) {
				if (arr[j] < arr[j + 1])
					swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void Insert(int order) {
	int tmp, j;
	for (int i = 1; i < SIZE_ARR; i++) {
		tmp = arr[i];
		j = i - 1;
		if (order == 1) {
			while (j >= 0 && tmp < arr[j]) {
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				j--;
			}
		}
		else if (order == 2) {
			while (j >= 0 && tmp > arr[j]) {
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				j--;
			}
		}

	}
}
void Select(int order) {
	for (int i = 0; i < SIZE_ARR - 1; i++) {
		for (int j = i + 1; j < SIZE_ARR; j++) {
			if (order == 1) {
				if (arr[i] > arr[j])
					swap(arr[i], arr[j]);
			}
			else if (order == 2) {
				if (arr[i] < arr[j])
					swap(arr[i], arr[j]);
			}
		}
	}
}

void Shift(int shift, int direction) {
	int tmp;
	if (direction == 1) {		
		for (int k = 0; k < shift; k++) {
			tmp = arr[0];
			for (int i = 1; i < SIZE_ARR; i++) {
				arr[i - 1] = arr[i];
			}
			arr[SIZE_ARR - 1] = tmp;
		}
	}

	else if (direction == 2) {
		for(int k = 0; k < shift; k++){
			tmp = arr[SIZE_ARR - 1];
			for (int i = SIZE_ARR - 1; i >= 0; i--) {
				arr[i] = arr[i - 1];
		}
			arr[0] = tmp;
     }
	}
}
