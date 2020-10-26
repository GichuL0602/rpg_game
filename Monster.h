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
    

    void attack(Character& ch); // ������ ĳ������ ���Ȱ��� �ٲ���� �ϱ⶧���� ������ ���
    void reset(); // ���� hp,mp �缳��
    void change(const int& num, Status st); // ���� �⺻ ���� ����


    Status get_Monsterstat(); // ������ �⺻������ �ƴ� ���� ���� ��ȯ
    Status get_MonsterInfo(const int& num); // ��ȣ�� �ش��ϴ� ���� �⺻ ���� ��ȯ
    string get_name(const int& num);    
    int getMonsterNum();

    int get_nhp();
    int get_nmp();
    int get_mhp();
    int get_mmp();
    int get_atk();
    int get_exp();
    int get_level();
    int get_location();
    int get_money(); //���� �������� ������ ������ �κ��丮����

    void setMonsterNum(int num);

    void set_nhp(int i_hp);
    void set_nmp(int i_mp);
    void set_mhp(int i_hp);
    void set_mmp(int i_mp);
    void set_atk(int i_atk);
    void set_exp(int i_exp);
    void set_level(int i_level);
    void set_location(int i_location);
    void set_money(int i_money);





};