#include <stdio.h>

int main(){
	
	int i;
	int t, h, w, n;
	int rs = 0;
	//�׽�Ʈ ���̽� �Է�
	scanf("%d", &t);

	//���̽� ��ŭ �ݺ�
	for (i = 0; i < t; i++) {
		//����, ȣ��, ��� ° �մ�����  
		scanf("%d %d %d", &h, &w, &n);
		if(n % h != 0){
			printf("%d\n", (n % h) * 100 + (n / h)+ 1);
		}else{
			printf("%d\n", (h) * 100 + (n / h));
		}
	

	}
	
	return 0;
}
