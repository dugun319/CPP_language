#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> list1;
	list1.push_back(20); //에서 20 삽입
	list1.push_back(30); //뒤에서 30삽입
	cout << "삽입 테스트 1" << endl;
	// 첫 번째 위치에 삽입한다.
	list<int>::iterator iterInsertPos = list1.begin(); //반복자 list1 첫번째 자리 대입
	list1.insert(iterInsertPos, 100);

	// 100, 20, 30 순으로 출력된다. 반복문
	list<int>::iterator iterEnd = list1.end(); //마지막 주소
	for (list<int>::iterator iterPos = list1.begin();
		 iterPos != iterEnd;
		 ++iterPos)
	{
		cout << "list 1 : " << *iterPos << endl;
	}


	cout << endl
		 << "삽입 테스트 2" << endl;
	// 두 번째 위치에 200을 2개 삽입한다.
	iterInsertPos = list1.begin();
	++iterInsertPos;
	list1.insert(iterInsertPos, 2, 200);
	// 100, 200, 200, 20, 30 순으로출력된다.
	iterEnd = list1.end(); //마지막 위치 대입

	for (list<int>::iterator iterPos = list1.begin();
		 iterPos != iterEnd; ++iterPos)
	{
		cout << "list 1 : " << *iterPos << endl;
	}

	cout << endl
		 << "삽입 테스트 3" << endl;
	list<int> list2;
	list2.push_back(1000);
	list2.push_back(2000);
	list2.push_back(3000);
	// 두 번째 위치에 list2의 모든 데이터를 삽입한다.
	iterInsertPos = list1.begin();
	list1.insert(++iterInsertPos, list2.begin(), list2.end());

	// 100, 1000, 2000, 3000, 200, 200, 20, 30 순으로출력된다.
	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin();
		 iterPos != iterEnd;
		 ++iterPos)
	{
		cout << "list 1 : " << *iterPos << endl;
	}
}