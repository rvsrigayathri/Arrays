#include<stdio.h>
int main()
{
	int arr[100],i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;){
			if(arr[i]==arr[j]){
				for(k=j;j<n;k++){
					arr[k]=arr[k+1];
					n--;
				}
			}
			else{
				j++;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
	
	
	
}
