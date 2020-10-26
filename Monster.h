#pragma once
#include<iostream>
#include <vector>
#include "Character.h"
#include "Status.h"

class Character; //�ĺ��� ���� ����

class Monster {
private:
    static Status Monsterlist[99];
    Status monsterInfo; // ������ �⺻�����Դϴ�.
    Status monsterStatus; // ������ ���ؼ� �ٲ�� ������ ���� �����Դϴ�. 
    int MonsterNum;
    

public:

    Monster();
    Monster(const Status i_status, const int& MonsterNum);
    ~Monster();
    int getMonsterNum();
    void setMonsterNum(int num); // ������ ��ȣ�� �ָ� ������ �⺻���� status ��ü�� ��ȯ�մϴ�. 
    int get_nhp(); 
    void set_nhp(int n_hp); 
    Status get_Monsterstat(); // ������ �⺻������ �ƴ� ���� ���� ��ȯ
    Status get_MonsterInfo(const int& num); // ��ȣ�� �ش��ϴ� ���� �⺻ ���� ��ȯ
    void attack(Character &ch); // ������ ĳ������ ���Ȱ��� �ٲ���� �ϱ⶧���� ������ ���
    void reset(); // ���� hp,mp �缳��
    void change(const int& num, Status st); // ���� �⺻ ���� ����

};