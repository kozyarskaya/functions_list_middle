#include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "rus"); // language
    vector <int> ot;
    vector <int> nul;
    vector <int> pol;
    itc_pos_neg_separator_lst(lst, ot, nul, pol);
    int s = itc_sumlst(ot);
    int kol = ot.size();
    cout << "�������������:"<< '\t'	<< '\t' << "�������������:" << endl;
    cout << "���������� �����: " << pol.size() << "," << '\t'	<< '\t' << "���������� �����: " << ot.size() << "," << endl;
    cout << "������������ �����: " << itc_max_lst(pol) << "," << '\t'	<< '\t' << "������������ �����: " << itc_max_lst(ot) << "," << endl;
    cout << "����������� �����: "<< itc_min_lst(pol) << "," << '\t' << '\t' << "����������� �����: "<< itc_min_lst(ot) << "," << endl;
    cout << "����� �����: "<< itc_sumlst(pol) << "," << '\t'	<< '\t' << "����� �����: "<< itc_sumlst(ot) << "," << endl;
    cout << "������� ��������: "<< itc_sumlst(pol) / pol.size()<< '\t'	<< '\t' << "������� ��������: "<< s / kol << endl;
    cout << "���������� �����: " << nul.size() << endl;
}
