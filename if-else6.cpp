#include<iostream>
using namespace std;

int main(){

    char str[]="\0";
    if("welcome"){           //in the if block, if there is 0 then it will not working

        cout<<"inside if block";
    }
    else{
        cout<<"inside else block";
        return 0;
    }
}