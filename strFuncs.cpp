#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result
 */
bool isAnagram(string s1, string s2){
       int n1=s1.length(),n2=s2.length();
    string str1="",str2="",r="";
    for(int i=0;i<n1;i++){
        if(isalpha(s1[i])){
            str1+=tolower(s1[i]);
            }
        }           
    for(int i=0;i<n2;i++){
        if(isalpha(s2[i])){
            str2+=tolower(s2[i]);
            }
        };
    if(str1.length()!=str2.length()){
        return false;
       }
    else{
        int len=str1.length();
         for(int i=0;i<len;i++){
             if(str2.find(str1[i])==string::npos){
                 return false;
                 }
             else{
                 int ind2=str2.find(str1[i]);
                 r+=str2[ind2];
                 str2.erase(ind2,1);
                 }   
             }    
        }
    return (str1==r);
}
/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You may provide a recursive OR non-recursive solution*/
bool isPalindrome(const string s1){
    int len=s1.length();
    for(int i=0;i<len;i++){
        if (tolower(s1[i])!=tolower(s1[len-1-i])){
            return false;
        }
    }
    return true;
}

bool isPalindromeHelper(const char *s1, int len);
/* Precondition: s1 is a valid C-string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You MUST provide a recursive implementation and are recommended to write a helper function where the recursion actually takes place*/
bool isPalindrome(const char *s1){
    return true;
}

/* Precondition: s1 is a valid C-string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You MUST provide an iterative implementation */
bool isPalindromeIterative(const char *s1){
    return true;
}



