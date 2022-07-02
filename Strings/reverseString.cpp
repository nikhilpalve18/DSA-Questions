#include <iostream>
#include <string>
using namespace std;


// function to reverse a string 
string reverseString(string str){   
    //Here we pass the string by address in order to make changes in original string itself
    int start = 0;
    int end = str.length()-1;

    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}

// efficient approach using two pointers
// bool isPalindrome (string str){
//     int start = 0;
//     int end = str.length()-1;

//     while(start < end){
//         if(str[start] != str[end]){
//             return false;
//         }
//         start++;
//         end--;
//     }
//     return true;
// }

int main(){
    string name = "madam";
    string rev = reverseString(name);
    
    if(name == rev){
        cout << name << " is palindrome!" << endl;
    }
    else{
        cout << name << " is not palindrome!" << endl;
    }

    return 0;
}