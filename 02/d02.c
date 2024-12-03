#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/mman.h>

// size of input.txt
#define B 19288

main(s){int l[1000],d[1000][8],i,j,n,p,v,u,f,a,g,
r,q;char*e,*t=mmap(0,B,1,1,open("input.txt",0),0)
;for(e=t+B;t<e;d[r][q]=strtol(t,&t,10),l[r]=10==*
t?r++,q=0:++q+1);for(l[r]--;i<=r;++i)for(q=-1;q<l
[i];++q){for(s=j=0;j<l[i];){n=d[i][j];if(j++==q)
continue;if(s){f=n-p;a=f<0?-f:f;g=s^1?g:f<0;if(!a
|a>3|f<0^g)goto b;}p=n;s++;}u++;v+=q<0;break;b:}
printf("%d\n%d",v,u);}