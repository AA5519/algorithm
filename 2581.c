#include <stdio.h>


// 입력받은  a가 소수면 1반환, 소수가 아니면 0반환  
int sosu(int a){
	
	int i;
	
	if(a == 1) return 0;
	if(a == 2) return 1;
		
	for(i = 2; i < a; i++){
		if(a % i == 0) return 0;
	}
	
	return 1;
}


int main() {

	int m, n, i;
	int sum = 0;
	int min = 10000;
	
	scanf("%d", &m);
	scanf("%d", &n);	
	
	for(i = m; i <= n; i++){
		if (sosu(i) == 1){
			sum += i;
			if(min > i) min = i;
		}
	}
	
	if(sum > 0) printf("%d\n%d",sum,min);
	else printf("-1\n");
	
	return 0;
}
