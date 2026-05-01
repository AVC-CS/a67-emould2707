#include <iostream>
using namespace std;

int hanoi(int n, char from, char to, char aux);

int hanoi(int n, char from, char to, char aux)
{
    
    if (n == 1) {
        cout << "Move disk " << n << " from " << from << " to " << to << endl;
        return 1;
    }
    int count = 0;
    count += hanoi(n - 1, from, aux, to);

    cout << "Move disk " << n << " from " << from << " to " << to << endl;    
    count++;
    count += hanoi(n - 1, aux, to, from);

    return count;
}
