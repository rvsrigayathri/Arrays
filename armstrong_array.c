#include<stdio.h>
int main(){
	int arr[100],i,n;
	int num,sum,rem,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Armstrong numbers:");
	for(i=0;i<n;i++){
		num=arr[i];
		temp=num;
		sum=0;
		while(num>0){
			rem=num%10;
			sum=sum+rem*rem*rem;
			num=num/10;
		}
	}
	if(sum==temp){
		printf("%d ",sum);	
	}
	return 0;
}
