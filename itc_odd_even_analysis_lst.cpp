#include "middle_list.h"

void itc_odd_even_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "rus"); //language
    vector <int> ev;
    vector <int> unev;
    itc_odd_even_separator_lst(lst, ev, unev);
    cout << "������ ������:" << endl;
    cout << "���������� ������ �����: " << ev.size() << "," << '\t'	<< '\t' << "���������� �������� �����: " << unev.size() << endl;
    cout << "������������ ������ �����: " << itc_max_lst(ev) << "," << '\t'	<< '\t' << "������������ �������� �����: " << itc_max_lst(unev) <<"," << endl;
    cout << "����������� ������ �����: "<< itc_min_lst(ev) << "," << '\t' << '\t' << "����������� �������� �����: "<< itc_min_lst(unev) << "," << endl;
    cout << "����� ������ �����: "<< itc_sumlst(ev) << "," << '\t'	<< '\t' << "����� �������� �����: "<< itc_sumlst(unev) << "," << endl;
}
