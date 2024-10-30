#include <stdio.h>

int main(){
	char room[10][10];

	prepareLevel(room);
	for(int i; i<10; i++){
		for(int j; j<10; i++){
			printf("%s", room[i][j]);
	       }
       }	       
       return 0;
}

char[][] prepareLevel(char[][] level){
	for(int i; i<10; i++){
		for(int j; j<10; j++){
			level[i][j] = 44;
		}	
	}
}
