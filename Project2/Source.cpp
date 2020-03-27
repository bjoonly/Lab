#include"Func.h"

int main() {
	int start, end,action,elem,order,alg_sort,shift,direction;
	srand(time(0));
	do {
		CLEAR
		cout << "Enter action:\n1.Fill rand\n2.Show array\n3.Searching elem"
			"\n4.Sorting array\n5.Average array\n6.Mutiples 5\n7.Shift array"
			"\n8.Exit\n";
		cin >> action;
		CLEAR
		switch (action) {
		case 1:
			
			cout << "Enter the begin of the range->_";
			cin >> start;
			CLEAR
			cout << "Enter end of range->_";
			cin >> end;
			CLEAR
			FillRand(start, end);
			cout << "Array successfully filled with random numbers.\n";
			SLEEP
			break;
		case 2:
			ShowArr();
			cout << "Press space to continue.\n";
			while (_getch() != 32);
			break;
		case 3:
			cout << "Enter elem->_";
			cin >> elem;
			CLEAR
			SearchingElem(elem);
			cout << "Press space to continue.\n";
			while (_getch() != 32);
			break;
		case 4:
			cout << "Enter sort order(1-increase/2-decrease)->_";
			cin >> order;
			system("cls");
			cout << "Enter the algorithm number(1-bubble/2-insert/3-select)->_";
			cin >> alg_sort;
			if (alg_sort == 1)
				Bubble(order);
			else if (alg_sort == 2)
				Insert(order);
			else
			Select(order);
			CLEAR
				cout << "Array successfully sorted.";
			SLEEP
			break;
		case 5:
			AvgArr();
			cout << "Press space to continue.\n";
			while (_getch() != 32);
			break;
		case 6:
			Multiples();
			cout << "Press space to continue.\n";
			while (_getch() != 32);
			break;
		case 7:
			do {
				CLEAR
				cout << "Enter shift->_";
				cin >> shift;
				if (shift<0 || shift >SIZE_ARR) {
					cout << "Invalid value.";
					SLEEP
			  }
			} while (shift<0 || shift >SIZE_ARR);
			do {
				CLEAR
				cout << "Enter direction(1-left/2-right)->_";
				cin >> direction;
				if (direction != 1 && direction != 2) {
					cout << "Invalid value.";
					SLEEP
				}
			} while (direction != 1 && direction != 2);
			Shift(shift, direction);
			CLEAR
			cout << "Array successfully shifted.";
			SLEEP
			break;
		case 8:
			cout << "Bye.";
			break;
		default:
			cout << "Invalid value.";
			SLEEP
		}


	} while (action != 8);
}