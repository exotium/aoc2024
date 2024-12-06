#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <sys/mman.h>

// size of the input grid
#define G 130

main(){int k,i,t,T,y=0,_=0,m[2],e[]={-G-1,1,G+1,-
1},o=G*G+G,w[o];char*$=mmap(0,o+G,1,1,open("inpu"
"t.txt",0),0);for(;$[++_]!=94;);for(;y<o;y++?m[1]
+=!i:(m[0]=i),y+=$[y]==10)for(t=_,i=k=0,memset(&w
,0,o*4);t>=0&t+1<o&&$[t]-10;){for(;T=t+e[k],T>0&&
$[t+e[k]]%2||T==y;k=k+1&3);if(w[t]&1<<k){i=0;
break;}i+=!w[t];w[t]|=1<<k;t+=e[k];}
printf("%d\n%d",*m,m[1]);}
