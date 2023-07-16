#include <stdio.h>
int main() {
	int p, c, m, em, bee, total;
	float per;
	
	printf("Enter the marks for each subject as Physics, Chemistry, Math, EM, BEE:\n");
	
	scanf("%d\n%d\n%d\n%d\n%d", &p, &c, &m, &em, &bee);
	
	total = p + c + m + em + bee;
	
    printf("Total marks obtained are: %d \n", total);
    
    per = (p + c + m + em + bee)/5.0;
    
    if(per >= 33 )
    {
    	printf("Pass");
	}
	else
	{
		printf("Fail");
	}
}