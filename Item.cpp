#include "Item.h"
const string Item::namelist[4] = {"���","���","HP����","MP����"}; // ��ȣ�� ���� ������ �̸���

Item::Item()
    :itemNum(0),itemType(0),itemValue(1),itemPrice(0)
{

}

Item::Item(const int& i_itemNum, const int& i_itemType, const int& i_itemValue, const int& i_itemPrice)
    
{
    this->itemNum = i_itemNum;
    this->itemType = i_itemType;
    this->itemPrice = i_itemPrice;
    this -> itemValue = i_itemValue;

    itemattribute.push_back(this->itemNum);
    itemattribute.push_back(this->itemPrice);
    itemattribute.push_back(this->itemType);
    itemattribute.push_back(this->itemValue);

}

Item::~Item()
{
    
}

int Item::get_itemNum() const
{
    return this->itemNum;
}

vector<int> Item::get_item() const
{
    return this->itemattribute;

}

string Item::get_itemName(const int& number) const
{   
    if(number > 4 ){
        return "��ȿ�������� �������Դϴ�.";
    }
    return this->namelist[number-1];
}


