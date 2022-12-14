#include <iostream>
#include <list>
using namespace std;
// 아이템 구조체
struct Item
{
    Item(int itemCd, int buyMoney)
    {
        ItemCd = itemCd;
        BuyMoney = buyMoney;
    }
    int ItemCd;   // 아이템코드
    int BuyMoney; // 판매금액
};

int main()
{
    list<Item> Itemlist; // Itemlist 선언
    // 앞에 데이터 추가
    Item item1(1, 2000);        // item1 (아이템코드,판매금액)생성
    Itemlist.push_front(item1); // Itemlist 삽입
    Item item2(2, 1000);
    Itemlist.push_front(item2);
    // 뒤에 데이터 추가
    Item item3(3, 3000);
    Itemlist.push_back(item3);
    Item item4(4, 4500);
    Itemlist.push_back(item4);
    // 아이템 코드 번호가 2, 1, 3, 4의 순서로 출력된다.

    list<Item>::iterator iterEnd = Itemlist.end(); // iterEnd에 마지막 순서 값 대입
    //반복

    for (list<Item>::iterator iterPos = Itemlist.begin();
         iterPos != iterEnd;
         ++iterPos)
    {
        cout << "아이템 코드 : " << iterPos->ItemCd << endl;
    }
    //반복 끝
    // 앞에 있는 데이터를 삭제한다.
    Itemlist.pop_front();
    // 앞에 있는 데이터의 참조를 리턴한다.
    Item front_item = Itemlist.front();
    // 아이템 코드 1이 출력된다. 2번이 삭제됨
    cout << "아이템 코드 : " << front_item.ItemCd << endl;

    // 마지막에 있는 데이터를 삭제한다.
    Itemlist.pop_back();

    // 마지막에 있는 데이터의 참조를 리턴한다.
    Item back_item = Itemlist.back();
    // 아이템 코드 3이 출력된다.
    cout << "아이템 코드 : " << back_item.ItemCd << endl;

    // 저장된 데이터가 있는가?
    if (false == Itemlist.empty())
    {
        list<Item>::size_type Count = Itemlist.size();
        cout << "남아 있는 아이템 개수: " << Count << endl;
    }

    // 모든 데이터를 지운다.
    Itemlist.clear();
    list<Item>::size_type Count = Itemlist.size();
    cout << "남아 있는 아이템 개수: " << Count << endl;
}