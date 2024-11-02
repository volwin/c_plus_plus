#include <bits/stdc++.h>

int main(){
	printf("This program calculates n!\nPlease enter n: ");
	long long n, ans = 1;
	if(scanf("%lld", &n) == 1 && n >= 0){
		for(int i = 2; i <= n; i++){
			ans *= i;
		}
		printf("%lld! = %lld", n, ans);	
	}
	else{
		printf("You must enter an integer greater than or equal to zero.\n:)");
	}
	return 0;
}
