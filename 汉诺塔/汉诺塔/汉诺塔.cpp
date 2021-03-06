#include <stdio.h>
#define SUM  3 //0+1+2

void move(int bottom, int top, int start, int des) {
	static int step = 1;
	static int delta = 'A';
	int aux = SUM - start - des;

	if (bottom == top) {
		printf("#%06d:Move number %02d from %c to %c\n", step++, bottom + 1, start + delta, des + delta);
		return;
	}
	else {
		move(bottom - 1, top, start, aux);
		move(bottom, bottom, start, des);
		move(bottom - 1, top, aux, des);
	}
}

int main() {
	move(10, 0, 0, 1);
	getchar();
	return 0;
}

