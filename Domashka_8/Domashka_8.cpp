﻿// Domashka_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*
	int  i1, i2, i3, count=0;
	for (int i = 100; i <= 999; i++) {
		i1 = i / 100;
		i3 = i % 10;
		i2 = i % 100 - i3;
		if (i1 == i2 || i1 == i3 || i2 == i3) {
			count++;
		}
	}
	cout << " Количество повторяющихся чисел " << count;
	*/
	/*
	int i1, i2, i3, s, n=0, temp;
	for (int i = 100; i <= 999; i++) {
		s = 0;
		i3 = i % 10;
		temp = i / 10;
		i2 = temp % 10;
		i1 = temp / 10;
		if (i1 == i2 && i1 != i3) s++;
		if (i1 == i3 && i1 != i2) s++;
		if (i2 == i3 && i2 != i1) s++;
		if (s ==1) {
			cout << i << endl;
			n++;
		}

	}
	cout << "Количество чисел с 2мя совпадающими цифрами " << n;
	*/
	/*
	int i1, i2, i3, s, n = 0, temp;
	for (int i = 100; i <= 999; i++) {
		s = 0;
		i3 = i % 10;
		temp = i / 10;
		i2 = temp % 10;
		i1 = temp / 10;
		if (i1 != i2 && i1 != i3&&i2!=i3) s++;
		if (s == 1) {
			cout << i << endl;
			n++;
		}

	}
	cout << "Количество чисел с разными цифрами " << n;
	*/
	/*
	int n, nn1, newnum=0, k=1;
	cout << "Введите число." << endl;
	cin >> n;
		while (n > 0) {
		nn1 = n % 10;
		if (nn1 != 3 && nn1 != 6) {newnum = newnum+nn1 * k; k *= 10; }
		n = n / 10;
	}
		cout << newnum;
		*/
		/*
		int a, b;
		cout << "Введите число a." << endl;
		cin >> a;
		b = a;
		while (b >0) {
			if ((a % (b * b) == 0) && (a % (b * b * b) != 0)) { cout << b << endl; }
			b--;
		}
		*/
		/*
		int a, b;
		cout << "Введите число." << endl;
		cin >> a;
		b = pow((a+a+a),3);
		if (b==a*a) cout << "Куб суммы цифр введенного числа равен квадрату введенного числа." << endl;
		else cout << "Куб суммы цифр введенного числа не равен квадрату введенного числа." << endl;
		*/
		/*
		int a, b;
		cout << "Введите число" << endl;
		cin >> a;
		b = a;
		while (b > 0) {
			if (a % b == 0)
				cout << b << endl;
			b--;
		}
		*/
		/*
		int a, b,a1;
		cout << "Введите число 1" << endl;
		cin >> a;
		cout << "Введите число 2" << endl;
		cin >> b;
		if (a > b) a1 = b;
		else a1 = a;
		while (a1 > 0) {
			if ((a % a1 == 0)&&(b%a1==0))
				cout << a1 << endl;
			a1--;
		}
		*/

	int n;
	char l = '*', t = '-';
	cout << "Укажите номер фигуры для вывода на экран" << endl
		<< "1 - a\n2 - б\n3 - в\n4 - г\n5 - д\n6 - е\n7 - ж\n8 - з\n9 - и\n10 - к\n0 - выход\n";
	do {
		cin >> n;
		switch (n) {
		case 1: {
			for (int i = 0; i < 8; i++) {
				cout << string((8 - i), char(l)) << string(i, char(t));
				cout << endl;
			}
			break;
		}
		case 2: {
			for (int i = 1; i < 9; i++) {
				cout << string(i, char(l)) << string((8 - i), char(t));
				cout << endl;
			}
			break;
		}
		case 3: {
			int m = 0;
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9 - i; j++) {
					if (j >=i) {
						cout << "*";
					}
					else cout << "-";
					m = j;
				}
				cout << string((9 - m), t);
				cout << "\n";
			}
			break;
		}

		case 4: {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (i >= j && i + j >= 9 - 1)
						cout << '*';
					else cout << "-";
				}
				cout << "\n";
			}
			break;
		}
		case 5: {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (i >= j && i + j >= 9 - 1|| i <= j && i + j <= 9 - 1)
						cout << '*';
					else cout << "-";
				}
				cout << "\n";
			}
			break;
		}
		case 6: {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (i > j && i + j > 9 - 1 || i < j && i + j < 9 - 1)
						cout << '-';
					else cout << '*';
				}
				cout << "\n";
			}
			break;
		}
		case 7: {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (i >= j && i + j <= 9 - 1)
						cout << '*';
					else cout << '-';
				}
				cout << "\n";
			}
			break;
		}
		case 8: {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (i + j >= 9 - 1 && i <= j)
						cout << '*';
					else cout << '-';
				}
				cout << "\n";
			}
			break;
		}
		case 9: {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (i + j > 9 - 1)
						cout << '-';
					else cout << '*';
				}
				cout << "\n";
			}
			break;
		}
		case 10: {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (i <= j)
						cout << '*';
					else cout << '-';
				}
				cout << "\n";
			}
			break;
		}
		}
	} while (n != 0);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
