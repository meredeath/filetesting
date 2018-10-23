#include <stdio.h>
#include <stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

int main(){

  printf("Testing open:\n");
  int f = open("tmp/test.txt", O_RDWR);
  //printf("f: %d\n", f);
  if(f == -1){
    printf("It didn't work! Wrong path, maybe? your value is %d\n",f);
  }else{
    printf("you successfully opened the file! your value is %d\n",f);
  }

  printf("\nTesting read:\n");
  //put stuff here

  printf("\nTesting write:\n");
  //put stuff here
  
  printf("\nTesting close:\n");
  int i = close(f);
  if(i == 0){
    printf("You successfully closed the file! your value is %d\n",i);
  }else{
    printf("You didn't close the file :( your value is %d\n",i);
  }
  //printf("i: %d\n", i);
  return 0;
}

/*
int main() 
{ 
    int fd1 = open("/tmp/test.txt", O_RDONLY); 
    if (fd1 < 0)  
    { 
        perror("c1"); 
        exit(1); 
    } 
    printf("opened the fd = % d\n", fd1); 
      
    // Using close system Call 
    if (close(fd1) < 0)  
    { 
        perror("c1"); 
        exit(1); 
    }  
    printf("closed the fd.\n"); 
} 
*/
