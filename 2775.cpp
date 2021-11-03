#include <stdio.h>

int main(){
	
	int i, j , k;
	int t, k1, n1;

	scanf("%d", &t);


	for (i = 0; i < t; i++) {
	
		scanf("%d", &k1);
		scanf("%d", &n1);
		
		int arr[15][15] = {0};
	
		for (j = 0; j < 15 ; j++){   //0類  1   2   3   4   5   6   7   8   9   10 ...
			arr[0][j] = j;
		}
		
		for (j = 1; j < 15 ; j++){  
			for (k = 1; k < 15 ; k++){  
				arr[j][k] = arr[j][k - 1] + arr[j - 1][k];
			}
		}
		
		printf("%d\n",arr[k1][n1]);
		
	}
	
	return 0;
}
//0類  1   2   3   4   5   6   7   8   9   10      + 1 + 1 + 1 ... + 1
//1類  1   3   6   10  15  21  28  36  45  55      + 2 + 3 + 4 + 5 ....+ 10
//2類  1   4   10  20  35  56  84  120 165 220     + 3 + 6 + 
