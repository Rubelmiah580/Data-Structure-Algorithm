#include<iostream>
using namespace std;
int GCD(int num1,int num2){
    int n1 = num1;
    int n2 = num2;
    while(n2!=0){
        int rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    return n1;
}
int LCM (int num1,int num2,int gcd){

    int lcm = (num1*num2)/gcd;
}
int main(){
    int num1,num2;
    cout<<"Enter two number for find their GCD AND LCM: ";
    cin>>num1>>num2;
    int gcd = GCD(num1,num2);
    int lcm = LCM(num1,num2,gcd);
    cout<<num1<<" and "<<num2<<" GCD = "<<gcd<<endl;
    cout<<num1<<" and "<<num2<<" LCM = "<<lcm<<endl;  


}