#include <stdio.h>

void printHead(int width);
void printBody(int width, int height);

int main() {
	int width,height;
    printf("Enter Width and Height: ");
	scanf("%d %d", &width,&height);
	printHead(width);
	printBody(width,height);
	printHead(width);

    return 0;
}

void printHead(int width){

    for(int i=0; i<width; i++){
        printf("* ");
    }
    printf("\n");
}

void printBody(int width, int height){

    for(int i=0; i<height-2; i++){
        for(int j=0; j<width; j++){

            if (j==0 || j==width-1){ //j==0 means the begining, j==width-1 means one step back from the back

                printf("* ");
            }

            else printf("  ");
        }
        printf("\n");
    }
    
}