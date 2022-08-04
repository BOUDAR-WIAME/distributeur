#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int choix,sucre,lait;
	float prix;
    char textboisson [50];
    char textsucre [50];
    char textlait [50];
    
do{
	
	printf("BIENVENU\n");
	printf("choisir un boisson\n"); 
	
	printf("************************ \n");
	
	printf("   1.cafe\n");
	printf("   2.the\n");
	printf("   3.chocola\n");
	printf("   4.soda\n");
	
	printf("************************\n");
	scanf("%d",&choix);
}while(choix < 1 || choix > 4);

    switch (choix)
    
    {
    	case 1 :prix = 2;
    	        strcpy(textboisson,"cafe");
    	        printf("saisir la dose du sucre\n");
    	        printf("0.sans sucre, 1.sucree, 2.tres sucree\n");
    	        scanf("%d",&sucre);
    	        if (sucre == 1) {
    	        	prix = prix + 0.25;
    	        	strcpy(textsucre, "sucree");
				}
				else if (sucre == 2) {
					prix = prix + 0.50;
					strcpy(textsucre, "tres sucree");
				}
    	        else if (sucre == 0){
    	        	prix = prix + 0;
    	        	strcpy(textsucre, " non sucree");
				}
				printf("ajouter un boisson suplementaire\n");
				printf("0. sans lait / 1. avec lait\n");
				scanf("%d", &lait);
                if (lait == 1){
                	prix = prix + 1;
                	strcpy(textlait, "avec lait");
				}				
			    else if (lait == 0){
			    	prix = prix + 0;
			    	strcpy(textlait, "sans lait");
				}
				printf("vous devez payez %f DH\n",prix);
    	        printf("votre %s est %s %s est pret\n",textboisson,textsucre,textlait);
			break;
			
			case 2 :prix = 2;
    	        strcpy(textboisson, "the");
    	        printf("saisir la dose du sucre\n");
    	        printf("0.sans sucre, 1.sucree, 2.tres sucree\n");
    	        scanf("%d",&sucre);
    	        if (sucre == 1) {
    	        	prix = prix + 0.25;
    	        	strcpy(textsucre, "sucree");
				}
				else if (sucre == 2) {
					prix = prix + 0.50;
					strcpy(textsucre, "tres sucree");
				}
    	        else if (sucre == 0){
    	        	prix = prix + 0;
    	        	strcpy(textsucre, " non sucree");
				}
				
				
				printf("vous devez payez %f DH\n",prix);
    	       printf("votre %s est %s est pret\n",textboisson,textsucre);
			break;
	        
    	case 3 :prix = 2.5;
    	        strcpy(textboisson, "chocolat");
    	        printf("saisir la dose du sucre\n");
    	        printf("0.sans sucre, 1.sucree, 2.tres sucree\n");
    	        scanf("%d",&sucre);
    	        if (sucre == 1) {
    	        	prix = prix + 0.25;
    	        	strcpy(textsucre, "sucree");
				}
				else if (sucre == 2) {
					prix = prix + 0.50;
					strcpy(textsucre, "tres sucree");
				}
    	        else if (sucre == 0){
    	        	prix = prix + 0;
    	        	strcpy(textsucre, " non sucree");
				}
				printf("ajouter un boisson suplementaire\n");
				printf("0. sans lait / 1. avec lait\n");
				scanf("%d", &lait);
                if (lait == 1){
                	prix = prix + 1;
                	strcpy(textlait, "avec lait");
				}				
			    else if (lait == 0){
			    	prix = prix + 0;
			    	strcpy(textlait, "sans lait");
				}
				printf("vous devez payez %f DH\n",prix);
				printf("votre %s est %s %s est pret\n",textboisson,textsucre,textlait);
    	        
			break;
			
			case 4 :prix = 3;
    	        strcpy(textboisson, "soda");
    	       
				printf("vous devez payez %f DH\n",prix);
    	    printf("votre %s est %s %s est pret\n",textboisson);
			break;
			defult : printf("error");
		    
		}
    	









	return 0;
}
