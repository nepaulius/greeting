#include <iostream>
#include <string>
#include <iomanip>


int main()
{

    char b;
    int border=0;
    char s=s;


    std::cout<<"Iveskite varda"<<std::endl;
    std::string name;
    std::cin>>name;

    const int length=name.length();
    std::string str (name);

    const std::string greeting = "Sveikas, " + name + "!";
    const std::string greeting1 = "Sveika, " + name + "!";



    std::cout<<"Iveskite remelio dydi (1/10)"<<std::endl;
    std::cin>>border;



    int firstline=length+12+border*2;

    for(int i=0;i<firstline;i++){
        std::cout<<"*";
    }
    std::cout<<std::endl;

    int lines=length+11+border*2;

     for(int j=0;j<border;j++){
        for(int i=0;i<firstline;i++){
        if(i==0||i==lines)std::cout<<"*";
        else std::cout<<" ";
        }
        std::cout<<std::endl;
}


std::cout<<"*";
for(int i=0;i<border;i++){
    std::cout<<" ";
}






if(str.back()=='s'){
std::cout<<greeting;
for(int i=0;i<border;i++){
    std::cout<<" ";
}
std::cout<<"*"<<std::endl;
}
else {
        std::cout<<greeting1;
for(int i=0;i<border+1;i++){
    std::cout<<" ";
}
std::cout<<"*"<<std::endl;
}

for(int j=0;j<border;j++){
        for(int i=0;i<firstline;i++){
        if(i==0||i==lines)std::cout<<"*";
        else std::cout<<" ";
        }
        std::cout<<std::endl;
}
for(int i=0;i<firstline;i++){
        std::cout<<"*";
    }


    return 0;
}
