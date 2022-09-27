#include <iostream>
#include <fstream>
using namespace std;

int main(){
	const char* file="system.ini";//읽을 파일명
	ifstream fin(file);
	if(!fin){
		cout << file << "열기오류" << endl;
		return 0;
	}
	int count = 0;
	int c;
	while((c=fin.get()) != EOF){ // EOF를 만날 때까지 읽음
		cout << (char)c; // 읽을 문자를 화면에 출력
		count++;//읽은 문자 개수 카운트
	}
	
	cout << "읽은 바이트 수는 " << count << endl;
	fin.close(); // 파일닫기
}