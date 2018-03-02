#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cin >> num;
    int *mas = new int[num];
    for(int i = 0; i < num; i++) {
        cin >> mas[i];
    }
    int temp;
    bool flag = false;
    for(int i = 0; i < num; i++) { //была ошибка с индексацией массива
        temp = mas[i];
        temp = mas[temp - 1];
        temp = mas[temp - 1];
        if (i == (temp - 1)) flag = true;
    }
    if (flag) cout << "YES";
        else cout << "NO";
    return 0;
}
