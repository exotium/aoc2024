#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/mman.h>

/* size of input.txt */
#define B 19826

main(c){int m,e,o,w=1;long n;char*y,*a=mmap(0,B,1
,1,open("input.txt",0),0);for(y=a+B;a<y;n<<=8,*a<
48|*a>57?n|=*a:(c=m,m=strtol(a,&a,10),a--),n<<32
>>32==1685006377?w=1:n<<8>>8==0x646f6e27742829?w=
0:n==0x6d756c28002c0029?e+=c*m,o+=w*c*m:0,a++);
printf("%d\n%d",e,o);}