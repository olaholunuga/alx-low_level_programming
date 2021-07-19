#include <stdio.h>
int main() {
	int dice1;
	int dice2;


	scanf("%d", &dice1);
	scanf("%d", &dice2);


	int fees = dice1 + dice2;
	int add = fees * 2;
	int max = 36;

	
	if (fees >= 10)
	{
		printf("Special tax");
		printf("%d\n", max);
	} 
	else  
	{
		printf("Regular tax");
		printf("%d\n", add);
	}
	return 0; 
}
