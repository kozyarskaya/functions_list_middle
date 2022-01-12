#include "middle_list.h"

int itc_min_lst(const vector <int> &lst){
    int mann = 2147483647;
    if (lst.size() > 0){
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] < mann)
                mann = lst[i];
        }
    }
    return mann;
}
