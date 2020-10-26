#include "Monster.h"

Status Monster::Monsterlist[99]; // ������ �⺻�������� ����ֽ��ϴ�(���� ���� ���� ����)

Monster::Monster()
    :MonsterNum(0)
{


}

Monster::Monster(const Status i_status, const int& i_MonsterNum)
    :MonsterNum(0)
{
    this->monsterStatus = i_status;
    this->monsterInfo = this->monsterStatus;// ������ �⺻������ ����
    Monsterlist[i_MonsterNum] = this->monsterInfo; // ���� ������ �ش��ϴ� ��ȣ�� ���� �⺻ ���� ����
    this->MonsterNum = i_MonsterNum;
   
}

Monster::~Monster()
{

}

int Monster::getMonsterNum()
{
    return this->MonsterNum;
}

void Monster::setMonsterNum(const int num)
{
    this->MonsterNum = num;
}

int Monster::get_nhp()
{
    return this->monsterStatus.get_nhp();
}

void Monster::set_nhp(int i_hp)
{   
    this->monsterStatus.set_nhp(i_hp);
}


Status Monster::get_Monsterstat()
{   
    return this->monsterStatus; //������ �⺻������ �ƴ� ������ ���� ����

}

Status Monster::get_MonsterInfo(const int& num)
{   
    return Monsterlist[num]; 
}

void Monster::attack(Character &i_ch)
{
    int use_mp = 20;
    int damage = i_ch.get_nhp() - (this->monsterStatus.get_atk());// ������ ĳ������ ���� hp - ������ ���ݷ�
    i_ch.set_nhp(damage); // ��������� ������ ���ݴ�� ĳ������ hp �ٲ��ش�.
    this->monsterStatus.set_nmp(this->monsterStatus.get_nmp()-use_mp); //���� mp 20 ���� �����ش�.

}

void Monster::reset()
{
    this->monsterStatus = monsterInfo; // ������ ���� ������ ���Ͱ� ������ �ִ� �⺻ ������ �缳��
}

void Monster::change(const int& num, Status st) //()
{
    Monsterlist[num] = st;
    
}
