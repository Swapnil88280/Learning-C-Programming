#include<stdio.h>
#include<malloc.h>

int main(){
    int rows,cols,i,j;
    int **arr;

    printf("\nEnter rows and cols for the array\n");
    scanf("%d%d",&rows,&cols);

    arr=(int**)calloc(sizeof(int*),rows); //allocation for number of rows
    for(i=0;i<rows;i++){
        arr[i]=(int*)calloc(sizeof(int),cols); //allocation for number of cols
    }

    printf("\nEnter %d  elements",rows*cols);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nValues are \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("   %d",arr[i][j]);
        }
        printf("\n");
    }




    
    printf("\nAddress of arr %u",&arr);
    printf("\nvalue at Arr - %u",arr);

    printf("ADdress are\n");
    for(i=0;i<rows;i++){
        printf("\n%u",&arr[i]);
    }
    printf("\n%u",&arr[i]);
    printf("\nValue at *arr\n\n");
    for(i=0;i<rows;i++){
        printf("\nValue at *arr %u",arr[i]);
    }

    printf("\n\nAddress of each individual element\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf(" %u",&arr[i][j]);
        }
        printf(" %u",&arr[i][j]);
        printf("\n");
    }



    for(i=0;i<rows;i++){
        free(arr[i]);
    }
    free(arr);

    


    return 0;
}
