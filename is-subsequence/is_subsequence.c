#include"is_subsequence.h"

bool isSubsequence(char* s, char* t) {
   /*the two pointers algortithm*/
    unsigned int i = 0;  /* counter to iterate over the s string */
    unsigned int j = 0;  /*counter to iterate over the t string */
 
 /*check if the two strings are empty */
 if(t[j] == '\0' && s[i]=='\0')
 {
    return true;
 }
    while(t[j]!='\0')
    {
        if(s[i] == t[j])
        {
            i++;
            j++;
        }
        else 
        {
            j++;
        }

        if(s[i] == '\0')
        {
            return true;
        }
    }

    return false;


}