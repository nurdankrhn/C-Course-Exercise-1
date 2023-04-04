#include<stdio.h>

int main() {

	int n,i,k,space,star;
	printf("n: ");
	scanf("%d",&n);
	
	star=1;
	space=n-1;
	for(i=1;i<=n;i++) {
		for(k=1;k<=space;k++) {
			putchar(' ');
		}
		space--;
		for(k=1;k<=star;k++) {
			putchar('*');
		}
		star+=2;
		putchar('\n');
	}
	space=1;
	star-=4;
	for(i=1;i<n;i++) {
		for(k=1;k<=space;k++) {
			putchar(' ');
		}
		space++;
		for(k=1;k<=star;k++) {
			putchar('*');
		}
		star-=2;
		putchar('\n');
	}
	
	return 0;
}
