
#include <iostream>
#include <cstdlib> 
#include <set>
#include <array>
#include <algorithm>
#include <chrono>


using namespace std;
using namespace chrono;

int main()
{
    srand(20);

    int N = 52;

    array <int, 52> all_numbers;

    for (int i = 0; i <= all_numbers.size(); i++)
    {
        all_numbers[i] = rand();
    }

    auto start = high_resolution_clock::now();

    set <int, greater<int>> cont1;

    for (int i = 0; i <= all_numbers.size(); i++)
    {
        cont1.insert(all_numbers[i]);
    }

    auto one = high_resolution_clock::now();

    array <int, 52> cont2;

    for (int i = 0; i <= all_numbers.size(); i++)
    {
        cont2[all_numbers[i]];
    }

    sort(cont2.begin(), cont2.end());

    auto two = high_resolution_clock::now();

    duration<double> time_array = duration_cast<duration<double>>(one - start);
    duration<double> time_set = duration_cast<duration<double>>(two - one);

    cout << "array" << endl;
    cout << time_array.count() << endl;
    cout << "set" << endl;
    cout << time_set.count() << endl;

    //set быстрее

    return 0;
}





/*
Борман вызывает своего сотрудника.
- Назовите двузначное число.
- 45.
- А почему не 54?
- Потому что 45!
Борман пишет характеристику "характер нордический" и вызывает следующего.
- Назовите двузначное число.
- 28.
- А почему не 82?
- Можно, конечно, и 82, но лучше 28.
Борман пишет характеристику "характер близок к нордическому" и вызывает следующего.
- Назовите двузначное число.
- 33.
- А почему не... А, это Вы, Штирлиц.
*/ 




