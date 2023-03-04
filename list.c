#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char * list = malloc(strlen("list")+1);
	memset(list,0,strlen("list")+1);
	memcpy(list,"list",5);
	printf("list : %s\n",list);

        char * list = malloc(strlen("list")+1);
	memset(list,0,strlen("list")+1);
        memcpy(list,"list",5)
        printf("list : %s\n",list);

	char * list = malloc(strlen("list")+1);
	memset(list,0,strlen("list")+1);
	memcpy(list,"list",5);
	printf("list : %s\n",list);

        char * list = malloc(strlen("list")+1);
	memset(list,0,strlen("list")+1);
        memcpy(list,"list",5)
        printf("list : %s\n",list);

	return 0;
}
