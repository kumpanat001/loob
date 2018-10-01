#include <stdio.h>
int main(){
	int i,j ;
	for(i=0; i<=100; i++){
		printf("%d:\t",i);
		for(j=2; j<=i; j++){
			if(i%j == 0){
				break ;
			}
		}
		if(i > 0){
		if(i%28 == 0 || i%29 == 0){
			printf("We are TechnicCom") ;
		}if(i%30 == 0){
			printf("30 Year Anniversary Undelets") ;
		}if(i == j){
			printf("Prime Number");
		}if(i == 2){
			printf("\tKumpanat Pandontong TAM") ;
		}if(i == 26){
			printf("\tKittisak Wongsuntorn GAS") ;
		}if(i == 11){
			printf("\tKhunathon Chaipain TIME") ;
		}
		}
		printf("\n") ;
	}
 		
	
	
	
	
	
	
	return 0 ;
}
