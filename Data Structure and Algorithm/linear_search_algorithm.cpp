#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


//incase of integer values
// int linear_search(int arr[], int n)

int linear_search(string arr[], string n)
{
    for(int i = 0; i < 5; i++){
        if(n == arr[i]){
            return i;
        }
    }
    return -1;
}


int main()
{
   // incase of interger values
   // int result, n, arr[5] = {3, 6, 1, 2, 7};
   
    string arr[5] = {"Tom", "Harry", "John", "Smith", "Ron"};
    int result;
    char n[20];
    cin >> n;
    result = linear_search(arr, n);
    if(result == -1){
        printf("No match");
    }
    else{
        printf("Index: %d", result);
    }
    return 0;
}

