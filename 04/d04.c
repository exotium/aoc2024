#include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <arpa/inet.h>

/* size of input.txt */
#define B 19739
/* size of grid */
#define L 140

char*_;int m,r,e,o,w[3],u[]={0,0,0,3,0,2},v[]={1-
L,1,2,0,2,0};T(n,y,a){m=0,e=n?5456205:1396788568,
r=4-n;for(a+=L;r--;m=m<<8|_[o+y],y+=a);w[n]+=m==e
|htonl(m)>>8*n==e;}main(j){_=mmap(0,B+L*3,1,1,
open("input.txt",0),0);for(;_[o]==10?o++:0,o<B;o
++,w[1]&=-2)for(j=0;j<6;)T(j++>3,u[j],v[j]);
printf("%d\n%d",*w,w[1]/2);}
