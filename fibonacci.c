#include <stdio.h>
int main() {
	int i=0,j=0,k,c,n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(c = 1;c <= n;c++) {
		k = i+j;
		printf("%d ",k);
		if(j == 0) {
			if(n > 1) {
				k = 1;
				printf("%d ",k);
				c++;
			}
		}
		i = j;
		j = k;
	}
	printf("\n");
	return 0;
}
