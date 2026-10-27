#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <utility>

using namespace std;

const int N = 10;

// Створення масиву
void Create(int a[], const int n)
{
    for (int i = 0; i < n; i++)
        a[i] = 1 + rand() % 99;
}

// Виведення масиву
void Print(const int a[], const int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];

    cout << endl;
}

// ІТЕРАЦІЙНИЙ СПОСІБ
void SwapIterative(int a[], const int n)
{
    for (int i = 0; i < n - 1; i += 2)
        swap(a[i], a[i + 1]);
}

// РЕКУРСИВНИЙ СПОСІБ
void SwapRecursive(int a[], const int n, int i = 0)
{
    if (i >= n - 1)
        return;

    swap(a[i], a[i + 1]);

    SwapRecursive(a, n, i + 2);
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    int a[N];
    int b[N];
    int c[N];
    // Ітераційний спосіб
    Create(a, N);
    // Копіюємо початковий масив
    for (int i = 0; i < N; i++)
    {
        b[i] = a[i];
    }
    cout << "Initial array:" << endl;
    Print(a, N);

    SwapIterative(b, N);

    cout << "Iterative method:" << endl;
    Print(b, N);

    // Рекурсивний спосіб
    Create(a, N);
    for (int i = 0; i < N; i++)
    {
        c[i] = a[i];
    }
    cout << "Initial array:" << endl;
    Print(a, N);

    SwapRecursive(c, N);

    cout << "Recursive method:" << endl;
    Print(c, N);

    return 0;
}