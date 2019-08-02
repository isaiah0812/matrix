#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

typedef struct rain {
	int row;
	int col;
	int count = 0;
	char c;
} rain;

typedef struct winsize winsize;

int inRow(int col, rain * matrix, int size){
	if(size == 0){
		return 0;
	}

}

int main(int argc, char * argv[]){
	winsize w;
	int col, row, color;
	char c, * str;

	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	col = (int)(w.ws_col);
	row = (int)(w.ws_row);
	int size = (col > 16) ? 8 : (col/2);
	// allocate the matrix here and make it type rain. Then loop through and give it a row and a column ending
	rain * matrix;
	matrix = (rain*)malloc(size * sizeof(rain));
	str = (char*)malloc(col * sizeof(char));
	for(int i = 0; i < col; i++){

	}
	srand(time(NULL));

	for(int i = 0; i < size; i++){
		do {
			matrix[i].col = rand()%col;
		} while(!inRow(matrix[i].col, matrix, size));
		matrix[i].row = rand()%row;
		matrix[i].c =
		printf("Matrix %d:\ncol - %d\nrow - %d\n", i, matrix[i].col, matrix[i].row);
	}
	// while(1 + 1 == 2){
	// 	i = 0;
	// 	while(i < col){
	// 		matrix[i] = ' ';
	// 		i++;
	// 	}
	// 	int a = rand()%col;
	// 	c = (char)(rand()%96+33);
	// 	matrix[a] = c;
	// 	color = rand()%7;
	// 	switch(color){
	// 		case 0: printf("\033[0;31m");
	// 			break;
	// 		case 1: printf("\033[0;32m");
	// 			break;
	// 		case 2: printf("\033[0;33m");
	// 			break;
	// 		case 3: printf("\033[0;34m");
	// 			break;
	// 		case 4: printf("\033[0;35m");
	// 			break;
	// 		case 5: printf("\033[0;36m");
	// 			break;
	// 		case 6: printf("\033[0m");
	// 			break;
	// 		default: break;
	// 	}
	// 	printf("%s", matrix);
	// 	printf("\033[0m");
	// 	fflush(stdout);
	// 	free(matrix);
	// 	usleep(90000);
	//
	// }

	free(matrix);

	return 0;
}
