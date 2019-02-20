 /* program for converting fahrenheit into centigrade */
 #include<stdio.h>
 main()
 {
 	int centigrade,fahrenheit;
 	printf("Enter temperature in fahrenheit:");
 	scanf("%d",&fahrenheit);
 	/* formula*/
 	centigrade = (fahrenheit-32) * 5/9;
 	printf("Temperature in centigrade is %d",centigrade);
 }
