#include "middle_list.h"

int itc_max_lst(const vector <int> &lst){
    int maxx = -2147483648;
    if (lst.size() > 0){
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] > maxx)
                maxx = lst[i];
        }
    }
    return maxx;
}
