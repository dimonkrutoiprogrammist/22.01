#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    
    cout << "Stroka: ";
    getline(cin, text);        
    
    int count = 0;  
    while (text[count] != '\0') { 
        count++;
    }
    
    cout << "Stroka: " << text << " = " << count << " symbols" << endl; 
    
    return 0;
}
