# include <stdio.h>

int main() {
	int i=0, x=0, y=0, z=0 , soma=0;
	
	scanf("%i %i", &x, &y);
	if ( x>y)
	{
		z=y;
		y=x;
		x=z;
		
	}
	for ( i=1; x+i<y;i++)
	{
		if( (x+1)%2==!0) soma=soma+x+i;
		
	}
	printf("%i\n", soma);
	
	return 0;
}


