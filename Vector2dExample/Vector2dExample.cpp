// Vector2dExample.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Vector2d.h"
using namespace std;

int main()
{
	Vector2d a = Vector2d(5, 5);
	Vector2d b = Vector2d(10, 10);
	cout << "Vetor а: ";
	cout << (string)a << endl;
	cout << "Vetor b: ";
	cout << (string)b << endl;
	cout << "Inctrement vetor a: ";
	a++;
	cout << (string)a << endl;
	cout << "Lenght of vector a: ";
	cout << a.length() << endl;
	cout << "Multiply of vectors: ";
	cout << a * b << endl;
	
	
	


	

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
