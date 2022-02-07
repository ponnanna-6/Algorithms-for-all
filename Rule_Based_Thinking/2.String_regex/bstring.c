#include <regex.h>
#include <stdio.h>
  
int main(){
    regex_t regex;
    int value;
    char test_strings[20][20]={"blasting","blustering","boasting","boosting","bootstrapping","bowstrings","bristling","busting"};

    char regex_string[50]="b[a-zA-Z][a-zA-Z]st[a-zA-Z]*ing$";
  
    for(int i=0;i<9;i++){
      value = regcomp( &regex, regex_string, 0); 
      value = regexec( &regex, test_strings[i], 0, NULL, 0); 
     
      if(value==0){
        printf("Matched: %s\n", test_strings[i]);        
      }     
      else if(value==REG_NOMATCH){
        printf("No Match: %s\n", test_strings[i]);
      }
    }  
  
    return 0;
}