#include<stdio.h>
int main()
{
	int arr[100],i,n,max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("%d",max);
	return 0;
}
