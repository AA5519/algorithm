#include <stdio.h>

int main(){
	
	int i;
	int t, h, w, n;
	int rs = 0;
	//테스트 케이스 입력
	scanf("%d", &t);

	//케이스 만큼 반복
	for (i = 0; i < t; i++) {
		//높이, 호수, 몇번 째 손님인지  
		scanf("%d %d %d", &h, &w, &n);
		if(n % h != 0){
			printf("%d\n", (n % h) * 100 + (n / h)+ 1);
		}else{
			printf("%d\n", (h) * 100 + (n / h));
		}
	

	}
	
	return 0;
}
