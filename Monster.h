#pragma once
#include<iostream>
#include <vector>
#include "Character.h"
#include "Status.h"

class Character; //�ĺ��� ���� ����

class Monster {
private:
    static Status Monsterlist[99]; //���� �⺻�������� �����ϴ� �迭�Դϴ�.
    const static string namelist[4]; // ������ �̸��� �����ϴ� �迭�Դϴ�. 
    Status monsterInfo; // ������ �⺻�����Դϴ�.
    Status monsterStatus; // ������ ���ؼ� �ٲ�� ������ ���� �����Դϴ�. 
    int MonsterNum;
    

public:

    Monster();
    Monster(const Status i_status, const int& MonsterNum);
    ~Monster();
    
    void setMonsterNum(int num); // ������ ��ȣ�� �ָ� ������ �⺻���� status ��ü�� ��ȯ�մϴ�. 
    void set_nhp(int n_hp);

    int getMonsterNum();
    int get_nhp(); 
    string get_name(const int& num);

    Status get_Monsterstat(); // ������ �⺻������ �ƴ� ���� ���� ��ȯ
    Status get_MonsterInfo(const int& num); // ��ȣ�� �ش��ϴ� ���� �⺻ ���� ��ȯ
    void attack(Character &ch); // ������ ĳ������ ���Ȱ��� �ٲ���� �ϱ⶧���� ������ ���
    void reset(); // ���� hp,mp �缳��
    void change(const int& num, Status st); // ���� �⺻ ���� ����

};