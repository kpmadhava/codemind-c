#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0 ;i < n; i++){
        int current = arr[i];
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] < current){
                count++;
            }
        }
        printf("%d ", count);
    }
}