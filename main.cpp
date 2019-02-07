#include <iostream>
#include <string>
#include <iomanip>


int main()
{
    std::string name;
    char b;
    int border=0;
    char s=s;


    std::cout<<"Iveskite varda"<<std::endl;
    std::cin>>name;

    const int size=name.length();
    std::string str (name);



    std::cout<<"Iveskite remelio dydi (1/10)"<<std::endl;
    std::cin>>border;


    int e=size+12+border*2;




    for(int i=0;i<e;i++){
        std::cout<<"*";
    }
    std::cout<<std::endl;

    int g=size+11+border*2;

     for(int j=0;j<border;j++){
        for(int i=0;i<e;i++){
        if(i==0||i==g)std::cout<<"*";
        else std::cout<<" ";
        }
        std::cout<<std::endl;
}


std::cout<<"*";
for(int i=0;i<border;i++){
    std::cout<<" ";
}

if(str.back()=='s'){
std::cout<<"Sveikas, "<<name<<"!";
for(int i=0;i<border;i++){
    std::cout<<" ";
}
std::cout<<"*"<<std::endl;
}
else {
        std::cout<<"Sveika, "<<name<<"!";
for(int i=0;i<border+1;i++){
    std::cout<<" ";
}
std::cout<<"*"<<std::endl;
}

for(int j=0;j<border;j++){
        for(int i=0;i<e;i++){
        if(i==0||i==g)std::cout<<"*";
        else std::cout<<" ";
        }
        std::cout<<std::endl;
}
for(int i=0;i<e;i++){
        std::cout<<"*";
    }


    return 0;
}
