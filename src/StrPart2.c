#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "StrBasics.h"
#include "StrPart1.h"
char *my_strcat(char *dest, char *src)
{
    
    int lens = my_strlen(src);
    int lendest = my_strlen(dest);
    for (int i = 0; i <= lens; i++)
    {
        dest[lendest+i] = src[i];
    }
    dest[lendest+lens] = '\0';
    return (dest);

}  

char **my_strtok_simple(char *str, char delim) 
{
    
    if (str == NULL) 
    {
        return NULL;
    }
    char **result = malloc((10) * sizeof(char *));
    int i = 0;
    result[i] = str;
    for (int j = 0; j < my_strlen(str); j++) 
    {
        if (str[j] == delim) 
        {
            str[j] = '\0';
            i++;
            result[i] = &str[j + 1];
        }
    }
    result[i + 1] = NULL;
    return result;

}

char *my_strstr(char *haystack, char *needle)
{   
    
    int i = 0;
    int len = my_strlen(haystack);
    while(i < len)
    {
        if (haystack[i] == needle[0])
        {
            for(int j = 0;j < my_strlen(needle); j++)
            {
                if (haystack[i + j] == needle[j])
                {
                    if (j == my_strlen(needle)-1)
                    {
                        return(&haystack[i]);
                    }
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        i++;
    }
    return (NULL);

}