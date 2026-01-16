#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int number; //Переменная
    
    cout << "Number: ";
    cin >> number;      //Ввод числа

    if(number % 2 == 0){
        cout << "Chet";    
    }
    else{
        cout << "NeChet";   
    }


    return 0;

}
