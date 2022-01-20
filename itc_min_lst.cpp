#include "middle_list.h"

int itc_min_lst(const vector <int> &lst){
    int minn = 2147483647;
    if (lst.size() > 0){
        for (int i = 0; i < lst.size(); i++){
            if (lst[i] < minn)
                minn = lst[i];
        }
    }
    return minn;
}
