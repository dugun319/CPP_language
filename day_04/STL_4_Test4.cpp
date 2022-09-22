#include <iostream>
#include <list>
using namespace std;

struct Item
{
	Item(int itemcd, int buyMoney)
	{
		ItemCd = itemcd;
		BuyMoney = buyMoney;
	}

	int ItemCd;
	int BuyMoney;
};

int main()
{
	list<int> list1;
	list1.push_back(10);
	list1.push_back(20);
	list1.push_back(30);
	list1.push_back(20);

	list<int>::iterator iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin();
		 iterPos != iterEnd;
		 ++iterPos)
	{
		cout << "list 1: " << *iterPos << endl;
	}
	cout << endl
		 << "remove 테스트 1" << endl;

	list1.remove(20);

	list<int>::iterator iterEnd2 = list1.end();
	for (list<int>::iterator iterPos = list1.begin();
		 iterPos != iterEnd2;
		 ++iterPos)
	{
		cout << "list 1: " << *iterPos << endl;
	}

	cout << endl
		 << "remove 테스트 2 - 구조체를 삭제" << endl;

	list<Item *> Itemlist;

	Item *pitem1 = new Item(10, 100);
	Itemlist.push_back(pitem1);
	Item *pitem2 = new Item(20, 200);
	Itemlist.push_back(pitem2);
	Item *pitem3 = new Item(30, 300);
	Itemlist.push_back(pitem3);

	Itemlist.remove(pitem2);

	list<Item *>::iterator iterEnd3 = Itemlist.end();
	for (list<Item *>::iterator iterPos = Itemlist.begin();
		 iterPos != iterEnd3;
		 ++iterPos)
	{
		cout << "Itemlist : " << (*iterPos)->ItemCd << endl;
	}
}