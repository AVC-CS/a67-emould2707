#include <iostream>
using namespace std;

int hanoi(int n, char from, char to, char aux);

int hanoi(int n, char from, char to, char aux)
{
    static int count = 0;
    count++;
    if (n == 1) {
        return count;
    }
    hanoi(n-1, from, aux, to);
    hanoi(n-1, aux, to, from);
    return count;
}
