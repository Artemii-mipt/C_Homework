#include <vector>;
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;


int main()
{
	int n;
	vector <int> sequence = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cin >> n;
	sequence.emplace_back(n);

	/*перемешиваем*/
	std::random_device rd;
	std::mt19937 g(rd());

	std::shuffle(sequence.begin(), sequence.end(), g);

	std::copy(sequence.begin(), sequence.end(), std::ostream_iterator<int>(std::cout, " "));

	/*удаляем копии*/
	set<int> set_seq(sequence.begin(), sequence.end());
}