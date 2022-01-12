#include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "rus"); // language
    vector <int> ot;
    vector <int> nul;
    vector <int> pol;
    itc_pos_neg_separator_lst(lst, ot, nul, pol);
    int s = itc_sumlst(ot);
    int kol = ot.size();
    cout << "Положительные:"<< '\t'	<< '\t' << "Отрицательные:" << endl;
    cout << "Количество чисел: " << pol.size() << "," << '\t'	<< '\t' << "Количество чисел: " << ot.size() << "," << endl;
    cout << "Максимальная цифра: " << itc_max_lst(pol) << "," << '\t'	<< '\t' << "Максимальная цифра: " << itc_max_lst(ot) << "," << endl;
    cout << "Минимальная цифра: "<< itc_min_lst(pol) << "," << '\t' << '\t' << "Минимальная цифра: "<< itc_min_lst(ot) << "," << endl;
    cout << "Сумма чисел: "<< itc_sumlst(pol) << "," << '\t'	<< '\t' << "Сумма чисел: "<< itc_sumlst(ot) << "," << endl;
    cout << "Среднее значение: "<< itc_sumlst(pol) / pol.size()<< '\t'	<< '\t' << "Среднее значение: "<< s / kol << endl;
    cout << "Количество нулей: " << nul.size() << endl;
}
