#include <stdio.h>

void prepareLevel(int s, char lvl[]);

char room[10*10];

int main(){
	// char room[10*10];
	printf("before prepare\n");
	prepareLevel(10, room);
	printf("after prepare\n");
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			printf("%c", room[i * 10 + j]);
	       }
       } 
       return 0;
}

void prepareLevel(int size, char level[]){
	printf("2\n");
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			level[i*size + j] = '-';
		}	
	}
	printf("3\n");
}
