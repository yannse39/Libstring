#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "StrBasics.h"
char *my_strchr(char *s, int c)
{  

    for(int i = my_strlen(s); i > 0; i--)
    {
        if(s[i] == c)
        {
            return (&s[i]);
        }
    }
    return(NULL);
}

char *my_strrchr(char *s, int c) 
{

    for (int i = my_strlen(s); i >= 0; i--) {
        if (s[i] == c) {
            return &s[i];
        }
    }
    return NULL;

}

char *my_strcpy(char *dest, char *src)
{
    
    int i = 0;
    while (src[i] != '\0')
    {

        dest[i] = src[i];
        i++;
    
    }
    dest[i] = '\0';
    return dest;
    
}