#include <stdio.h>
#include <stdlib.h>
#include "StrBasics.h"

int my_strlen(char *str)
{
  
  int len = 0;
  if (str == NULL)
    return(-1);

  if (str[0] == '\0')
    return(0);

  while(str[len] != '\0')
  {
    len++;
  }
  return(len);

}

char *my_strdup(char *str)
{
  
  int len = my_strlen(str);
  
  if (str == NULL)
    return(NULL);

  char *strbis = (char*)malloc((len+1)*sizeof(char));
    
    if (strbis == NULL)
      return(NULL);
  
  char *strdup = strbis;
  
  while ((*strbis = *str) != '\0')
  { 
    strbis++;
    str++;
  }
  return strdup;

}

int my_strcmp(char*s1, char*s2)
{
  
  int i = 0;
  while(i <= my_strlen(s1))
  {
    if (s1[i] != s2[i])
      return(s1[i] - s2[i]);
    i++;
  }
  return(0);

}