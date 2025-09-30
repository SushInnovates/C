#include<stdio.h>

int rbs(int arr[],int low,int high,int key){
    if(low>high){
        return -1;
    }

    int mid = (low+high)/2;

    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return rbs(arr,mid+1,high,key);
    }
    else
    {
        return rbs(arr,low,mid-1,key);
    }
}

int main(){
    int arr[5],key,i,n=5;

    printf("Enter The Array Elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter The element you want to Search! :");
    scanf("%d",&key);

    int POS = rbs(arr,0,n-1,key);

    if (POS==-1)
    {
        /* code */
        printf("Element Not Found!");
    }
    else{
        printf("Element %d found at %d",key,POS);
    }
    return 0;
}
