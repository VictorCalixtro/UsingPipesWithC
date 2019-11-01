#include <stdio.h>
#include <stdlib.h>
#define TEN 10

struct Information
{
   
int population;
char stateName[TEN];


};



int main(){

struct Information stateInfo[TEN];
char *line = NULL;
size_t len = 0;

int i = 0;
while((getline(&line, &len, stdin) != EOF && i < 9))
{

 sscanf(line, "%s %d", stateInfo[i].stateName, &stateInfo[i].population);


i+=1;




}




for(int x = 0; x < i; x++)
{
if(stateInfo[x].population >= 10){
printf("%s\n",stateInfo[x].stateName);

}}
return 0;

}
