//
// Created by ASUS on 2020-10-21.
//
#include <iostream>
#include "Inventory.h"
#include "Character.h"
using namespace std;

//아이템 리스트를 통해 무슨 아이템인지 판별하여 String을 반환해주는 함수
//내가 할 것
//void addSlotList(int itemNum);

//캐릭터 Class
//void setMoney(int num)

//item Class
//String itemToString(Item)


//String[]화면에 출력해주는 함수.
//
class Shop {
private:
    Item sellItem;
    int sellItemList[4];
    string choice;
    Character myCharacter;
    Inventory myInventory;
public:
    Shop(Character myCharacter, Inventory myInventory);
    void showShop(Inventory inventory);
    bool buy(int index);
    bool sell(int sellItemNumber, int sellCount);
};