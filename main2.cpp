#include <iostream>
#include <time.h>
using namespace std;

int main() {

    srand(time(NULL)); // Seed the random number generator

    int random = 1+ rand() % 100;

    cout << random << std::endl;
    return 0;
}