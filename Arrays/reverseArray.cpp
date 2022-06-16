#include <iostream>
using namespace std;

void reverseArray(int array[],int size){
    int start = 0,end = size-1;
    while(start<end){
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++,end--;
    }
}

int main(){
    int size;
    int array[1000];
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin >> array[i];
    }

    reverseArray(array,size);

    cout << "Reversed array: ";
    for(int i=0;i<size;i++){
        cout << array[i] << " ";
    }

    return 0;
}