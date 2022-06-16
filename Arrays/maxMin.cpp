#include <iostream>
using namespace std;

void maxMin(int *arr, int size, int *max, int*min){
    for(int i=0; i<size; i++){
        // Maximum
        if(arr[i] > *max){
            *max = arr[i];
        }

        // Minimum
        if(arr[i] < *min){
            *min = arr[i];
        }
    }
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];

    // taking input of all the array elements
    cout << "Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    // initializing the max and min 
    int max = INT_MIN;
    int min = INT_MAX;

    // Function call
    maxMin(arr, size, &max, &min);  
    
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;


    return 0;
}