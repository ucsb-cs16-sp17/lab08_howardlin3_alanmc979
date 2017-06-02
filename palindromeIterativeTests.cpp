#include "strFuncs.h"
#include "tddFuncs.h"

using namespace std;

int main(){
    
    const char s1[]="aba";
    const char s2[]="anitalavalatina";    
    



    ASSERT_EQUALS( 1, isPalindromeIterative(s1));

    return 0;
}
