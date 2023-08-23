#include<bits/stdc++.h>
using namespace std;
string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        vector< int> temp(num1.size() + num2.size(),0);

        for(int i = num1.size()-1; i>=0; i--){
            for(int j = num2.size()-1; j>=0; j--){
                temp[i+j+1] += (num1[i] -'0')*(num2[j]-'0');//18  15
                temp[i+j] += temp[i+j+1]/10;//1 1
                temp[i+j+1] = temp[i+j+1]%10;//8 5
            }
        }

        int i = 0;
        while(temp[i] == 0) i++;
        string ans = "";
        while(i<temp.size()) ans.push_back(temp[i++]+'0');
        return ans;

        //gave 2 hours by my own but not able to solve because pf constraint
    }
    int main(){
        string num1 = "123456789";
        string num2 = "987654321";
        cout<<multiply(num1,num2);

    }

    //ans 121932631112635269