#include <stdio.h>
#include <math.h>

int snt(int n) {
	int i = 2;
	if (n == 1) {
		return 0;
	}
	for (; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
		else continue;
	}
	return 1;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	// tong cac phan tu giua a va b
	int sum = b*(b+1)/2 - a*(a-1)/2;
	printf("Tong: %d\n", sum);
	
	// in va tinh tong cac so nguyen tu 1 -> n
	int n; scanf("%d", &n);
	int i = 1;
	int tong = 0;
	for (; i < n; i++) {
		if (snt(i)) {
			printf("%d ", i);
			tong += i;
		}
	}
	printf("\nTong: %d", tong);
	
	return 0;
}

