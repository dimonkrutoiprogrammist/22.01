#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int number; //Переменная

    cout << "Number: ";
    cin >> number;      //Ввод числа

    if(number % 4 == 0 && number % 100 != 0){
        cout << number << " visokosniy god";  
    }
    else{
        cout << number << " ne visokosniy god"; 
    }

    return 0;

}
