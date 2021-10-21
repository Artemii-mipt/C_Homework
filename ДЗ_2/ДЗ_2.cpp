/*
1.Из каких сегментов состоит структура памяти процесса?
	Сегмент стека, сегмент данных, сегмент кодов 

2.Каким образом связаны встроенные указатели и массивы 
	Имя встроенного массива преобразуется в указатель (на первый элемент массива)

3.Почему низкоуровневая работа с памятью небезопасна
	Отсутствие защиты позволяет "атакующим" получить полный контроль над программой, иметь несанкционированный доступ к конфиденциальной информации

4.Что такое ссылка и чем она отличается от указателя?
	Ссылка - это тип переменной в С++, который работает как псевдоним другого объекта или значения. Ссылка это тот же указатель, который неявно разыменовывается при доступе к значению

5.Какими способами можно передать данные в функцию?
	По значению и по ссылке 
*/
#include <iostream>
#include <vector>
using namespace std;


/*Выделение памяти под трехмерный массив
int main() {
	int x;
	int y;
	int z;
	
	cout << "Enter the dimentions of the array" << endl;
	
	cout << "X = ";
	cin >> x;
	
	cout << "Y = ";
	cin >> y;
	
	cout << "Z = ";
	cin >> z;
		
	int*** p = new int** [y];
		for (int i = 0; i < y; i++)
	{
		p[i] = new int* [x];
		for (int j = 0; j < x; j++)
		{
			p[i][j] = new int[z];

			for (int k = 0; k < z; k++)
				p[i][j][k] = (i+1) * (j+1) * (k+1);

		}
}
*/


/*Бинарный поиск

#include <vector>

int main() {
	vector <int> array;
	int size;
	int a;
	int key;
	int mid;
	
	cout << "Enter array size:" << endl;
	cin >> size;
	
	cout << "Enter array elements:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> a;
		array.push_back(a);
	}

	cout << "Enter the key value:" << endl;
	cin >> key;
	
	bool flag = false;
	int l = 0;
	int r = size - 1;
	
	while (l <= r) {
		mid = (l + r) / 2;
		if (array[mid] == key) {
			flag = true;
			break;
		}
		if (array[mid] > key) {
				r = mid - 1;
			}
		else
			l = mid + 1;
	}

	if (flag)
		cout << "The key was found";
	else
		cout << "The key was not found";


}
*/


/*Insertion sort
#include <vector>

int main() {
	vector <int> array;
	int size;
	int a;
	cout << "Enter array size:" << endl;
	cin >> size;

	cout << "Enter array elements:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> a;
		array.push_back(a);
	}
	for (int i = 0; i < size - 1; i++) {
		for(int j = i; j > 0; j--){
			if (array[j] > array[j + 1])
				swap(array[j], array[j + 1]);
		}
	}
	for (int i = 0; i < size; i++)
		cout << array[i];


}
*/



/*Longest common subsequence */

int max(int x, int y)
{
	if (x < y)
		return y;
	return x;
}

int lcs( vector<char> X, vector<char> Y, int m, int n ) /* m is length of X, n is length of Y*/
{
	if (m == 0 || n == 0)
		return 0;
	if (X[m-1] == Y[n-1])
		return 1 + lcs(X, Y, m-1, n-1);
	else
		return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}

int main() 
{	
	int m;
	int n;
	int a;
	vector <char> X;
	vector <char> Y;

	cout << "Enter the first sequence's lenght" << endl;
	cin >> m;
	cout << "Enter the first sequence's elements" << endl;
	for (int i = 0; i < m; i++) {
		cin >> a;
		X.push_back(a);
	}
	
	cout << "Enter the second sequence's lenght" << endl;
	cin >> n;
	cout << "Enter the second sequence's elements" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a;
		Y.push_back(a);
	}
	cout << "Length of LCS is " << lcs(X, Y, m, n);
}
