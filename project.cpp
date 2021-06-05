#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

int find_min(int a, int b) { // 1
    if (a > b)
        return b;
    return a;
}

int find_max(int a, int b) { // 2
    if (a > b)
        return a;
    return b;
}

int find_min_four (int a, int b, int c, int d) { // 3
    if (find_min(a, b) < find_min(c, d))
        return find_min(a, b);
    return find_min(c, d);
}

int find_col_even_vector (vector <int> mass){ // 4
    int count = 0;
    for (int i = 0; i < mass.size(); i++){
        if (mass[i] % 2 == 0)
            count++;
    }
    return count;
}

int show_pow_two(int poww){ // 5
    int neww = 1;
    for (int i = 0; i < poww; i++)
        neww *= 2;
        return neww;
}

int it_pow(int number, int poww){ // 6
    int neww = 1;
    for (int i = 0; i < poww; i++)
        neww *= number;
        return neww;
}

int it_abs(int n){ // 7
    if(n >= 0)
        return n;
    return -n;
}

int it_summ(int a, int b){ // 8
    return a + b;
}

vector <int> it_sort_vector(vector <int> mass){
    int vrem;
    for (int i = 0; i < mass.size() - 1; i++) {
        for (int j = 0; j < mass.size() - i - 1; j++) {
            if (mass[j] > mass[j + 1]) {
                vrem = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = vrem;
            }
        }
    }
    return(mass);
}

void it_show_list() {
        system("cls");
        cout << "1 – find_min(a, b) находит минимум из двух чисел\n2 – find_max(a, b) находит максимум из двух чисел\n3 -  find_min_four(a, b, c, d) находит минимум из 4 чисел, если вы умны, вы будете использовать для этой функции функцию нахождения из двух чисел\n4 – find_col_even_vector(vector) находит количество четных элементов в векторе (сначала вводиться количество элементов, затем сами элементы вектора\n5 – show_pow_two(pow)  принимает одно число степень в которую необходимо возвести двойку.\n6 – it_pow(number, pow)  принимает число N и степень числа K. Возводит число N в K степень.\n7 – it_abs(n)  принимает одно число, возвращает модуль введённого числа.\n8 – it_summ(a, b)  принимает два числа, возвращает суммы этих чисел\n9 – it_sort_vector(vector)  возвращает  упорядоченный список в порядке возрастания элементов.\n10 – it_show_list() выводит список доступных команд.";
        cout << endl << endl << "На первой строке введите номер команды, а на следующей(их) - аргумент(ы)" << endl << endl;
}


int main() {
    system("color F0");
    setlocale(LC_ALL, "Russian");
    cout << "Добро пожаловать! Список функций:" << endl << endl;
    it_show_list();
    int num = -1;
    int a, b, c, d;
    while (num != 2021){
        cin >> num;
        if (num == 1) {  // 1
            cout << endl << "Введите два числа ";
            cin >> a >> b;
            cout << endl << "Результат: " << find_min(a, b) << endl << endl;
        }
         else if (num == 2) {  // 2
            cout << endl << "Введите два числа ";
            cin >> a >> b;
            cout << endl << "Результат: " << find_max(a, b) << endl << endl;
        }
        else if (num == 3) { // 3
            cout << endl << "Введите четыре числа ";
            cin >> a >> b >> c >> d;
            cout << endl << "Результат: " << find_min_four(a, b, c, d) << endl << endl;
        }
        else if (num == 4) { // 4
            cout << endl << "Введите количество элементов ";
            cin >> a;
            cout << "Введите элементы ";
            vector <int> mass(a);
            for (int i = 0; i < a; i++){
                cin >> mass[i];
            }
            cout << endl << "Результат: " << find_col_even_vector(mass) << endl << endl;
        }
        else if (num == 5) {  // 5
            cout << endl << "Введите число ";
            cin >> a;
            cout << endl << "Результат: " << show_pow_two(a) << endl << endl;
        }
        else if (num == 6) {  // 6
            cout << endl << "Введите два числа ";
            cin >> a >> b;
            cout << endl << "Результат: " << it_pow(a, b) << endl << endl;
        }
        else if (num == 7) { // 7
            cout << endl << "Введите число ";
            cin >> a;
            cout << endl << "Результат: " << it_abs(a) << endl << endl;
        }
        else if (num == 8) { // 8
            cout << endl << "Введите два числа ";
            cin >> a >> b;
            cout << endl << "Результат: " << it_summ(a, b) << endl << endl;
        }
        else if (num == 9) {
            cout << endl << "Введите число элменетов ";
            cin >> a;
            vector <int> mass(a);
            cout << "Введите элементы ";
            for (int i = 0; i < a; i++){
                cin >> mass[i];
            }
            mass = it_sort_vector(mass);
            cout << endl << "Результат: ";
            for (int i = 0; i < mass.size(); i++){
                cout << mass[i] << " ";
            }
            cout << endl << endl;
        }
        else if (num == 10) {
            cout << endl;
            it_show_list();
        }
    }
    cout << "Bye - bye";
    return 0;
}

