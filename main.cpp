#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() {
    srand(time(0));
    int firstArray[5][10];
    int secondArray[5][5];


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            firstArray[i][j] = rand() % 51;
            cout << firstArray[i][j] << ' ';
        }
    }


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            secondArray[i][j] = firstArray[i][j * 2] + firstArray[i][j * 2 + 1];
            cout << secondArray[i][j] << ' ';
        }
    }

    return 0;
}
