#include "Header.h"
#include <stdio.h>

int main() {
	Vec3 a(1, 2, 3);
	Vec3 b(3, 2, 1);
	double length = 0;
	length = a.length();
	a = a + b;
	a += a;
	Vec3 c(a);
	if (b != a) {
		b = a;
	}
	a.flip();
	getchar();
	return 0;
}