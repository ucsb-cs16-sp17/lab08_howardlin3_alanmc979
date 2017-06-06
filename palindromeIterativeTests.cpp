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


    ASSERT_EQUALS( 1, isPalindromeIterative(s1));
    ASSERT_EQUALS( 1, isPalindromeIterative(s2));
    ASSERT_EQUALS( 0, isPalindromeIterative(s3));
    ASSERT_EQUALS( 0, isPalindromeIterative(s4));
    ASSERT_EQUALS( 1, isPalindromeIterative(s5));
    ASSERT_EQUALS( 1, isPalindromeIterative(s6));

    return 0;
}
