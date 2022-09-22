#include <fstream>
#include <iostream>

int main()
{
    std::ofstream fout;
    fout.open("song.txt"); // song.txt 파일 열기
    if (!fout)
    { // fout 스트림의 파일 열기가 실패한 경우
        // 파일 열기 실패를 처리하는 코드
    }
    int age = 21;
    //std::string singer = "Kim";
    char *singer = "Kim";
    //std::string song = "Yesterday";
    char *song = "Yesterday";
    fout << age << '\n';    // 파일에 21과 '\n'을 기록한다.
    fout << singer << std::endl; // 파일에 "Kim"과 '\n'을 덧붙여 기록한다.
    fout << song << std::endl;   // 파일에 "Yesterday"와 '\n'을 덧붙여 기록한다.

    fout.close();
    
}
