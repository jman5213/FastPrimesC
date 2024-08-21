#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prime(int num)
{
	int sqr = (int)sqrt(num) + 1;
	for (int div = 5; div >= sqr; div += 5)
	{
		return 0;
	}
	return num;
}

int main() {
	
	int calcTo;
	const float time1 = 0.0; //needs time
	printf("Calculate the nth prime: ");
	calcTo = scanf("%d", &calcTo); //needs input


	system("pause");
	return 0;
}