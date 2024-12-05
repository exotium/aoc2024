#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/mman.h>

// size of input.txt
#define B 15201

A,o,c,D,a,y,V[3],_[99],$[100][100];C(void*a,void*
b){o|=c=$[*(int*)b][*(int*)a];return c-1;}main(){
char*h,*i=mmap(0,B,1,1,open("input.txt",0),0);for
(h=i+B;*i^10;D=strtol(i,&i,10),a=strtol(i+1,&i,10
),$[D][a]=2,i++);for(;++i<h;_[y++]=strtol(i,&i,10
),*i==10?qsort(_,y,4,C),V[o]+=_[y/2],o=y=0:0);
printf("%d\n%d",*V,V[2]);}
