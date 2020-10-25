#pragma once
#include<iostream>
#include <vector>

using namespace std;

class Status{

    private:
        int max_HP;
        int max_MP;
        int now_HP;
        int now_MP;
        int atk;
        int exp;
        int level;
        int location;
        vector<int>stat_list; //���� �Ӽ����� ��Ƶ� ����

    public:
        Status(); 
        Status(int& i_max_HP, int& i_max_MP, int& i_now_HP,int& i_now_MP, int& i_atk, int& i_exp, int& i_level, int& i_location);
        ~Status();
        void show();
        void setstatus(int& i_max_HP, int& i_max_MP, int& i_now_HP,int& i_now_MP, int& i_atk, int& i_exp, int& i_level, int& i_location);
        vector<int> getstatus();
        void set_atk(int i_atk);
        void setn_hp(int i_hp);
        void setn_mp(int i_mp);
        void setn_mhp(int i_hp, int i_mp); //hp mp ���� ����
        int getn_hp();
        int getn_mp();
        int get_atk();
        // �켱�� getset ���� ���� ��ü�� �ѹ��� ����, ��ȯ�ϴ� �������� ����, ���� Ư�� ������ ��ȯ, �����ϰ� �ʹٸ�
        //�߰� ����
};