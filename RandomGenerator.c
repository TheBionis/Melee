#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUMBER_OF_STRINGS 26
#define MAX_STRING_SIZE 20

void print_element(char arr[NUMBER_OF_STRINGS][MAX_STRING_SIZE], int n){
	for(int j = 0; j < strlen(arr[n]); j++){
		printf("%c", arr[n][j]);
	}	
	printf("\n");
}

int main(){
	char arr[NUMBER_OF_STRINGS][MAX_STRING_SIZE] = {"Dr. Mario", "Mario", "Luigi", "Bowser", "Peach", "Yoshi", "DK", "Captain Falcon", "Ganondorf", "Falco", "Fox", "Ness", "Ice Climbers", "Kirby", "Samus", "Zelda", "Sheik", "Link", "Young Link", "Pichu", "Pikachu", "Jigglypuff", "Mewtwo", "Mr. Game & Watch", "Marth", "Roy"};

	srand(time(0));

        int x = rand() % 25;
        print_element(arr, x);	

}
