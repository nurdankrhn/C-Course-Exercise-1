#include<stdio.h>

int isprime(int val);
void prime_factors(int val);

int main() {
	
	int val;

	printf("Sayi:");
	scanf("%d",&val);
	
	printf("Sayinin asal carpanlari: ");
	prime_factors(val);
	return 0;
}

int isprime(int val) {
	
	int i;
	if(val%2==0)
		return val==2;
	else {
		for(i=3;i<val;i++){
			if(val%i==0)
				return 0;
		}
		return 1;
	}
}

void prime_factors(int val){
	int i=2;
		
	while(i<=val) {
		if(val%i==0 && isprime(i)) {
			printf("%d ",i);
			val /= i;
		}
		else
			i++;
		
	}
	
}
