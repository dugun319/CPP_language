#include <iostream>
#include <deque>
#include <chrono>

int main() {   

    std::deque<double> dq;

    std::chrono::system_clock::time_point start, end;

    for(int i = 0 ; i<512 ; i++){
        start = std::chrono::system_clock::now();
        dq.push_back(i);
        end = std::chrono::system_clock::now();
        std::chrono::nanoseconds sec = end - start;
        std::cout<<dq[i]<<"\t"<<sec.count()<<std::endl;
    }

}