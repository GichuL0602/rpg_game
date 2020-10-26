#include "Status.h"
#include "Monster.h"
#include "Character.h"
#include "Item.h"
#include <conio.h>

int main() {
    int num = 1;
    int hp = 3;
    int money = 4000;
    Status st(hp, hp, hp, hp, num, num, num, num, money); //money ����
    Character ch(st);
    Monster mon(st, 1);

    ch.attack(mon);
    cout << mon.get_nhp() << endl; //// hp = 3 , atk = 1 �̱⶧���� ������ �ѹ� �Ѵٸ� hp 2�� �Ǿ�� �� �� �Դϴ�.
    ch.attack(mon);
    mon.attack(ch);
    mon.attack(ch);
    // ĳ���Ϳ� ������ status�� �Ȱ��� mp �Ҹ𷮵� 20�̱� ������ 
    //ĳ���Ϳ� ������ hp mp�� �ι� �������� �� 1 -37�� ���;� �մϴ�. 
    cout << mon.get_nhp() << ","<< mon.get_Monsterstat().get_nmp() << endl; // �ΰ��� ������� ���� ������ ���� �����մϴ�. ���Ŀ� �Լ��� ���ٰ� �Ѵٸ� character, monster�κ��� get set 
    //�Լ��� �ƿ� �����־ ����� ������ �����ϴ�. �켱�� �̴�� �ΰڽ��ϴ�.
    cout << ch.get_nhp() << "," <<ch.get_stat().get_nmp()<<endl;
    cout << mon.get_name(3) << endl; // �̸� ������ status�� ���� ������ Ŭ�������ο��� ���ϴ� ������� �������־����ϴ�.
    cout << mon.get_money() << endl;
    mon.set_money(2000);
    cout << mon.get_money() << endl;

    return 0;

}