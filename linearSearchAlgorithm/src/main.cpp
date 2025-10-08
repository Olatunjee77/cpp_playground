#include <iostream>
using namespace std;

int searchArray(int array[], int size, int key){
    for(int i=0; i < size; i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]); // Number of elements in the array

    cout << "Enter the number you wantr to search: ";
    int key; //The number to be searched 
    cin >> key; 

    int index; // The index if the searched number is in the array

    index = searchArray(numbers, size, key);

    if(index != -1){
        cout << key << " is found at index " << index;
    }
    else{
        cout <<key << " is not in the array";
    }
    return 0;
}