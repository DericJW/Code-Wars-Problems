#include <stdbool.h>
#include <math.h>

bool is_square(int n) {

    double result;
    double value;
    int check;
    
    value = (double)n;
    result = sqrt(value);  // Get the square root of n
    
    check = rintf(result); // Round to closest integer
    
    if (check * check == n){ 
      return true;        
    }
    
    return false;

}
