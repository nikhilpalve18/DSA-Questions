#include <iostream>
using namespace std;

// Function to reverse a number
int reverse(int n){
    int reverse = 0;
    while(n!=0){
        int digit = n%10;
        reverse = (reverse * 10) + digit;
        if( (reverse > INT_MAX/10) || (reverse < INT_MIN/10))
            return 0; 
        n = n/10;
    }
    return reverse;
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int rev = reverse(num);
    cout << "Reverse: " << rev << endl;

    return 0;
}

