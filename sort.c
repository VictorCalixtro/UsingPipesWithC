#include <stdio.h>
#include <stdlib.h>
#define TEN 10

struct Information
{
   
int population;
char stateName[TEN];


};

void swap(struct Information *xp, struct Information *yp){

 struct Information  temp = *xp;
 *xp = *yp;
  *yp = temp;

}

void selectionSort(struct Information stateInfo[], int n){

int i, j, min;
for(i=0; i< n-1; i++){

    min = i;
    for(j = i+1; j <n;j++){

      if(stateInfo[j].stateName[0] < stateInfo[min].stateName[0]){

        min =j;


       }



    }
swap(&stateInfo[min],&stateInfo[i]);
}

}


int main(int argc, char *argv[]){

struct Information stateInfo[TEN];
char *line = NULL;
size_t len = 0;

int i = 0;
while((getline(&line, &len, stdin) != EOF && i < 9))
{

 sscanf(line, "%s %d", stateInfo[i].stateName, &stateInfo[i].population);


i+=1;




}



selectionSort(stateInfo, i);


for(int x = 0; x < i; x++)
{
printf("%s\n",stateInfo[x].stateName);

}
return 0;

}
