#include <stdio.h>

int main()
{	
	int c = 1, a = 0;
	float f = 1.3, l = 1;
	
	while(c != 0)
	{
		l = l + 0.03;
		f = f + 0.02;
		
		a++;
		
		if(l > f) c = 0;
	}
	
	printf("%d\n", a);
	
	return 0;
}

/*
***********************************************************************
* 
***********************************************************************
*/
