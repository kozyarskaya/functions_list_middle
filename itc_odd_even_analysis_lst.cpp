#include "middle_list.h"

void itc_odd_even_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "rus"); //language
    vector <int> ev;
    vector <int> unev;
    itc_odd_even_separator_lst(lst, ev, unev);
    cout << "Анализ списка:" << endl;
    cout << "Количество четных чисел: " << ev.size() << "," << '\t'	<< '\t' << "Количество нечетных чисел: " << unev.size() << endl;
    cout << "Максимальная четная цифра: " << itc_max_lst(ev) << "," << '\t'	<< '\t' << "Максимальная нечетная цифра: " << itc_max_lst(unev) <<"," << endl;
    cout << "Минимальная четная цифра: "<< itc_min_lst(ev) << "," << '\t' << '\t' << "Минимальная нечетная цифра: "<< itc_min_lst(unev) << "," << endl;
    cout << "Сумма четных чисел: "<< itc_sumlst(ev) << "," << '\t'	<< '\t' << "Сумма нечетных чисел: "<< itc_sumlst(unev) << "," << endl;
}
