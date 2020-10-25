/*
  int => 2byte ou 4 byte dépend de machine
   pour 2 byte(Octet) :
    2 byte = 2 * 8 bits = 16 bits => 2^16 case = 65536 possible values (0 -> 65536 - 1) (positive values)
    2 byte = 2 * 8 bits = 16 bits => 2^(16-1) case = 32768 possible values ( -32768 + 1 <- 0 -> 32768 - 1) (positive and negative values)
    meme pour float et double ...
*/
/*Directives*/
#include<stdio.h>
/*declaration de variables*/
float nbr;
int puis;
/*declaration des fonction : prototype */
double puissance(float,int);
/* fonction precipale main */
int main(void/*command line argumment*/){
	printf("donner le nbr :\n");
	scanf("%f",&nbr);
	printf("donner la puissance :\n");
	scanf("%d",&puis);
	if(puis ==0 && nbr == 0){
		printf("Impossible de calculer cette puissance ! ");
		return 0;

	}
	printf("%f a la puissance %d egale a %.3f \n",nbr,puis,puissance(nbr,puis));
	
	return 0;
}
/* declaration de fonction */
double puissance(float mNbr,int p){
	double res = 1;
	int i = 1;
	if(mNbr == 0)return 0;
	if(0 == 1)return 1;
	for(;i <= p;i++)res *= mNbr;
	return res;
}
