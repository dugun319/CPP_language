#include <iostream>
#include <string>
using namespace std;

int main(){

    string str; // 빈 문자열을 가진 스트링 객체
    string address("서울시 성북구 삼선동 389"); // 문자열 리터럴로 초기화
    string copyAddress(address); // address를 복사한 copyAddress 생성

    // C-스트링(char [] 배열)으로부터 스트링 객체 생성
    char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'}; // C-스트링
    string title(text); // "Love C++" 문자열을 가진 스트링 객체 생성
    cout<<title<<endl;
    cout<<"title.capacity() =\t"<<title.capacity()<<endl;
    cout<<"title.size() =\t\t"<<title.size()<<endl;
    cout<<"title.length() =\t"<<title.length()<<endl;
    cout<<"sizeof(title) =\t\t"<<sizeof(title)<<endl<<endl;

    title.append("test");
    cout<<title<<endl;
    cout<<"title.capacity() =\t"<<title.capacity()<<endl;
    cout<<"title.size() =\t\t"<<title.size()<<endl;
    cout<<"title.length() =\t"<<title.length()<<endl;
    cout<<"sizeof(title) =\t\t"<<sizeof(title)<<endl<<endl;

    title.append("try hard");
    cout<<title<<endl;
    cout<<"title.capacity() =\t"<<title.capacity()<<endl;
    cout<<"title.size() =\t\t"<<title.size()<<endl;
    cout<<"title.length() =\t"<<title.length()<<endl;
    cout<<"sizeof(title) =\t\t"<<sizeof(title)<<endl<<endl;

    title.append("try hard already 123456789asdfasdfasgxfgdfhftyurtjyfhgjghjfhgjakdjhfskjdhfklwjehrliuhwleriuykdfhkjdfhkdhgfgjhsdflkuhgslkdfjgsdhfg");
    cout<<title<<endl;
    cout<<"title.capacity() =\t"<<title.capacity()<<endl;
    cout<<"title.size() =\t\t"<<title.size()<<endl;
    cout<<"title.length() =\t"<<title.length()<<endl;
    cout<<"sizeof(title) =\t\t"<<sizeof(title)<<endl<<endl;

    title.clear();
    cout<<title<<endl;
    cout<<"title.capacity() =\t"<<title.capacity()<<endl;
    cout<<"title.size() =\t\t"<<title.size()<<endl;
    cout<<"title.length() =\t"<<title.length()<<endl;
    cout<<"sizeof(title) =\t\t"<<sizeof(title)<<endl<<endl;

    return 0;
}

