#include <iostream>
//�������, �� ������������ ������� �������� � ��������� ���������
void say_hello() {
	std::cout << "Hello world!\n";
	std::cout << "Bye world!\n";
}
//�������, �� ������������ ������� ��������, �� ����������� ��� ����� � ��������� �� �����
void print_sum(int num1, int num2) {
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
}
//�������, ������������ ����� ���� ���������� � ��� �����
int sum(int num1, int num2) {
	//int tmp = num1 + num2;
	return num1 + num2; //������� �������� ���������� (����� num1 � num2)
}
//����� ������� � �������
void print_arr(int array[]) {
	std::cout << '[';
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << ", ";
	std::cout << "\b\b]\n";
}
//����� ����� ��������� �������
int sum_arr(int array[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += array[i];
	return sum;
}
//��������
void x2(int num) {
	num *= 2;
}

void arr_x2(int arr[]) {
	arr[3] *= 2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//������� void
	
	/*say_hello(); //��� void ��� ����������
	say_hello(); 
	say_hello(); 
	std::cout << "������� ��� ����� -> ";
	std::cin >> n >> m;
	print_sum(n, m); //��� void � �����������
	print_sum(10, 7);*/

	/*std::cout << "������� ��� ����� -> ";
	std::cin >> n >> m;
	int result = sum(n, m);//������ � ���������� result ���������� ������ ������� sum
	std::cout << n << " + " << m << " = " << result;*/

	//������� � �������
	/*const int size = 5;
	int arr[size]{ 7, 2, 1, 11, 9 };
	std::cout << "������:\n";
	print_arr(arr);
	std::cout << "����� ��������� �������:\n" << sum_arr(arr, size) << std::endl;*/

	//�������� ������ � �������
	n = 10;
	x2(n); // ��� n - �������� �������
	std::cout << n << '\n'; // 10

	int mass[5]{ 10, 20, 30, 40, 50 };
	x2(mass[3]);
	std::cout << mass[3] << '\n';
	arr_x2(mass);
	std::cout << mass[3] << '\n';
	

	return 0;
}