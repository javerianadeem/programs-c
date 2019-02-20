#include<stdio.h>
main()
{
	float sal,da,hra,gross;
	printf("Enter salary of employee");
	scanf("%f",&sal);
	if(sal<1500)
	{
    hra=sal*10/100;
	da=sal*90/100;
}
	else
	{
	hra=500;
	da=sal*98/100;
    }
	gross=sal+hra+da;
	printf("Gross salary=%f",gross);
}
