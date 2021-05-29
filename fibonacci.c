#include <stdio.h>
int main() {
	int i=0,j=0,t=0,k,n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(k = 1;k <= n;k++) {
		t = i + j;
		printf("%d,",t);
		if(t == 0) {
			t = 1;
			printf("%d,",t);
		}
		i = j;
		j = t;
	}
	return 0;
}
