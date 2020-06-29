#include <stdbool.h>
#include <string.h>

bool IsIsogram(char *str) 
{
    bool isIsogram = true;
    
    for (int i = 0; i < (int)strlen(str) - 1; i++) {
      for (int j = i+1; j < strlen(str); j++) { 
        if (tolower(str[i]) == tolower(str[j])) {
          isIsogram = false;
        }
      }
    }
    
    return isIsogram;
}
