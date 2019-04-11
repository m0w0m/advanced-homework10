#include <stdio.h>
#include<stdlib.h>
int main() {
	int n;  // 用戶輸入的整數
	int i;  // 循環代碼
	printf("輸入一個整數：");
	scanf("%d", &n);
	printf("%d=", n);
	// n>=2才能執行下面的循環
	for (i = 2; i <= n; i++) {
		while (n != i) {
			if (n%i == 0) {
				printf("%d*", i);
				n = n / i;
			}
			else
				break;
		}
	}
	printf("%d\n", n);
	system("pause");
	return 0;
}