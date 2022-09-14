#include<stdio.h>
int target;
int binsearch(int a[], int start, int end){

    int mid = (start + end)/2;

    if(start>end)
        return -1;
    if(a[mid]==target)
        return mid;
    else if(a[mid]>target)
        return binsearch(a, start, mid-1);
    else 
        return binsearch(a, mid+1, end);

}
int main(){
    int arr[] = {1,3,5,7,9};
    scanf("%d", &target);
    if(binsearch(arr, 0, 4)!=-1){
        printf("%d", binsearch(arr, 0, 4));
        return 0;
    }
    printf("There's no target");

}