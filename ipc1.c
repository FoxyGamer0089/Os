#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
int main()
{
key_t key=ftok("HELLO",60);
int shmid=shmget(key,1024,0666|IPC_CREAT);
char*str=(char*)shmat(shmid,(void*)0,0);
printf("\nENTER YOUR DATA :");
fgets(str,1024,stdin);
printf("\nDATA WRITTEN TO SHARED MEMORY :");
puts(str);
shmdt(str);
}
