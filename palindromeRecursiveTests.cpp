#include "strFuncs.h"
#include "tddFuncs.h"

using namespace std;

int main(){

    const char s1[]="aBa";
    const char s2[]="aNitalavalatina";
    const char s3[]="three";
    const char s4[]="hi";
    const char s5[]="b";
    const char s6[]="b b b";
    const char s7[]="b b c b b b";

    ASSERT_EQUALS( 1, isPalindrome(s1));
    ASSERT_EQUALS( 1, isPalindrome(s2));
    ASSERT_EQUALS( 0, isPalindrome(s3));
    ASSERT_EQUALS( 0, isPalindrome(s4));
    ASSERT_EQUALS( 1, isPalindrome(s5));
    ASSERT_EQUALS( 1, isPalindrome(s6));  
    ASSERT_EQUALS( 0, isPalindrome(s7));  

    return 0;

}
