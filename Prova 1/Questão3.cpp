#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int v[8], c, m;
	
	for(c = 0; c < 8; c++)
	{
		scanf("%d", &v[c]);
		
		
		if(c == 0)
		{
			m = v[c];
		}else if(v[c] > m)
		{
			m = v[c];
		}
		
	}
	
	printf("%d\n", m);
	
	for(c = 0; c < 8; c++)
	{
		v[c] = v[c] * m;
		printf("%d ", v[c]);
	}
	
	printf("\n");
	
	return 0;
}
