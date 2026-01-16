#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int n;  //Переменная
    cout << "n = "; //Ввод числа
    cin >> n;

    int sum = 0;    //Счетчик

    for(int i = 1; i <= n; i++){
        sum += i;                   
    }

    cout << "Otvet: " << sum; 

    return 0;

}
