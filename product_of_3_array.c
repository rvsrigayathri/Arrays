#include<stdio.h>
int main()
{
	int arr[100],i,n,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%3==0){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
