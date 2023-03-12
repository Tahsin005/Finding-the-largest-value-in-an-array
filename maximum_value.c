#include<stdio.h>
#include<limits.h>
/*Find the maximum value out of all the elements in the array*/
int main(){
    int arr[8]={1,4,6,8,12,88,43,99};
    int max=INT_MIN;
    /*INT_MIN is the lowest value possible for a computer
    & we are going to compare it with all the
    elements of the array*/
    for(int i=0;i<8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d", max);
    return 0;
}
