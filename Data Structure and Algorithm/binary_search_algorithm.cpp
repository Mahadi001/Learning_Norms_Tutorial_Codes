#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int binary_search_algorithm(int arr[], int n, int total)
{
    int first, mid, last;
    first = 0;
    last = total - 1;
    while(first <= last){
        mid = (first + last) / 2;
        if(arr[mid] == n){
            return mid;
        }
        if(n > arr[mid]){
            first = mid + 1;
        }
        else{
            last = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {3, 5, 7, 13, 15, 17, 43, 55, 61, 77};
    int n, result, total;
    cin >> n >> total;
    result = binary_search_algorithm(arr, n, total);
    if(result == -1){
        printf("Not found");
    }
    else{
        printf("Index: %d",result);
    }
    return 0;
}
