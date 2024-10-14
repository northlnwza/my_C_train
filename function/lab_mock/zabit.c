#include<stdio.h>
int main(){
	int i,j,n,ma;
	scanf("%d %d",&n,&ma);
	int arr[n], arr2[ma];
	for(i=0;i<n;i++){
		arr[i]=0;
	}
	for(i=0;i<ma;i++){
		scanf("%d", &arr2[i]);
		//arr2[i]--;
	}
	
	for(i=0;i<ma;i++){
		arr[arr2[i]]=1;
	}
	
	for(i=0;i<n;i++){
		if(arr[i]==0)printf("%d ",i+1);
	}
	printf("\n%.2f", (float)(n-ma)/n*100);
}
