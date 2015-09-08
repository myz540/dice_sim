#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dice_sim(void);
int dice_roll(int number_of_dice);

int main(void)
{
	dice_sim();

	return 0;
}

void dice_sim(void)
{
	int i, number_of_dice, n;
	int *result, *histogram;
        srand(time(0));

        result = (int*)malloc(sizeof(int) * n);
        histogram = (int*)malloc(sizeof(int) * 6 * number_of_dice);
	
	printf("How many dice would you like to roll? ");
	scanf("%d", &number_of_dice);

	printf("How many times would you like to roll the dice? ");
	scanf("%d", &n);

        for(i = 0; i <= 6 * number_of_dice; i++){
                histogram[i] = 0;
        }


	for(i = 0; i < n; i++){
		result[i] = dice_roll(number_of_dice);
		printf("Rolled a %d\n", result[i]);
		histogram[result[i]] += 1;
	}

	for(i = number_of_dice; i <= 6 * number_of_dice; i++){
		printf("%d was rolled %d times\n", i, histogram[i]);
	}

	free(result);
	free(histogram);
	return;
}

int dice_roll(int number_of_dice)
{
	int i, sum = 0, roll;
	for(i = 0; i < number_of_dice; i++){
		roll = rand()%6 + 1;
		sum = sum + roll;
	}

	return sum;
}
