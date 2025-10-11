#include<stdio.h>
#include<stdlib.h>

void input_array(int *arr, int size){

    for(int i = 0; i < size; i++){

        scanf("%d", &arr[i]);

    }

    return;

}

void print_array(int *arr, int size,const char* str)  {

    printf("%s :-", str);

    for(int i = 0; i < size; i++){

        printf("%d ", arr[i]);
    }

    printf("\n");

    return;

}

void convolve(int *filter, int *input, int *output, int M, int N){


    for(int n = 0; n < M+N-1; n++){
        for(int k = 0; k < M;k++){
            if( (n-k >= 0) && (n-k) < N){
                
                output[n] += filter[k]*input[n-k];
            }
        }
    }
    
    return;
}

int main(){

    int M,N;

    printf("ENTER FILTER SIZE: ");
    scanf("%d", &M);
    
    printf("ENTER INPUT SIZE: ");
    scanf("%d", &N);

    int Y = M+N-1;
    
    int *filter = (int *)malloc(M*sizeof(int));
    int *input = (int *)malloc(N*sizeof(int));
    int *output = (int *)calloc(Y, sizeof(int));

    if (filter == NULL || input == NULL || output == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("ENTER FILTER:- ");
    input_array(filter,M);

    printf("ENTER INPUT:- ");
    input_array(input, N);

    convolve(filter,input,output,M,N);
    
    print_array(filter,M, "FILTER ARRAY");
    print_array(input,N, "INPUT ARRAY");
    print_array(output,M+N-1, "CONVOLVED ARRAY");


    return 0;

}

