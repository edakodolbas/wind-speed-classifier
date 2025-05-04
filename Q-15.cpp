/*
  Question: Wind Speed Classification

  The program asks the user to enter a wind speed (in km/h) and 
  prints the wind category based on the speed.

  - < 25        › Not a strong wind
  - 25–38       › Strong wind
  - 39–54       › Gale
  - 55–72       › Whole Gale
  - ? 73        › Hurricane
*/


#include <stdio.h>

int main(){

int s;

printf("Enter wind speed:");
scanf("%d", &s);

if (s<25)
printf("Not a strong wind.\n",s);

else if (25<=s  && s<39)
printf("Strong wind.\n",s);

else if (39<=s && s<55)
printf("Gale.\n",s);

else if (55<=s && s<=72)
printf("Whole Gale.\n",s);

else 
printf("Hurricane.\n",s);

return 0;
	
	
	
	
	
	
	
	
}
