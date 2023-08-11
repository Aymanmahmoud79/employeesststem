#include <stdio.h>
#include "STD_TYPES.h"

struct employees
{
	u16 salary;
	u16 bonus;
	u16 deductions;
};

int main(void){
	
	struct employees Ahmed, Waleed, Amr;
	int total;
	
	printf("pleas enter Ahmed salary: ");
	scanf("%d", &Ahmed.salary);
	printf("pleas enter Ahmed bonus: ");
	scanf("%d", &Ahmed.bonus);
	printf("pleas enter Ahmed deductions: ");
	scanf("%d", &Ahmed.deductions);
	
	printf("pleas enter Waleed salary: ");
	scanf("%d", &Waleed.salary);
	printf("pleas enter Waleed bonus: ");
	scanf("%d", &Waleed.bonus);
	printf("pleas enter Waleed deductions: ");
	scanf("%d", &Waleed.deductions);
	
	printf("pleas enter Amr salary: ");
	scanf("%d", &Amr.salary);
	printf("pleas enter Amr bonus: ");
	scanf("%d", &Amr.bonus);
	printf("pleas enter Amr deductions: ");
	scanf("%d", &Amr.deductions);
	
	total=Ahmed.salary+Waleed.salary+Amr.salary;
	total+=Ahmed.bonus+Waleed.bonus+Amr.bonus;
	total-=(Ahmed.deductions+Waleed.deductions+Amr.deductions);
	
	printf("total value shall be supplied by finance team: %d \n", total);
}