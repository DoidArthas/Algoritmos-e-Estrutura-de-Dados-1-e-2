#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t[7], c;
	
	scanf("%d", &t[0]);
	
	t[1] = 0;
	
	for(c = 0; c < 5; c++)
	{
		
		scanf("%d", &t[c + 2]);
		if(t[0] == t[c + 2])
		{
			t[1]++;
		}
		
	}
	
	printf("%d\n", t[1]);
	
	return 0;
}
