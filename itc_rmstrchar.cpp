#include "middle_list.h"

string itc_rmstrchar(string str, string less1){
    string new_str = str;
    int ind = itc_find_str(new_str, less1), start = 0;
    int lon = itc_len(less1);
    if (less1 == "")
        return str;
    while(ind != -1){
        new_str = itc_slice_str(str, start, ind - 1);
        new_str += itc_slice_str(str, ind + lon, itc_len(str));
        ind = itc_find_str(new_str, less1);
        str = new_str;
    }
    return new_str;
}

