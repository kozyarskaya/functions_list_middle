#include "middle_list.h"

int itc_find_str(string str1, char str2){
    long long len1 = 0;
    len1 =  itc_len(str1);
    long long len2 = 0;
    long long kol = 0;
    for (long long i = 0; i < len1; i++){
        kol = 0;
        if (str1[i] == str2){
            return i;
        }
    }
    return -1;
}
