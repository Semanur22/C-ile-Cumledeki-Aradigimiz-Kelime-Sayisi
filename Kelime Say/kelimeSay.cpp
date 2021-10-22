#include <stdio.h>
int kelime_say(char* paragraf, char* kelime){

	char* kelimeTut=kelime;
	int sayac=0,kelimeUzunluk=0,kacTane=0;
	for(int i=0;kelime[i]!='\0';i++){
		kelimeUzunluk++;
		
	}

	for(int i=0;paragraf[i]!='\0';i++){
	
		if(paragraf[i]==' '){
			i++;
		}
		

		while(*kelime!='\0' && (paragraf[i]!=' '  || paragraf[i]==',' || paragraf[i]=='.')){
		    
			if(paragraf[i]==*kelime){
			sayac++;
	
		}
			i++;
			kelime++;
		}

		if(sayac==kelimeUzunluk && (paragraf[i]=='.' || paragraf[i]==',' || paragraf[i]== ' ')){
			kacTane++;
		}

		sayac=0;
		kelime=kelimeTut;
	}
	return kacTane;
}
int main(){
	
	printf("Adet: %d",kelime_say("Buraya gel. İstersen gel, istersen gelme. Bence erken gel.", "gel")) ;

	return 0;
}

