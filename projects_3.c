#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday","Sunday"};
    srand(time(NULL));
    int i = rand()% 7;
    printf("%s", days[i]);
    
}