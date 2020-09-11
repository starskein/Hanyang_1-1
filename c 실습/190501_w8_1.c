#include <stdio.h>

int main(void)
{
	char name[20];
	char gender[5];
	char birth[8];
	char destination[10];
	int period;
	
	printf("Input your name: ");
	scanf("%s", &name);
	printf("Gender: ");
	scanf("%s", &gender);
	printf("Day of birth<ex. 19910212>: ");
	scanf("%s", &birth);
	printf("Destination: ");
	scanf("%s", &destination);
	printf("Period of trip<ex. 5>: ");
	scanf("%d", &period);
	
	printf("============================\n");
	printf("NAME: %s\n", name);
	printf("GENDER: %s\n", gender);
	printf("DAY OF BIRTH: %s\n", birth);
	printf("DESTINATION: %s\n", destination);
	printf("PERIOD OF TRIP: %d\n", period);
	printf("============================\n");
	return 0;
}
