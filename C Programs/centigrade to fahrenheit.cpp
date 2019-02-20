 /* program for converting centigrade into fahrenheit */
 #include<stdio.h>
 main()
 {
 	int centigrade,fahrenheit;
 	printf("Enter temperature in centigrade:");
 	scanf("%d",&centigrade);
 	/* formula*/
 	fahrenheit = centigrade * 9/5 + 32;
 	printf("Temperature in fahrenheit is %d",fahrenheit);
 }
