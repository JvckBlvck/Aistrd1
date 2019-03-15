// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "map.h"

int main()
{
	map<char> mytree;
	mytree.insert(13, 'a');
	mytree.insert(9, 'b');
	mytree.insert(12, 'c');
	mytree.insert(14, 'd');
	mytree.insert(7, 'f');
	mytree.insert(11, 'g');
	mytree.insert(23, 'h');
	mytree.insert(19, 'i');
	mytree.insert(1, 'j');
	mytree.insert(4, 'k');
	mytree.insert(6, 'l');
	mytree.remove(4);
	mytree.remove(9);
	mytree.remove(7);
	mytree.remove(19);
	mytree.remove(23);
	for (Iterator<char> *tmp = mytree.createBfsIterator(); tmp->hasNext(); tmp->next())
	if (tmp->current_color() != 'n')
			cout << tmp->current_key() << " ";
	cout << "\n";
	for (Iterator<char> *tmp = mytree.createBfsIterator(); tmp->hasNext(); tmp->next())
		if (tmp->current_color() != 'n')
			cout << tmp->current_data() << " ";
	cout << "\n";
	for (Iterator<char> *tmp = mytree.createBfsIterator(); tmp->hasNext(); tmp->next())
		if (tmp->current_color() != 'n')
			cout << tmp->current_color() << " ";
	cout << "\n";
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
