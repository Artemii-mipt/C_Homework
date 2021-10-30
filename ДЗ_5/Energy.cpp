#include <iostream>
#include <cmath>

const long long int from_joul_to_erg = 10000000;
const int from_joul_to_ev = 6.242;
class Energy {
public:
    bool flag = 0;
    double value_in_joules;
    void read_in_joules() {
        std::cin >> value_in_joules;
        flag = 1;
    }
    void read_in_ergs() {
        long double a;
        std::cin >> a;
        value_in_joules = a / from_joul_to_erg;
    }
    void read_in_ev() {
        long double a;
        std::cin >> a;
        value_in_joules = a / from_joul_to_ev / pow(10, 18);
    }
    void show() {
        if (flag) {
            std::cout << "Value in joules: " << value_in_joules << "\n";
            std::cout << "Value in ergs: " << value_in_joules * from_joul_to_erg << "\n";
            std::cout << "Value in electron-volts: " << value_in_joules * pow(10, 18) * from_joul_to_ev << "\n";
        }
        else
            std::cout << "Error.Please run the read function." << "\n";
    };
};

int main() {
    std::cout << "Enter number to interact: 1-show value; 2 - read in joules; 3 - read in ergs; 4 - read in ev; 0 - exit" << "\n";

    Energy value;
    bool work = 1;
    while (work) {
        int a;
        std::cin >> a;
        if (a == 0)
            work = 0;
        else
            if (a == 1)
                value.show();
            else
                if (a == 2)
                    value.read_in_joules();
                else
                    if (a == 3)
                        value.read_in_ergs();
                    else
                        if (a == 4)
                            value.read_in_ev();
                        else
                            std::cout << "Wrong value, enter another one" << "\n";
    }
    return 0;
}
