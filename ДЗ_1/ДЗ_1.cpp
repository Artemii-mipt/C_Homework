

/* Вопросы:
1.Особенносновые характеристики С++
	1)Сложность - язык предоставляет больше возможностей, но для программиста появляется больше работы
	2)Эффективность
	3)Мультипарадигмальность
	4)Низкоуровневость
	5)Компилируемость

2.Фундаменталньые типы данных и их особенности:
	1)Логический(bool) - принимает значение True/False
	2)Символьный(char) - хранят один из сибволов ISO-646, в который включен ASCII
	3)Целоцисленный(int) - для представления целыхчисел
	4)Типы с плавающей точкой(double, float) - для представления дробей
	5)Перечислимые типы(enum) - для представления значений из конкретного множества
	6)void - для указания отсутствия информации

3.Когда возникает проблема переносимости и как ее предовратить:
	Проблема переносимости возникает при запуске программы, написанной на другом устройстве.
	Например на одном устройстве на переменную типа integer может быть выделено 8 байт, а на другом 4 байта.
	Данную проблему можно предотвратить не используя тип int для больших чисел


4.Что такое определение, объявление, инициалзация и присваивание?
	1)Определиние - определние сущности, которая соответствует идентификатору или выделение пмяти объекту
	2)Объявление - введени идентификатора(имени) + описание типа
	3)Инициализация - одновременное объявление и присваивание значения переменной (int a = 8)
	4)Присваиване - механизм связывания имени объекта(переменной) с его значением

5.Почему выравнивание данных в памяти увеличивает производительность?
	Центральные прооцессоры в качестве основной единицы при работе с памятью используют машинное слово(естествення единица данных), размер которого может быть различным
	Как правило, машинное слово равно 2^k байтам.
	При сохранении объекта в памяти может случиться, что некое поле, состоящее из нескольких байтов, пересечет "естественную границу" слов в памяти.
	Некоторые модели процессоров не могут обращаться к данным в памяти, нарушающим границы машинных слов.
	Некоторые могут обращаться к невыровненным данным дольше, нежели к данным, находящимся внутри целого машинного слова

*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/* Задача №4
int main() {
	int x;
	int y;

	cout << "Enter x value: ";
	cin >> x;
	cout << "Enter y value: ";
	cin >> y;

	y = x + y;
	x = y - x;
	y = y - x;

	cout << "New values are: y = " << y << "; x = " << x;
}
*/

/* Задача №3
int main() {
	int a;
	int b;
	int c;

	cout << "Enter the coefficients: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	
	float D = b * b - 4 * a * c;
	
	if (D > 0) {
		float ans_1 = (-b + pow(D, 1 / 2)) / (2 * a);
		float ans_2 = (-b - pow(D, 1 / 2)) / (2 * a);
		cout << "The solutions are: " << ans_1 << " and " << ans_2;
	}

	if (D == 0) {
		float ans = -b / (2 * a);
		cout << "The solution is: " << ans;
	}

	if (D < 0) {
		cout << "No real solutions";
	}
}	
*/

/* Задача №2
int main() {
	float force_mks;
	float charge_mks;
	const int coef_1 = 100000; //coefficient for Newtons to dyne 
	const float coef_2 = 3 * pow(10, 9); //coefficient for Coulomb to cgs
	
	cout << "Enter the value of force in Newtons: ";
	cin >> force_mks;
	cout << "Enter the value of electric charge in Coulombs: ";
	cin >> charge_mks;

	float force_cgs = force_mks * coef_1;
	float charge_cgs = charge_mks * coef_2;

	cout << "Force is equal to " << force_cgs << "; Charge is equal to " << charge_cgs;

}
*/

int main() {
	string name;
	int price, temperature;
	bool hasCashback;
	cout << "Product's name: ";	
	cin >> name;
	cout << "Product's price: ";
	cin >> price;
	cout << "Is cash-back available for this product? (true/false) ";
	cin >> boolalpha >> hasCashback;
	cout << "Maximum storing temperature: ";
	cin >> temperature;

	cout << name << '\n';
	
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::uppercase);
	
	cout << "Price:.........." << setfill('0') << setw(8) << price << "\n";
	
	cout.unsetf(ios::hex | ios::uppercase);
	cout.setf(ios::boolalpha);
	
	cout << "Has cash-back:"<< setfill('.') << setw(10) << hasCashback << "\n";
	
	cout.unsetf(ios::boolalpha);
	cout.setf(ios::showpos);

	cout << "Max temperature:" << setfill('.') << setw(8) << temperature;
	

}