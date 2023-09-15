#include <stdio.h>
#include <math.h>

int snt(int n) {
	int i = 2;
	for (; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
		else continue;
	}
	return 1;
}

int main() {
	int n;
	scanf("%d", &n);
	
	// kt chan le
	if (n % 2 == 0) printf("n la so chan\n");
	else printf("n la so le\n");
	
	// kt chia het cho 2 va 7
	if (n % 14 == 0) printf("n chia het cho 2 va 7\n");
	else printf("n khong chia het cho 2 va 7\n");
	
	// kt so nguyen to
	if (snt(n)) printf("n la so nguyen to\n");
	else printf("n khong la so nguyen to\n");
	
	return 0;
}

