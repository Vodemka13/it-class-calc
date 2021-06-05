#include <iostream>
using namespace std;



vector <int> it_sort_vector(vector <int> mas){
    int vrem;
    for (int i = 0; i < mas.size() - 1; i++) {
        for (int j = 0; j < mas.size() - i - 1; j++) {
            if (mas[j] > mas[j + 1]) {
                vrem = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = vrem;
            }
        }
    }
    return(mas);
}

int show_pow_two(int poww){
    int neww = 1;
    for (int i = 0; i < poww; i++)
        neww *= 2;
        return neww;
}

int it_pow(int number, int poww){
    int neww = 1;
    for (int i = 0; i < poww; i++)
        neww *= number;
        return neww;
}

int it_abs(int n){
    if(n >= 0)
        return n;
    return -n;
}

int it_summ(int a, int b){
    return a + b;
}

int main() {
    return 0;
}
