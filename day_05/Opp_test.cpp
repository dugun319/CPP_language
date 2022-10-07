#include <iostream>
#include <cstring>
using namespace std;

/*
class Point { // 한 점을 표현하는 클래스
	int x, y; // private 멤버
public:	
	Point(int x=0, int y=0) {
		this->x = x; 
		this->y = y;
	}
	friend istream& operator >> (istream& ins, Point &a); // friend 선언
	friend ostream& operator << (ostream& stream, Point a); // friend 선언
};

istream& operator >> (istream& ins, Point &a) { // >> 연산자 함수
	cout << "x 좌표>>";
	ins >> a.x;
	cout << "y 좌표>>";
	ins >> a.y;
	return ins;
}

ostream& operator << (ostream& stream, Point a) { // << 연산자 함수
	stream << "(" << a.x << "," << a.y << ")";
	return stream;
}
*/

int main() {
    /*
	char tmp[100]; // Point 객체 생성
	cin.getline(tmp, 100);  // >> 연산자를 호출하여 x 좌표와 y 좌표를 키보드로 읽어 객체 p 완성
	cout << tmp;
    cout << strlen(tmp);  // << 연산자를 호출하여 객체 p 출력
    cout << cin.gcount();

    cout<<endl;
    */

    cout.width(10);
    cout.precision(4);
    cout<<setfill('~')<<left<<2./3.;
    
}