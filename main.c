#include <stdio.h>
// check this include
#include "my_mat.h"
#define True "True";
#define False "False";
int matrix[10][10];
FILE *fp;
int main(int argc, char **argv){
    fp = fopen(argv[1], "r");
    char xd;
    do{
        fscanf(fp,"%c", &xd);
        if(xd == 'D'){
            break;
        }
        else if(xd == 'A'){
            func1(fp);
            // for(int i=0;i<10; i++){
            //     for(int j=0; j< 10; j++){
            //         printf(" %d ", matrix[i][j]);
            //     }
            //     printf("\n");
            // }
        }
        else if(xd == 'B'){
            int i, j;
            fscanf(fp,"%d", &i);
            fscanf(fp,"%d", &j); 
            int val = func2(i,j);
            char temp1[] = True;
            char temp2[] = False;
            if(val == 1)
            {
            printf("%s\n",temp1);
            }
            else
            {
            printf("%s\n",temp2);
            }
        }
        else if (xd == 'C'){
            int source, destination;
            fscanf(fp,"%d",&source);
            fscanf(fp, "%d", &destination);
            int l = func3(source,destination);
            printf("%d\n", l);
        }  
    }while (xd != 'D' || xd != EOF);
}
