#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "flatordeers3.h"

void search(Furniture*arr,int n){
	int flt;
	printf("1-name,2-material,3-period\n");
	scanf("%d",&flt);
switch(flt){
	case 1:{
		char s1[40];
		int f1=0;
		printf("name=");
		scanf("%s",s1);
		for(int i=0;i<n;i++){
			if(strcmp(s1,arr[i].name)==0){
				printf("found -> %s %s %d\n",arr[i].name,arr[i].material,arr[i].per);
				f1=1;
				 };
			if(f1==0) printf("not found\n");
			}
		break;
		}
	case 2:{
                char s2[40];
                int f2=0;
                printf("material=");
                scanf("%s",s2);
                for(int i=0;i<n;i++){
                        if(strcmp(s2,arr[i].material)==0){
                                printf("found -> %s %s %d\n",arr[i].name,arr[i].material,arr[i].per);
                                f2=1;
                                };
			if(f2==0) printf("not found\n");
                	}
                break;
                }
	case 3:{
                int s3;
                int f3=0;
                printf("period=");
                scanf("%d",&s3);
                for(int i=0;i<n;i++){
                        if(s3==arr[i].per){
                                printf("found -> %s %s %d\n",arr[i].name,arr[i].material,arr[i].per);
                                f3=1;
                        	};
			if(f3==0) printf("not found\n");
                }
                break;
                }
	default:
		break;
	}
}
