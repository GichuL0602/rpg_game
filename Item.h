#pragma once
#include<iostream>
#include <string>
#include <vector>

using namespace std;

class Item {
private:
    static const string namelist[4]; // ������ ��ȣ�� ���� �̸���
    vector<vector<int>> itemlist;
    vector<int> itemlist1;
    vector<int> itemlist2;
    vector<int> itemlist3;
    vector<int> itemlist4;
    int itemNum;

public:
    Item();
    ~Item();

    int get_itemNum() const;
    vector<int> get_item(int i_num) const;
    string get_itemName(const int& number) const;


    // �켱�� getset ���� ���� ��ü�� �ѹ��� ����, ��ȯ�ϴ� �������� ����, ���� Ư�� ������ ��ȯ, �����ϰ� �ʹٸ�
    //�߰� ����


};