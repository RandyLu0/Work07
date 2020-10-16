#include<stdio.h>
#include<string.h>

double avg(int *, int);
void copy(char *, char *);
int len(char*);

int i;
double avg(int *arr,int size){
    double mean;
    for(i = 0; i < size; i++){
        mean += arr[i];
    }
    return mean / size;
}

void copy(char* arr1,char* arr2){
    i = 0;
    while(arr1[i]){
        arr2[i] = arr1[i];
        i++;
    }

}

int len(char *word){
    i = 0;
    int length = 1;
    while(word[i]){
        length++;
        i++;
    }
    return length;
}

int main(){
    char t1[] = "test";
    char t2[] = "bard";
    char c1[] = "testing";
    char c2[] = "barding"; 

    strcpy(t1,t2);
    printf("t1: %s\n",t1);
    strcat(t1,t2);
    printf("t1: %s\n",t1);
    int cmp = strcmp(t1,t2);
    printf("cmp: %d\n",cmp);
    char *chr = strchr(t1,'a');
    printf("chr: %p\n",chr);

    int nums[5] = {1,2,3,4,5};
    double mean = avg(nums, 5);
    printf("average: %lf\n",mean);
    int length = len(t2);
    printf("length of t2: %d\n",length);
    copy(c1,c2);
    printf("c2: %s\n",c2);   

    return 0;
}