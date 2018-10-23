#include <stdio.h>
#include <stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

/*
int main(){
  int fc = open("/tmp/test.txt", O_RDWR);

  printf("fc: %d\n", fc);
  
  if(fc == -1){
    printf("It didn't work!");
  }

  close(fc);
  return 0;
}
*/
int main() 
{ 
    int fd1 = open("foo.txt", O_RDONLY); 
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
