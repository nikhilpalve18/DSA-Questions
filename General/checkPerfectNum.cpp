#include <iostream>
using namespace std;

bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i=1; i<=num/2; i++){
            if(num%i == 0){
                sum += i;
            }
        }
        cout << "Sum =  " << sum << endl;
        cout << "Num =  " << num << endl;
        if(sum == num){
            return true;
        }
        return false;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Result = " << checkPerfectNumber(n);
    return 0;
}

