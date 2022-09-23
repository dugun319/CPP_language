#include <iostream>
#include <string>
#include <algorithm>

class Ant_number
{
private:
    std::string start_number = "1";
    std::string result;

public:
    void cnt_repeat_count(std::string &setStart_number, std::string &result);
    void setStart_number(int a) { this->start_number = a; }
};
/*
void Ant_number::cnt_repeat_count(std::string& setStart_number, std::string& result)
{
    int cnt_repeat_num[9] = {0,};
    result.clear();

    for (int j = 0; j < this->start_number.length(); j++)
    {
        std::string src_str = "1";
        std::string des_str(this->start_number.substr(j, 1));
        if (src_str.compare(des_str) == 0)
        {
            cnt_repeat_num[0]++;
        }

        std::string src_str = "2";
        if (src_str.compare(des_str) == 0)
        {
            cnt_repeat_num[1]++;
        }

        std::string src_str = "3";
        if (src_str.compare(des_str) == 0)
        {
            cnt_repeat_num[2]++;
        }

        std::string src_str = "4";
        if (src_str.compare(des_str) == 0)
        {
            cnt_repeat_num[3]++;
        }

        std::string src_str = "5";
        if (src_str.compare(des_str) == 0)
        {
            cnt_repeat_num[4]++;
        }

        std::string src_str = "6";
        if (src_str.compare(des_str) == 0)
        {
            cnt_repeat_num[5]++;
        }

        std::string src_str = "7";
        if (src_str.compare(des_str) == 0)
        {
            cnt_repeat_num[6]++;
        }

        std::string src_str = "8";
        if (src_str.compare(des_str) == 0)
        {
            cnt_repeat_num[7]++;
        }

        std::string src_str = "9";
        if (src_str.compare(des_str) == 0)
        {
            cnt_repeat_num[8]++;
        }
    }

    for(int i = 0 ; i < 9 ; i++) {
        if(cnt_repeat_num[i] != 0) {
            std::string tar_num = std::to_string(i);
            std::string cnt_num = std::to_string(cnt_repeat_num[i]);
            result.append(tar_num);
            result.append(cnt_num);
        }
    }

    start_number = result;
}
*/

int main()
{

    std::string result;
    std::string str = "1";

    std::cout<<str<<std::endl;

    int cnt = 0;

    for (int j = 0; j < 10; j++)
    {
        result.clear();

        std::string str_comp(str.substr(0, 1));

        for (int i = 0; i < str.length() + 1; i++)
        {

            std::string str_move(str.substr(i, 1));

            if (str_move != str_comp)
            {
                result.append(str_comp);
                result.append(std::to_string(cnt));
                str_comp = str_move;
                cnt = 0;
            }
            if (str_move == str_comp)
            {
                cnt++;
            }
        }
        
        std::cout << result << std::endl;
        str = result;

    }

}