#include <stdio.h>

int matrix[10][10];
//FILE *fp;
int InitializeMatrix(){
    
return 0;
}
int printMatrix(){
    if(matrix == NULL){
        printf("error");
    }
    return 0;
}

int main(int argc, char **argv){
    FILE *fp = fopen(argv[1],"r");
    char xd;
    fscanf(fp, "%c", &xd);
    if(xd == 'A'){
        int *pointer = &matrix;
    for(int i=0; i< 10; i++){
        for(int j =0; j < 10; j++){
            //*(pointer + i*10 + j) = getw(fp);
            fscanf(fp,"%d", &matrix[i][j]);
        }
    }
    }
     for(int i=0; i< 10; i++){
        for(int j=0; j< 10; j++){
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
     }
return 0;
}

