// Качмар Владислав
// варіант 12
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, i;
    double S;

    cout << "N = ";
    cin >> N;

    // 1. Спосіб: цикл while (з передумовою)
    S = 0;
    i = N;
    while (i <= 22)
    {
        S += sqrt(1. * i * i + 1. * N * N) / (1. * i);
        i++;
    }
    cout << S << endl;

    // 2. Спосіб: цикл do ... while (з постумовою)
    S = 0;
    i = N;
    do {
        S += sqrt(1. * i * i + 1. * N * N) / (1. * i);
        i++;
    } while (i <= 22);
    cout << S << endl;

    // 3. Спосіб: цикл for (прямий хід: від N до 22)
    S = 0;
    for (i = N; i <= 22; i++)
    {
        S += sqrt(1. * i * i + 1. * N * N) / (1. * i);
    }
    cout << S << endl;

    // 4. Спосіб: цикл for (зворотний хід: від 22 до N)
    S = 0;
    for (i = 22; i >= N; i--)
    {
        S += sqrt(1. * i * i + 1. * N * N) / (1. * i);
    }
    cout << S << endl;

    return 0;
}