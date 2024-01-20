#include <stdio.h>
#include <math.h>

int main(){
	int Nambari;
	printf("Insert Number");
	scanf("%d", &Nambari);
	printf("Nambari ulioibonyeza ni: %d\n ", Nambari);

	if (Nambari %2 == 0){
		printf("This is an Even Number");

	}
	else {
		printf("This one is an OddBall");
	}

	return 0;
}
