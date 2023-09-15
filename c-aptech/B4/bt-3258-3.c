#include <stdio.h>

const int LEN = 10;

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
	int t[LEN];
	int tong = 0;
	int tong_36 = 0;
	int tong_37 = 0;
	
	// nhap cac phan tu
	int i = 0;
	for (; i < LEN; i++) {
		scanf("%d", &t[i]);
		tong += t[i];
		if (t[i] % 6 == 0) tong_36 += t[i];
		if (t[i] % 21 == 0) tong_37 += t[i];
	}
	
	// tong cac phan tu
	printf("Tong: %d\n", tong);
	
	// tong cac phan tu chia het cho 3 va 6
	printf("Tong chia het cho 3 va 6: %d\n", tong_36);
	
	// tong cac so chia het cho 3 va 7
	printf("Tong chia het cho 3 va 7: %d\n", tong_37);
	
	// luu cac so nguyen to vao mang k
	int k[LEN];
	int j = 0;
	for (i = 0; i < LEN; i++) {
		if (snt(t[i])) {
			k[j] = t[i];
			j++;
		}
	}
	printf("%d, %d", k[0], k[1]);
	
	return 0;
}

