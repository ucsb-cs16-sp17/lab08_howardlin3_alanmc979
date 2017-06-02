#include "strFuncs.h"
#include "tddFuncs.h"

using namespace std;

int main(){

    const char s1[]="Ana";
    ASSERT_EQUALS( 1,isPalindrome(s1));

    return 0;

}
