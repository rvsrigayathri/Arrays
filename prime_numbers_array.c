#include<stdio.h>
int main()
{
	int arr[100],i,j,n,prime;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]<2){
			continue;
		}
		prime=1;
		for(j=2;j<n;j++){
			if(arr[i]%j==0){
				prime=0;
				break;
			}
		}
		if(prime==1){
			printf("%d",arr[i]);
		}
	}
	return 0;
}
