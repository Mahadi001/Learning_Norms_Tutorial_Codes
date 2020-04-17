#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int selection_sort(int arr[], int total)
{
    int i, j, temp;
    for(i = 0; i < total; i++){
        int min_num = i;
        for(j = i + 1; j < total; j++){
            if(arr[j] < arr[min_num]){
                min_num = j;
            }
        }
        if(min_num != i){
        temp = arr[i];
        arr[i] = arr[min_num];
        arr[min_num] = temp;
        }
        printf("%d ",arr[i]);
    }

}


int main()
{
    int arr[] = {99, 22, 101, 41, 77, 63, 53, 82, 1, 25};
    int total;
    cin >> total;
    selection_sort(arr,total);
}
