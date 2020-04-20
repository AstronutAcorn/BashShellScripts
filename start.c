#include <stdio.h>

#define LOWER	0
#define UPPER 300
#define STEP  20

int main() {
	int c;

	c = getchar();

	while (c != EOF) {
		//putchar(c);
		//putchar('.');
		printf("%c=%d=%x\n", c, c, c);
		c = getchar();
	}
	printf("%d", EOF);
	return 0;
};

int turtule()
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	};

	return 0;
};
