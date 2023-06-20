#include <stdio.h> 
#include <stdlib.h> 
int main () 
{ 

  int a,n;
  int *ptr_data;
  printf("enter amount of memory");
  scanf("%d",&a);
  ptr_data = (int *)calloc(a,sizeof (int));
  if (ptr_data == NULL) 
  { 
    printf("error allocating requested memory");
    exit (1);
  }
  for(n=0; n<a;n++) 
  {
    printf("enter number %d ",n);
    scanf("%d",&ptr_data[n]);
  }
  printf("outPut "); 
  for(n=0;n<a; n++)
    printf("%d", ptr_data [n]);
  free (ptr_data);
  return 0;
}
