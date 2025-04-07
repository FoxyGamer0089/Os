#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<sys/stat.h>
int main()
{
char path[10];
struct stat*nfile;
nfile=(struct stat *)malloc(sizeof(struct stat));
printf("n\Enter the file name:\t");
scanf("%s",path);
stat(path,nfile);
if(nfile->st_ino==0)
printf("\nSuch a file doessnt exist\n");
else
{
printf("\nThe various attributes of file %s are:\n",path);
printf("\n program inodeno:%ld\n",nfile->st_ino);
printf("pgm size:%ld\n",nfile->st_blksize);
printf("protection:%d\n",nfile->st_mode);
printf("user id:%d\n",nfile->st_uid);
printf("group id:%d\n",nfile->st_gid);
printf("no of links:%ld\n",nfile->st_nlink);
printf("modified time:%s\n",ctime(&nfile->st_mtime));
printf("Access time=%s\n",ctime(&nfile->st_atime));
}
return 0;
}

