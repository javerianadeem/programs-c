#include<stdio.h>
main(){
	int num=1,ans=1,a=0,count=0;
	while(num!=0){
	printf("\nEnter a number whose factorial you want");
	scanf("%d",&num);
	for(int i=num;i>1;i--){
		ans=ans*i;
	}
	printf("\nFactorial is %d",ans);
	count++;
	ans=1;
}
    printf("\nTotal numbers of factorial= %d",count);
}
