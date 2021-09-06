#include <stdio.h>
#include <unistd.h>

int main ()
{
  size_t len = 1024;
  char name[len];
  
  int result = gethostname(name, len);

  if(result == 0)
    {
      printf("Host name is %s\n", name);
    }
  else
    {
      printf("Error");
    }
  return 0;
}
