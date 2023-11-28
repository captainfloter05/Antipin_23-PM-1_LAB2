#include <stdio.h>
#include <stdlib.h>
#include "flatordeers3.h"

void create(Furniture**arr, int *n){
printf("n=");
scanf("%d",n);
if(*n<=0)
	return;
*arr=(Furniture*)calloc(*n,sizeof(Furniture));
for(int i=0;i<*n;i++){
	printf("name=");
	scanf("%s",(*arr)[i].name);
	printf("material=");
	scanf("%s",(*arr)[i].material);
	printf("per=");
	scanf("%d",&(*arr)[i].per);
	}
}

void read(Furniture**arr, int *n){
FILE*fp=fopen("file.txt","r");
if(!fp) return;
if(fscanf(fp,"%d",n)!=1){
	fclose(fp);
	return;
	}
if(*n<=0){
	fclose(fp);
        return;
        }
*arr=(Furniture*)calloc(*n,sizeof(Furniture));
for(int i=0;i<*n;i++){
        if(fscanf(fp,"%s %s %d",(*arr)[i].name,(*arr)[i].material,&(*arr)[i].per)!=3)
		break;
	}
fclose(fp);
}

void write(Furniture*arr, int n){
if(n<=0)
	return;
FILE*fp=fopen("file.txt","w");
if(!fp)
	return;
fprintf(fp,"%d\n",n);
for(int i=0;i<n;i++){
	fprintf(fp,"%s %s %i\n",arr[i].name,arr[i].material,arr[i].per);
	}
fclose(fp);
}
