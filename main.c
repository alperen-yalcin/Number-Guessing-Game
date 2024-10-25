#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int input;
	srand(time(0));
	int upper_limit = 100;
	int number = rand() % upper_limit +1;
	printf("Welcome to the number guessing game!\n");
	while (1) {
		printf("Please enter a number to guess a computer-generated number: ");
		scanf("%d", &input);
		if (input < number) {
			printf("Higher!\n");
		}	else if (input > number) {
			printf("Lower!\n");
		}
		else {
			printf("True");
			break;
		}

	}
	return 0;
}