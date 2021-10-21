/*
1.О каких принципах стоит помнить при разработке функций?
	Функцию необходимо объявить и определить, аргументами функции может быть любая сущность от встроенного типа до объекта,
	Аргумент можно передавать по значению, по указателю и по ссылке, существует параметр по умолчанию. 
	Можно определять несколько функций с одним и тем же именем но разными параметрами.

2.В чем заключается концепция встраивания вызовов функций?
	inline позволяет встраивать тело функции вместо ее вызова.
	При компиляции кода, все встроенные функции раскрываются «на месте», то есть вызов функции заменяется копией содержимого самой функции, и ресурсы, которые могли бы быть потрачены на вызов этой функции, сохраняются

3.Какие аргументы функции могут иметь значения по умолчанию?
	Все параметры по умолчанию в прототипе или в определении функции должны находиться справа
	и имеется более одного параметра по умолчанию, то самым левым параметром по умолчанию должен быть тот, который с наибольшей вероятностью (среди всех остальных параметров) будет явно переопределен пользователем.

4.На основании чего разрешается выбор перегруженной функции?
	На основании типа переменной, переданной функции.

5.Как обеспечить "состояние" в функциях и лямда-выражениях?
	Любой идентификатор (переменная, функция) может иметь внешнее или внутреннее связывание, но тогда, две функции с одинаковыми именами не могут существовать в пределах одного проекта или всех единиц трансляции.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Fibonacci sequence
int fib(int n) 
{
	if (n == 1 or n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}
*/


/*Sort with lambda

int main()
{
	vector<int> arr;
	int n; 
	
	cout << "Enter the length of array" << endl;
	cin >> n;
	cout << "Enter array's values" << endl;
	for (int i = 0; i < n; i++) 
	{
		int a;
		cin >> a;
		arr.push_back(a);
	}

	/*Acsending sort
	sort(arr.begin(), arr.end(), [](int a, int b)
		{
			return a < b;
		});
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}

	/*Decsending sort
	sort(arr.begin(), arr.end(), [](int a, int b)
		{
			return a > b;
		});
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}
*/
	

/*Merge sort
void merge(vector<int> X, int first, int middle, int last)
{
	int i, j;
	i = first;
	j = middle + 1;
	vector<int> temp;

	while (i <= middle && j <= last)
	{
		if (X[i] <= X[j]) {
			temp.push_back(X[i]);
			++i;
		}
		else {
			temp.push_back(X[j]);
			++j;
		}
	}
	while (i <= middle)
	{
		temp.push_back(X[i]);
		++i;
	}
	while (j <= last) {
		temp.push_back(X[j]);
		++j;
	}
	for (int i = first; i <= last; ++i)
		X[i] = temp[i - first];
}

void merge_sort(vector<int> X, int first, int last)
{
	if (first < last) 
	{
		int middle = (first + last) / 2;
		merge_sort(X, first, middle);
		merge_sort(X, middle + 1, last);
		merge(X, first, middle, last);
	}
}

int main() {

	int n;
	vector<int> v;

	cout << "Enter Size of Vector : ";
	cin >> n;
	cout << "Enter Elements of Vector : ";
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	merge_sort(v, 0, n - 1);

	cout << "\nVector Obtained After Sorting: ";
	for (int i = 0; i < n; ++i) {
		cout << v[i] << ' ';
	}

}
*/

/*Calculate*/
#include <functional>

double calculate(double a, double b, function<double(double, double)> f) {
	return (f(a, b));
}
int main()
{
	double a, b;
	cin >> a >> b;
	vector<function<double(double, double)>> v;
	v.push_back([](double x, double y) { return x + y; });
	v.push_back([](double x, double y) { return x * y; });
	v.push_back([](double x, double y) { return x - y; });
	for (int i = 0; i < v.size(); i++)
		cout << calculate(a, b, v[i]) << endl;
}