#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int reverse = 0;
    int orgNum = n, digit;
    while(orgNum>0){
        digit = orgNum%10;
        reverse = reverse*10 + digit;
        orgNum = orgNum/10;
    }
    
    if(n==reverse)
        return 1;   
    
    return 0;
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    bool ans = isPalindrome(num);
    cout << "isPalindrome: " << ans << endl;

    
    return 0;
}