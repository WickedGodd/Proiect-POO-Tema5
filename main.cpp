#include <cstring>
#include <iostream>
#include <cmath>
#include "Polynomial.hpp"
#include <vector>

int main()
{
    Polynomial p1;
    std::cin>>p1;
    std::cout<<p1<<'\n';
    Polynomial p2;
    std::cin>>p2;
    std::cout<<p2<<'\n';
    Polynomial p3;
    std::cin>>p3;
    std::cout<<p2[2]<<'\n';
    std::cout<<p1+p2<<'\n';
    std::cout<<p1*p2<<'\n';
    std::cout<<p1*2<<'\n';
    std::cout<<2*p1<<'\n';
    std::cout<<2+p2<<'\n';
    std::cout<<p2+2<<'\n';
    std::cout<<+p2<<'\n';
    std::cout<<-p2<<'\n';
    if(p1==p3)
    {
        std::cout<<"p1 == p3"<<'\n';
    }
    if(p1!=p2)
    {
        std::cout<<"p1 != p3"<<'\n';
    }
    Polynomial p4,p5;
    std::cin>>p4;
    if(3==p4)
    {
        std::cout<<"3 == p4"<<'\n';
    }
    if(p4==3)
    {
        std::cout<<"p4 == 3"<<'\n';
    }
    if(p4!=3)
    {
        std::cout<<"p4 != 3"<<'\n';
    }
    if(3!=p4)
    {
        std::cout<<"3 != p4"<<'\n';
    }


    return 0;

}
