#include <iostream>
#include <string>

using namespace std;

// function to return length of the string
int getLength(string str){
    int length = 0;
    for(int i=0; i<str.length(); i++){
        length++;
    }
    return length;
}

// function to reverse a string 
void reverseString(string &str){   
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
}

int main(){
    string name = "Nikhil";
    cout << "Original string: " << name << endl;

    int length = getLength(name);
    cout << "Length: " << length << endl;

    //function call
    reverseString(name);

    cout << "Reverse string: " << name << endl;
    return 0;
}