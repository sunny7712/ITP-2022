#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int compare (const void * a, const void * b){
  if(*(float*)a > *(float*)b){
      return 1;
  }
  else{
      return -1;
  }
}

struct Cricketer {
    float avg;
    char name[50];
    int age;
    int matches;
};


int main(){
    int n = 20;
    struct Cricketer arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter the data of the cricketer: ");
        printf("\nAverage: ");
        scanf("%f", &arr[i].avg);
        printf("\nName: ");
        scanf("%s", &arr[i].name);
        printf("\nAge: ");
        scanf("%d", &arr[i].age);
        printf("\nNumber of Test Matches played: ");
        scanf("%d", &arr[i].matches);
        printf("\n");
    }
    // Arranging in asscending order by avg runs.
    
    qsort(arr, n, sizeof(struct Cricketer), compare);
    printf("Cricketers arranged in ascending order by their Average: \n\n");
    for(int i = 0; i < n; i++){
        printf("%s\t %f\n", arr[i].name, arr[i].avg);
    }
    return 0;
}