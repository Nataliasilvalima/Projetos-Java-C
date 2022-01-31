#include <stdio.h>	

int main(){
	
	int HI, MI, HF, MF, MTI, MTF, H, M;
	scanf("%d %d %d %d", &HI,&MI,&HF,&MF);
	
	MTI= (HI*60)+MI;
	MTF= (HF*60)+MF;
	
	if (MTI>=MTF) {
		HF=HF+24;
		MTI=HI*60+MI;
		MTF=HF*60+MF;
		MTF=MTI-MTF;
		H=MTI/60;
		M=MTF%60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);	
	}
	else{
    	H=MTI/60;
	    M=MTF%60;
	    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);	}
	
	return 0;
			
}
