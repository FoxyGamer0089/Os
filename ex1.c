#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
printf("PID of ex1.c=%d\n",getpid( ) ) ;
char*  arg[ ]={"Hello" ,"ICET" ,"STUDENT" ,NULL};
execv(". /ex2" ,arg ) ;
printf( "back to ex1.c" );
return 0 ;
}
