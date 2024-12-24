#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	/*********calcul de caracteres********/
	char checkpoint[]={"Samira GoMyCode Full-Stack Bootcamp."};

	int comptr1 =0;
	int i=0;
	while(checkpoint[i]!=NULL){

		comptr1= comptr1 +1;
		i++;
	}	
	printf("le nombre de caracteres: %d", comptr1);	
	
	
	/*********************calcule du Mots*******************/
	
	int j=0; 
	int comptr2 =0;
	while(checkpoint[j]!='\0'){
		if(checkpoint[j]==' '){
			comptr2=comptr2 +1;
		}
			j++;
	}
	int nbrMot=comptr2 + 1;
	printf("\nle nombre du mots: %d", nbrMot);
	
	
	
	/******************calcul du voyelles***************/
	char Checkpoint3[]={"ImanE: GoMyCOde Full-StAck BoOtcamp"};
	int k=0;
	int comptr3=0;
	while(Checkpoint3[k]!='\0')
	{
		if(Checkpoint3[k]=='a' || Checkpoint3[k]=='A' || Checkpoint3[k]=='i' || Checkpoint3[k]=='I' || Checkpoint3[k]=='o' ||
		 Checkpoint3[k]=='O' || Checkpoint3[k]=='e' || Checkpoint3[k]=='E' || Checkpoint3[k]=='U' || Checkpoint3[k]=='u')
		{
			comptr3=comptr3+1;
		}
		k++;
	}
	printf("\nle nombre du voyelles: %d", comptr3);


}