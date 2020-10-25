#pragma once
#include<iostream>
#include <string>
#include <vector>

using namespace std;

class Item {
    private:
        static const string namelist[4]; // ������ ��ȣ�� ���� �̸���
        static vector<vector<int>> itemlist;
        int itemNum;
        int itemType;
        int itemValue;
        int itemPrice;
        //vector<int> itemattribute; // ������ �Ӽ����� ��� ����
        int itemarr[][];

    public:
        Item();
        Item(const int& itemNum, const int& itemType, const int& itemValue, const int& itemPrice);
        ~Item();

        int get_itemNum() const;
        vector<int> get_item(int i_num) const;
        string get_itemName(const int& number) const;
        
        
        // �켱�� getset ���� ���� ��ü�� �ѹ��� ����, ��ȯ�ϴ� �������� ����, ���� Ư�� ������ ��ȯ, �����ϰ� �ʹٸ�
        //�߰� ����


};