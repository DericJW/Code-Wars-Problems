#include <stddef.h>

size_t get_count(const char *s)
{
    int count = 0;
    
//  printf("%s", s);

    for (int i = 0; i < strlen(s); i++){
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        count++;
      }
    
//  printf("%d", count);
    
    return count;
}