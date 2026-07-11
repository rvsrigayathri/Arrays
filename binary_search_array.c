#include<stdio.h>
int main()
{
	int arr[100],i,n,key;
	int low=0,mid,high,found=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==key){
			found=1;
			printf("Element is found at %d position",mid+1);
			break;
		}
		else if(key>arr[mid]){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	if(found==0){
		printf("Element is not found");
	}
	return 0;
}
