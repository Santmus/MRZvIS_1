// Лабораторная работа №1 по дисциплине МРЗвИС
// Вариант 9
// Главная функция

//Библиотеки
#include "algorithm.h"
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int numPairs, first, second, checkPairs = 0;
	vector <Algor> vec;
	cout << "Количество пар чисел: "; cin >> numPairs;
	while (checkPairs != numPairs) { 
		cout << "\n" << checkPairs + 1 << " пара: " << "\n";
		while (true) {
			cout << "Введите первый множитель: "; cin >> first;
			if (first >= 0 && first <= 63) break;			//ограничение на использования до 6-и разрядных чисел
			else cout << "Множитель \"" << first << "\" не 6-разрядное" << endl;
		}
		while (true) {
			cout << "Введите второй множитель: "; cin >> second;
			if (second >= 0 && second <= 63) break;			//ограничение на использования до 6-и разрядных чисел
			else cout << "Множитель \""<< second << "\" не 6-разрядное"<< endl;
		}
		Algor pair(first, second);
		vec.push_back(pair);
		checkPairs++;
	}

	int choose;
	int counter = 1, tact = 0;
	while (true) {
		system("cls");
		cout << "Результат перевода с десятичной в двоичную систему" << endl;
		for (int i = 0; i < vec.size(); i++) {
			cout << "\t\t" << i + 1 << " пара: ";
			vec[i].showNum();
			cout << "*****************************************" << endl;
		}

		if (numPairs <= 3) {
			cout << "\n\n\n";
			cout << "-----------------------------------------------------------------------------------------" << endl;
			cout << " № такта  | частичное  произведение |          сдвиг          |     частичная сумма     |" << endl;
			cout << "-----------------------------------------------------------------------------------------" << endl;
		}
		if (numPairs == 1) {
			if (tact == 0) {
				cout << "  такт 1  |        "; vec[0].showTable(0);
				cout << "  такт 2  |        "; vec[0].showTable(0);
				cout << "  такт 3  |        "; vec[0].showTable(0);
				cout << "  такт 4  |        "; vec[0].showTable(0);
				cout << "  такт 5  |        "; vec[0].showTable(0);
				cout << "  такт 6  |        "; vec[0].showTable(0);
				cout << "-----------------------------------------------------------------------------------------" << endl;
			}
			else if (tact > 0) {
				cout << "  такт 1  |        "; if (tact - 1 >= 0 && tact == numPairs) {
					vec[tact - 1].showVector(0); cout << "        |          -----          |          -----          | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 2  |        "; if (tact - 2 >= 0 && tact - 1 == numPairs) {
					vec[tact - 2].showVector(3); cout << "        |        "; vec[tact - 2].showVector(1); cout << "        |          -----          | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 3  |        "; if (tact - 3 >= 0 && tact - 2 == numPairs) {
					vec[tact - 3].showVector(6); cout << "        |        "; vec[tact - 3].showVector(4); cout << "        |        "; vec[tact - 3].showVector(2); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 4  |        "; if (tact - 4 >= 0 && tact - 3 == numPairs) {
					vec[tact - 4].showVector(9); cout << "        |        "; vec[tact - 4].showVector(7); cout << "        |        "; vec[tact - 4].showVector(5); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 5  |        "; if (tact - 5 >= 0 && tact - 4 == numPairs) {
					cout << "  -----          |        ";  vec[tact - 5].showVector(10); cout << "        |        "; vec[tact - 5].showVector(8); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 6  |        "; if (tact - 6 >= 0 && tact - 5 == numPairs) {
					cout << "  -----          |          -----          |        "; vec[tact - 6].showVector(11); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "-----------------------------------------------------------------------------------------" << endl;
			}
		}

		if (numPairs == 2) {
			if (tact == 0) {
				cout << "  такт 1  |        "; vec[0].showTable(0);
				cout << "  такт 2  |        "; vec[0].showTable(0);
				cout << "  такт 3  |        "; vec[0].showTable(0);
				cout << "  такт 4  |        "; vec[0].showTable(0);
				cout << "  такт 5  |        "; vec[0].showTable(0);
				cout << "  такт 6  |        "; vec[0].showTable(0);
				cout << "  такт 7  |        "; vec[0].showTable(0);
				cout << "  такт 8  |        "; vec[0].showTable(0);
				cout << "  такт 9  |        "; vec[0].showTable(0);
				cout << "  такт 10 |        "; vec[0].showTable(0);
				cout << "-----------------------------------------------------------------------------------------" << endl;
			}
			else if (tact > 0) {
				cout << "  такт 1  |        "; if (tact - 1 >= 0 && tact + 1 == numPairs) {
					vec[tact - 1].showVector(0); cout << "        |          -----          |          -----          | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 2  |        "; if (tact - 2 >= 0 && tact == numPairs) {
					vec[tact - 2].showVector(3); cout << "        |        "; vec[tact - 2].showVector(1); cout << "        |          -----          | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 3  |        "; if (tact - 3 >= 0 && tact - 1 == numPairs) {
					vec[tact - 3].showVector(6); cout << "        |        "; vec[tact - 3].showVector(4); cout << "        |        "; vec[tact - 3].showVector(2); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 4  |        "; if (tact - 4 >= 0 && tact - 2 == numPairs) {
					vec[tact - 4].showVector(9); cout << "        |        "; vec[tact - 4].showVector(7); cout << "        |        "; vec[tact - 4].showVector(5); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 5  |        "; if (tact - 5 >= 0 && tact - 3 == numPairs) {
					vec[tact - 4].showVector(0); cout << "        |        "; vec[tact - 5].showVector(10); cout << "        |        "; vec[tact - 5].showVector(8); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 6  |        "; if (tact - 6 >= 0 && tact - 4 == numPairs) {
					vec[tact - 5].showVector(3); cout << "        |        "; vec[tact - 5].showVector(1); cout << "        |        "; vec[tact - 6].showVector(11); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 7  |        "; if (tact - 7 >= 0 && tact - 5 == numPairs) {
					vec[tact - 6].showVector(6); cout << "        |        "; vec[tact - 6].showVector(4); cout << "        |        "; vec[tact - 6].showVector(2); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 8  |        "; if (tact - 8 >= 0 && tact - 6 == numPairs) {
					vec[tact - 7].showVector(9); cout << "        |        "; vec[tact - 7].showVector(7); cout << "        |        "; vec[tact - 7].showVector(5); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 9  |        "; if (tact - 9 >= 0 && tact - 7 == numPairs) {
					cout << "  -----          |        ";  vec[tact - 8].showVector(10); cout << "        |        "; vec[tact - 8].showVector(8); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 10 |        "; if (tact - 10 >= 0 && tact - 8 == numPairs) {
					cout << "  -----          |          -----          |        "; vec[tact - 9].showVector(11); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);

				cout << "-----------------------------------------------------------------------------------------" << endl;
			}
		}

		if (numPairs == 3) {
			if (tact == 0) {
				cout << "  такт 1  |        "; vec[0].showTable(0);
				cout << "  такт 2  |        "; vec[0].showTable(0);
				cout << "  такт 3  |        "; vec[0].showTable(0);
				cout << "  такт 4  |        "; vec[0].showTable(0);
				cout << "  такт 5  |        "; vec[0].showTable(0);
				cout << "  такт 6  |        "; vec[0].showTable(0);
				cout << "  такт 7  |        "; vec[0].showTable(0);
				cout << "  такт 8  |        "; vec[0].showTable(0);
				cout << "  такт 9  |        "; vec[0].showTable(0);
				cout << "  такт 10 |        "; vec[0].showTable(0);
				cout << "  такт 11 |        "; vec[0].showTable(0);
				cout << "  такт 12 |        "; vec[0].showTable(0);
				cout << "  такт 13 |        "; vec[0].showTable(0);
				cout << "  такт 14 |        "; vec[0].showTable(0);
				cout << "-----------------------------------------------------------------------------------------" << endl;
			}
			else if (tact > 0) {
				cout << "  такт 1  |        "; if (tact - 1 >= 0 && tact + 2 == numPairs) {
					vec[tact - 1].showVector(0); cout << "        |          -----          |          -----          | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 2  |        "; if (tact - 2 >= 0 && tact + 1 == numPairs) {
					vec[tact - 2].showVector(3); cout << "        |        "; vec[tact - 2].showVector(1); cout << "        |          -----          | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 3  |        "; if (tact - 3 >= 0 && tact == numPairs) {
					vec[tact - 3].showVector(6); cout << "        |        "; vec[tact - 3].showVector(4); cout << "        |        "; vec[tact - 3].showVector(2); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 4  |        "; if (tact - 4 >= 0 && tact - 1 == numPairs) {
					vec[tact - 4].showVector(9); cout << "        |        "; vec[tact - 4].showVector(7); cout << "        |        "; vec[tact - 4].showVector(5); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 5  |        "; if (tact - 5 >= 0 && tact - 2 == numPairs) {
					vec[tact - 4].showVector(0); cout << "        |        "; vec[tact - 5].showVector(10); cout << "        |        "; vec[tact - 5].showVector(8); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 6  |        "; if (tact - 6 >= 0 && tact - 3 == numPairs) {
					vec[tact - 5].showVector(3); cout << "        |        "; vec[tact - 5].showVector(1); cout << "        |        "; vec[tact - 6].showVector(11); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 7  |        "; if (tact - 7 >= 0 && tact - 4 == numPairs) {
					vec[tact - 6].showVector(6); cout << "        |        "; vec[tact - 6].showVector(4); cout << "        |        "; vec[tact - 6].showVector(2); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 8  |        "; if (tact - 8 >= 0 && tact - 5 == numPairs) {
					vec[tact - 7].showVector(9); cout << "        |        "; vec[tact - 7].showVector(7); cout << "        |        "; vec[tact - 7].showVector(5); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);

				cout << "  такт 9  |        "; if (tact - 9 >= 0 && tact - 6 == numPairs) {
					vec[tact - 7].showVector(0); cout << "        |        "; vec[tact - 8].showVector(10); cout << "        |        "; vec[tact - 8].showVector(8); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 10 |        "; if (tact - 10 >= 0 && tact - 7 == numPairs) {
					vec[tact - 8].showVector(3); cout << "        |        "; vec[tact - 8].showVector(1); cout << "        |        "; vec[tact - 9].showVector(11); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 11 |        "; if (tact - 11 >= 0 && tact - 8 == numPairs) {
					vec[tact - 9].showVector(6); cout << "        |        "; vec[tact - 9].showVector(4); cout << "        |        "; vec[tact - 9].showVector(2); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 12 |        "; if (tact - 12 >= 0 && tact - 9 == numPairs) {
					vec[tact - 10].showVector(9); cout << "        |        "; vec[tact - 10].showVector(7); cout << "        |        "; vec[tact - 10].showVector(5); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 13 |        "; if (tact - 13 >= 0 && tact - 10 == numPairs) {
					cout << "  -----          |        ";  vec[tact - 11].showVector(10); cout << "        |        "; vec[tact - 11].showVector(8); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);
				cout << "  такт 14 |        "; if (tact - 14 >= 0 && tact - 11 == numPairs) {
					cout << "  -----          |          -----          |        "; vec[tact - 12].showVector(11); cout << "        | "; cout << endl;
				}
				else vec[0].showTable(0);

				cout << "-----------------------------------------------------------------------------------------" << endl;
			}
		}
		
		if (tact == numPairs * 4 + 2) {
			cout << "Кол-во пар: " << numPairs << "\tКол-во тактов: " << tact;
			break;
		}
		tact++;
		cout << "\nСледующий такт - 1\nВсе такты - 2\nВыход из программы - 3" << endl;
		while (true) {
			choose = _getch();
			if (choose == '1') break;
			if (choose == '2') {
				while (tact != numPairs * 4 + 2) {
					tact++;
				}
				break;

			}
			if (choose == '3') exit(0);
		}
	}

	cout << "\n\n\tРезультаты вычислений:" << endl;
	for (int i = 0; i < vec.size(); i++) {
		vec[i].calculationResult(i);
	}
}
