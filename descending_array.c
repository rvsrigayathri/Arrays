#include<stdio.h>
int main()
{
    int arr[100],i,j,n,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Descending order\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}