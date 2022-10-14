// Персональный шаблон
#include <iostream>

//встроенная фукнция
inline int sum(int num1, int num2) {
	return num1 + num2;
}
//т.к. функцию не удается встроить, она становится обычной функцией.
inline int sum_AB(int A, int B) {
	int res = 0;
	for (int i = A; i <= B; i++)
		res += i;
	return res;
}
//перегруженная функция
int max_val(int num1, int num2) {
	std::cout << "INT\n";
	return num1 > num2 ? num1 : num2;
}
int max_val(int num1, int num2, int num3) {
	std::cout << "THREE INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}
double max_val(double num1, double num2) {
	std::cout << "DOUBLE\n";
	return num1 > num2 ? num1 : num2;
}
float max_val(float num1, float num2) {
	std::cout << "FLOAT\n";
	return num1 > num2 ? num1 : num2;
}
//Шаблонная функция
template <typename T>
T abs(T num) {
	return num < 0 ? -num : num;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	/*
	std::cout << "Введите два числа: ";
	std::cin >> n >> m;
	std::cout << sum(n, m) << '\n';
	std::cout << sum_AB(n,m) << '\n';
	*/

	/*
	std::cout << max_val(4, 6) << '\n';
	std::cout << max_val(1.2, 1.1) << '\n';
	std::cout << max_val(5.5f,5.9f) << '\n';
	std::cout << max_val(4,7,6) << '\n';
	*/

	std::cout << abs(-5) << '\n';
	std::cout << abs(-7.4) << '\n';
	std::cout << abs(-1.1f) << '\n';





	return 0;
}