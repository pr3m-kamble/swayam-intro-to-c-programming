#include <stdio.h>
int main()
{
	int hundreds,tens,ones;
	int price;
	int money;
	
	scanf("%d",&hundreds);
	scanf("%d",&tens);
	scanf("%d",&ones);
	scanf("%d",&price);
	
	money = hundreds*100 + tens*10 + ones;
	
	if( price <= money){
		printf("1");
	}
	else{
		printf("0");
	}
	
	return 0;
}
