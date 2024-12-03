#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/mman.h>

// size of input.txt
#define B 13999

cmp(void*a,void*b){return*(int*)a-*(int*)b;}main(
o){int d[2][1000],i,j,k,a,s,m,v,p;char*e,*t=mmap(
0,B,1,1,open("input.txt",0),0);for(e=t+B;t<e;d[i%
2][i++/2]=strtol(t,&t,10));for(;j<2;qsort(d[j++],
1000,4,cmp));for(;k<i/2;v=j,m+=j*o){for(j=d[0][k]
,a=j-d[1][k++],s+=a<0?-a:a;d[1][p]<j;p++);for(o=0
;v^j&&d[1][p]==j;o++)p++;}printf("%d\n%d",s,m);}