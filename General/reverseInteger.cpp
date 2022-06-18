// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int reverse = 0;

//     while(n!=0){
//         int digit = n%10;
//         reverse = (reverse * 10) + digit;
//         if( (reverse > INT_MAX/10) || (reverse < INT_MIN/10))
//             return 0;
            
//         n = n/10;
//     }
//     cout <<  "Reverse: " << reverse << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     int sum = 0;

//     while(num!=0){
//         int digit = num%10;
//         sum += digit;
//         num = num/10;
//     }

//     cout <<  "Sum of digits: " << sum << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int reverse = 0;
//     int orgNum = n;
//     while(n!=0){
//         int digit = n%10;
//         reverse = (reverse * 10) + digit;
//         n = n/10;
//     }

//     if(orgNum == reverse){
//         cout << orgNum << " is palindrome!" << endl;
//     }
//     else{
//         cout << orgNum << " is not palindrome!" << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// bool armStrongNum(int num){
//     int sum = 0;
//     int orgNum = num;
//     while(num!=0){
//         int digit = num%10;
//         sum = sum + (digit*digit*digit);
//         num = num/10;
//     }
//     if(orgNum == sum){
//         return true;
//     }
//     else{
//         return false;
//     }
// }   

// int main(){
//     int num;
//     cout << "Enter any number: ";
//     cin >> num;
//     bool ans = armStrongNum(num);
//     cout << ans << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){

//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     int orgNum = num;
//     int sum = 0;
//     while(num != 0){
//         int digit = num%10;
//         sum += digit;
//         num = num/10;
//     }

//     int ans = sum*sum;
//     cout << orgNum << endl;
//     cout << ans << endl;
//     if(orgNum == ans){
//         cout << orgNum << " is Neon number!" << endl;
//     }
//     else{
//         cout << orgNum << " is not Neon number!" << endl;
//     }
//     return 0;
// }

  