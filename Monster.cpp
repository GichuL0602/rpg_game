#include "Monster.h"

Status Monster::Monsterlist[99]; // 몬스터의 기본정보들을 담고있습니다(몬스터 도감 같은 개념)
const string Monster::namelist[4] = { "슬라임", "주황버섯", "리본돼지", "스텀프" };
Monster::Monster()
    :MonsterNum(0){
}

Monster::Monster(const Status i_status, const int& i_MonsterNum)
    :MonsterNum(0)
{
    this->monsterStatus = i_status;
    this->monsterInfo = this->monsterStatus;// 몬스터의 기본정보를 설정
    Monsterlist[i_MonsterNum] = this->monsterInfo; // 몬스터 도감에 해당하는 번호에 몬스터 기본 정보 저장
    this->MonsterNum = i_MonsterNum;
   
}

Monster::~Monster(){
}


void Monster::attack(Character& i_ch) {
    int use_mp = 20;
    int damage = i_ch.get_nhp() - (this->get_atk());// 데미지 캐릭터의 현재 hp - 몬스터의 공격력
    i_ch.set_nhp(damage); // 데미지라는 변수로 공격대상 캐릭터의 hp 바꿔준다.
    this->set_nmp(this->get_nmp() - use_mp); //몬스터 mp 20 감소 시켜준다.

}

void Monster::reset() {
    this->monsterStatus = monsterInfo; // 몬스터의 현재 정보를 몬스터가 가지고 있는 기본 정보로 재설정
}

void Monster::change(const int& num, Status st) { // 몬스터 번호에 해당하는 기본정보객체 반환 
    Monsterlist[num] = st;
}


///get
string Monster::get_name(const int& num) {// 몬스터 번호를 입력하면 해당 몬스터의 이름을 반환합니다. 다만 status에서는 몬스터 이름 정보를 줄수 없기 떄문에 코드 내부에서 정적배열을 통해서
    // 정하는 방식을 사용했습니다. 
    return this->namelist[num - 1];
}
Status Monster::get_Monsterstat() {
    return this->monsterStatus; //몬스터의 기본정보가 아닌 몬스터의 현재 정보
}
Status Monster::get_MonsterInfo(const int& num) {
    return Monsterlist[num];
}
int Monster::getMonsterNum() {
    return this->MonsterNum;
}

int Monster::get_nhp() {
    return this->monsterStatus.get_nhp();
}
int Monster::get_nmp() {
    return this->monsterStatus.get_nmp();
}
int Monster::get_mhp() {
    return this->monsterStatus.get_mhp();
}
int Monster::get_mmp() {
    return this->monsterStatus.get_mmp();
}
int Monster::get_atk() {
    return this->monsterStatus.get_atk();
}
int Monster::get_exp() {
    return this->monsterStatus.get_exp();
}
int Monster::get_level() {
    return this->monsterStatus.get_level();
}
int Monster::get_location() {
    return this->monsterStatus.get_location();
}
int Monster::get_money() {
    return this->monsterStatus.get_money();
}



///set
void Monster::setMonsterNum(const int num) {
    this->MonsterNum = num;
}

void Monster::set_nhp(int i_hp) {
    this->monsterStatus.set_nhp(i_hp);
}
void Monster::set_nmp(int i_mp) {
    this->monsterStatus.set_nmp(i_mp);
}
void Monster::set_mhp(int i_hp) {
    this->monsterStatus.set_mhp(i_hp);
}
void Monster::set_mmp(int i_mp) {
    this->monsterStatus.set_mmp(i_mp);
}
void Monster::set_atk(int i_atk) {
    this->monsterStatus.set_atk(i_atk);
}
void Monster::set_exp(int i_exp) {
    this->monsterStatus.set_exp(i_exp);
}
void Monster::set_level(int i_level) {
    this->monsterStatus.set_level(i_level);
}
void Monster::set_location(int i_location) {
    this->monsterStatus.set_location(i_location);
}
void Monster::set_money(int i_money) {
    monsterStatus.set_money(i_money);
}



