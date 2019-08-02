#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

typedef struct rain {
	int row;
	int col;
} rain;

typedef struct winsize winsize;

int main(int argc, char * argv[]){
	winsize w;
	int col, i, color;
	char * matrix, c;

	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	col = (int)(w.ws_col);
	// allocate the matrix here and make it type rain. Then loop through and give it a row and a column ending
	srand(time(NULL));

	for(int i = 0; i < (col > 8) ? 8 : col/2; i++){

	}
	while(1 + 1 == 2){
		matrix = (char*)malloc(col * sizeof(char));
		i = 0;
		while(i < col){
			matrix[i] = ' ';
			i++;
		}
		int a = rand()%col;
		c = (char)(rand()%96+33);
		matrix[a] = c;
		color = rand()%7;
		switch(color){
			case 0: printf("\033[0;31m");
				break;
			case 1: printf("\033[0;32m");
				break;
			case 2: printf("\033[0;33m");
				break;
			case 3: printf("\033[0;34m");
				break;
			case 4: printf("\033[0;35m");
				break;
			case 5: printf("\033[0;36m");
				break;
			case 6: printf("\033[0m");
				break;
			default: break;
		}
		printf("%s", matrix);
		printf("\033[0m");
		fflush(stdout);
		free(matrix);
		usleep(90000);

	}

	return 0;
}
