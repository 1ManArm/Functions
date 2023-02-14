#include <iostream>
//Функция, не возвращающая никаких значений и выводящая сообщение
void say_hello() {
	std::cout << "Hello world!\n";
	std::cout << "Bye world!\n";
}
//Функция, не возвращающая никаких значений, но принимающая два числа и выводящая их сумму
void print_sum(int num1, int num2) {
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
}
//Функция, возвращающая сумму двух переданных в нее чисел
int sum(int num1, int num2) {
	//int tmp = num1 + num2;
	return num1 + num2; //Вернуть значение переменной (сумму num1 и num2)
}
//Вывод массива в консоль
void print_arr(int array[]) {
	std::cout << '[';
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << ", ";
	std::cout << "\b\b]\n";
}
//Поиск суммы элементов массива
int sum_arr(int array[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum;
}
//Удвоение
void x2(int num) {
	num *= 2;
}

void arr_x2(int arr[]) {
	arr[3] *= 2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//Функции void
	
	/*say_hello(); //тип void без параметров
	say_hello(); 
	say_hello(); 
	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	print_sum(n, m); //тип void с параметрами
	print_sum(10, 7);*/

	/*std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	int result = sum(n, m);//Запись в переменную result результата работы функции sum
	std::cout << n << " + " << m << " = " << result;*/

	//Функции и массивы
	/*const int size = 5;
	int arr[size]{ 7, 2, 1, 11, 9 };
	std::cout << "Массив:\n";
	print_arr(arr);
	std::cout << "Сумма элементов массива:\n" << sum_arr(arr, size) << std::endl;*/

	//Передача данных в функцию
	n = 10;
	x2(n); // где n - аргумент функции
	std::cout << n << '\n'; // 10

	int mass[5]{ 10, 20, 30, 40, 50 };
	x2(mass[3]);
	std::cout << mass[3] << '\n';
	arr_x2(mass);
	std::cout << mass[3] << '\n';
	

	return 0;
}