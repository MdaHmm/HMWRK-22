#include <iostream>


// Кодировка UTF-8

void fill_arr(int arr[], const int l) {
	for (int i{}; i < l; i++)
		arr[i] = i;
}

void show_arr(int arr[], const int l){
	std::cout << "[";
	for (int i{}; i < l; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
	std::cout << std::endl;
}

void my_pow(int *a, int b) {
	int tmp = *a;
	for (int i = 1; i < b; i++)
		*a *= tmp;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int n,m;

	const int s = 10;
	int arr[s];

	std::cout << "Задача 1.\nИзначальный массив:\n";
	fill_arr(arr, s);
	show_arr(arr, s);

	for (int i{ 0 }; i < s; i += 2)
		std::swap(*(arr + i), *(arr + i + 1));
	std::cout << "\nКонечный результат:\n";
	show_arr(arr, s);

	std::cout << "Задача 2.\nВведите число и желаемую степень для возведения -> ";
	std::cin >> n >> m;
	my_pow(&n, m);
	std::cout << "Результат = " << n;


	return 0;
}