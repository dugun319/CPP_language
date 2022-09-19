#include <iostream>
using namespace std;

class Rect;

class RectManager{
public :
    bool equals(Rect r, Rect s);
    void copy(Rect& dest, Rect& src);
};

//Rect class 선언
class Rect {
private :
    int width, height;
public :
    Rect(int width, int height) {this->width = width; this->height = height;}
    //클래스의 모든 함수를 프렌드로 선언
    friend RectManager;
};

bool RectManager::equals(Rect r, Rect s){
    if(r.width == s.width && r.height == r.height){
        return true;
    }
    else {
        return false;
    }
}

void RectManager::copy(Rect& dest, Rect& src) {
    dest.width = src.width;
    dest.height = src.height;
}

int main(){
    Rect a(3, 4), b(5, 6);
    RectManager man;

    man.copy(b, a);
    
    if(man.equals(a, b)){
        cout<<"equal"<<endl;
    }
    else{
        cout<<"Not equal"<<endl;
    }
}