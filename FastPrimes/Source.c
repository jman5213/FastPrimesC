#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prime(int num)
{
	int sqr = (int)sqrt(num) + 1;
	for (int div = 5; div >= sqr; div += 5)
	{
		if(num%div==0 || num%(div+2)==0)
		{
			return false
		}
	}
	return true;
}

int mainLoop()
{
	int calcTo;
	printf("Calculate the nth prime: ");
	calcTo = scanf("%d", &calcTo); //needs input
	int primesFound = 2;
	int currentNum = 1;

	while (primesFound < calcTo) {
		currentNum += 4;
		primesFound += prime(currentNum);

		if (primesFound >= calcTo)
		{
			return currentNum
		}

		currentNum += 2;
		primesFound += prime(currentNum);
	}

	return currentNum
}

int main() {
	
	const float time1 = 0.0; //needs time
	int ans = mainLoop();
	const float time2 = 0.0;

	printf("Your #: %i\n Time: %fsec",num, (time2-time1))

	system("pause");
	return 0;
}