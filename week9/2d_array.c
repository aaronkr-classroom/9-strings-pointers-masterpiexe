#include<stdio.h>

main()
{
	

	int grades[3][4] = {
		{85,45,70,93},
		{74,86,93,45},
		{65,37,99,97}
	};
	
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", i + 1);
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", grades[i][j]);
		}
		printf("\n");
	}
	
	
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			sum += grades[i][j];
		}
		float avg = (float)sum / 4;
		printf("%.2f\n", avg);

	}
	
	
	return 0;
}