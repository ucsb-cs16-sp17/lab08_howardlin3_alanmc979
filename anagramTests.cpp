#include "strFuncs.h"
#include "tddFuncs.h"

using namespace std;

int main(){

    string s1="Nala  Nala";
    string s2="Alan,,Alan";
    string s3="juan12Pablo";
    string s4="Pablo312JuAn";
    string s5="Nala  Nalaaa";
    string s6="Eleven plus two";
    string s7="Twelve plus one";
    string s8="Rats and Mice";
    string s9="in cat’s dream";

    ASSERT_EQUALS( 1, isAnagram(s1,s2));
    ASSERT_EQUALS( 0, isAnagram(s1,s5));
    ASSERT_EQUALS( 1, isAnagram(s3,s4));
    ASSERT_EQUALS( 0, isAnagram(s3,s5));
    ASSERT_EQUALS( 1, isAnagram(s6,s7));
    ASSERT_EQUALS( 1, isAnagram(s8,s9));
    

    return 0;
}
