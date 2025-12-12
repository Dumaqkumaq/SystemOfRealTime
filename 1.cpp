#include<iostream>
#include<time.h>
#include <thread>
#include <mutex>
#include <string>

void Func(std::string name);

int main(){
    // ----#1-----
    // std::string s = "asdc";

    // for(unsigned int i = s.size() - 1; i >=0; i--){
    //     std::cout<<s[i]<<std::endl;
    // }

    // ----#2-----

    // clock_t start = clock();
    // std::string s = "asdc";
    // for(int i = 0; i <= 10'000'000; i++){
    //     int fact = 1;
    //     for(int j = 1; j<=10;j++){
    //         fact *= j;
    //     }
    // }

    // clock_t end = clock();

    // double seconds = (double)(end-start) / CLOCKS_PER_SEC;

    // std::cout<<"Time of work: "<<seconds<<std::endl;
    // std::cin>>s;

    // ----#3-----
    clock_t start = clock();
    std::thread thread1(Func, "t1");
    std::thread thread2(Func, "t2");    

    thread1.join();
    thread2.join();

    // Func("1");
    // Func("2");

    clock_t end = clock();
    double seconds = (double)(end-start) / CLOCKS_PER_SEC;
    std::cout<<"Time of work: "<<seconds<<std::endl;
    
    system("pause");
    
    return 0;
}
//factorial from #2
void Func(std::string name){
    clock_t start = clock();
    for(int i = 0; i <= 10'000'000; i++){
        int fact = 1;
        for(int j = 1; j<=10;j++){
            fact *= j;
        }
    }
}