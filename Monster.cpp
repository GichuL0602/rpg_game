#include "Monster.h"

//vector<vector<Status>> Monster::Monsterlist;
Status Monster::Monsterlist[99];
Monster::Monster()
    :MonsterNum(0)
{


}

Monster::Monster(const Status i_status, const int& i_MonsterNum)
    :MonsterNum(0)
{
    this->monsetrStatus = i_status;
    this->MonsterNum = i_MonsterNum;


    Monsterlist[i_MonsterNum] = this -> monsetrStatus;

    /*
    vector<Status> Monsterattribute;
    Monsterattribute.push_back(this->monsetrStatus);
    Monsterlist[i_MonsterNum] = Monsterattribute;
    */
   
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



void Monster::set_Nowhp(int i_hp)
{   
    this->monsetrStatus.setn_hp(i_hp);
}

Status Monster::get_Monsterstat(const int& num)
{
    return Monsterlist[num]; //��ȣ�� ���� ������ �������� ����.
}

Status Monster::get_Monsterstat()
{
    return monsetrStatus; 
}

void Monster::attack(Character i_ch)
{
    int damage = i_ch.getn_hp() - (this->monsetrStatus.get_atk());// ������ ĳ������ ���� hp - ������ ���ݷ�
    i_ch.setn_hp(damage); // ��������� ������ ĳ������ hp �ٲ��ش�.
    this->monsetrStatus.setn_mp(this->monsetrStatus.getn_mp()-20); //���� mp 20 ���� �����ش�.

}
