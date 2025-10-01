#include<stdio.h>

void Bubble(){

    int arr[5]={12,34,6,65,2};
    int i,j,temp=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main(){
    Bubble();
    return 0;
}
