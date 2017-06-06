#include "strFuncs.h"
#include "tddFuncs.h"

using namespace std;

int main(){
    const string s1="detartrated";
    const string s2="anitalavalatina";
    const string s3="DetartratEd";
    const string  s4="atar";

    ASSERT_EQUALS( 1, isPalindrome(s1));
    ASSERT_EQUALS( 1, isPalindrome(s2));
    ASSERT_EQUALS( 1, isPalindrome(s3));
    ASSERT_EQUALS( 0, isPalindrome(s4));

    return 0;
}
