#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");

    int arr[5] = {1,2,3,4,5};   
    int sum = 0;                

    int *ptr = arr;           
    int *ptr1 = arr + 5;        

    while(ptr < ptr1){        
        sum += *ptr;
        ptr++;
    }
    
    cout << "Sum: " << sum << endl; 
    return 0;

}
