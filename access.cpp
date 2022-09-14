#include <iostream>

class Mother {
protected:
    int prot_mom = 5;
private:
    int priv_mom = 4;
public:
    int pub_mom = 3;
    int getPriv_mom();
    int showValue();
};

int Mother::getPriv_mom(){
    return priv_mom;
}

int Mother::showValue(){
    std::cout<<"prot_mom = "<<prot_mom<<std::endl;
    std::cout<<"priv_mom = "<<priv_mom<<std::endl;
}

class Son : protected Mother {
    int show_prot_value();
};

int Son::show_prot_value() {
    std::cout<<"prot_mom = "<<prot_mom<<std::endl;
    //std::cout<<"priv_mom = "<<priv_mom<<std::endl;
}

class Grand_Son : protected Son {
    int show_grand_son();
};

int Grand_Son::show_grand_son() {
    std::cout<<"pub_mom = "<<pub_mom<<std::endl;
    std::cout<<"prot_mom = "<<prot_mom<<std::endl;
    //std::cout<<"priv_mom = "<<priv_mom<<std::endl;
}

int main(){

    Mother mom;
    int pri_value = mom.getPriv_mom();

    std::cout<<"result of mom.getPriv_mom() = "<<pri_value<<std::endl;
    mom.showValue();

    std::cout<<"Before pub_mom = "<<mom.pub_mom<<std::endl;
    mom.pub_mom = 2;
    std::cout<<"After pub_mom = "<<mom.pub_mom<<std::endl;

    Son sonny;

    sonny.showValue();

    return 0;
}