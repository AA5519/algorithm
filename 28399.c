include <stdio.h>
#pragma warning(disable : 4996)

int main() {

	int n, i;
	int cnt = 0;

	scanf("%d", &n);

	while (1){
		if (n % 5 == 0) {
			cnt += n / 5;
			break;
		}
		n -= 3;
		cnt++;
		if (n < 0) {
			cnt = -1;
			break;
		}
	}

	printf("%d", cnt);

	return 0;
}
