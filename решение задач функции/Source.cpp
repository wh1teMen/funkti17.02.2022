
#include<iostream>
using namespace std;
//������� ������ 13 ����� ���������
int fibonacci(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}
template<typename T>  void bubbleSort(T array[], int lenght, bool type = false) {
	if (type) {
		for (int i = lenght - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] < array[j + 1])
					swap(array[j], array[j + 1]);
	}
	else
		for (int i = lenght - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] > array[j + 1])
					swap(array[j], array[j + 1]);
}






int main() {
	setlocale(LC_ALL, "ru");
	int n;

	//������ 1
	/*cout << "������ 1\n������ 13 ����� ���������: \n";
	for (int i = 0; i < 13; i++)
		cout << i + 1 << ". " << fibonacci(i) << endl;
	cout << endl;*/
	
	//������ 2
	cout << "������ 2\n����������� ������:\n[";
	int z2[5] = {2,4,9,3,8};
	for (int i = 0; i < 5; i++)
		cout << z2[i] << ", ";
	cout << "\b\b]" << endl;
	 bubbleSort(z2, 5, false);
	 cout << "��������������� ������ �� �����������:\n[";
	 for (int i = 0; i < 5; i++)
		 cout << z2[i] << ", ";
	 cout << "\b\b]\n";
	 bubbleSort(z2, 5, true);
	 cout << "��������������� ������ �� ��������:\n[";
	 for (int i = 0; i < 5; i++)
		 cout << z2[i] << ", ";
	 cout << "\b\b]\n";



	return 0;
}