#include <stdio.h>

void prepareLevel(int s, char lvl[s][s]);

int main(){
	char room[10][10];

	prepareLevel(10, room);
	for(int i=0; i<10; i++){
		for(int j=0; j<10; i++){
			printf("%c", room[i][j]);
	       }
       }	       
       return 0;
}

void prepareLevel(int size, char level[size][size]){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			level[i][j] = '-';
		}	
	}
}
