#include <iostream>

using namespace std;

int main() {

    int favorite_number;

    cout << "enter your favorite number between 1 and 100" << endl;

    cin >> favorite_number;

    if(favorite_number>100){
        cout << "thats too big" << endl;
        return 0;
    }
    
    cout << "your favorite number is: " << favorite_number << endl;

    return 0;   
}