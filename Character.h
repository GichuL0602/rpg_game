#pragma once
#include<iostream>
#include <vector>
#include "Monster.h"
#include "Status.h"

class Monster; //�ĺ��� ���� ����

class Character
{
private:
    Status status;
    //Inventory(money,slot);
    //int slot[10]; ��ȣ�԰� ����غ� ��� ���� �ƴ� ��ȣ���� �ٷ�°� �� ������ ���ٰ� �ϼż� �����߽��ϴ�.
public:
    Character(const Status i_status);
    ~Character();
    void show_stat(); //sata ��ü ���

    int get_nhp();
    Status get_stat();
    int get_atk();
    

    void set_nhp(int i_hp);
    void set_stat(int& i_max_HP, int& i_max_MP, int& i_now_HP, int& i_now_MP, int& i_atk, int& i_exp, int& i_level, int& i_location);
    void set_atk(int i_atk);

    void attack(Monster &mon); // �����Լ� ������ ������ ������ �ٲ���� �ϱ� ������ ������ ���
    void check_level(); // ������ �˻� �� ���� ���� ������ �������ִ� �Լ� �Դϴ�. status ��ü�� �������� �ʾƵ� �˴ϴ�.
    //Inventory.open();


};
