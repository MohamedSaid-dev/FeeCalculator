#include <iostream>
using namespace std;
void Sum(){
    int navOp,n;
    double i,SumResult = 0;
    cout<<"compute and return the sum of the series: S = 1 + 1/4 + 1/9 + 1/16 + ...... + 1/n2"<<endl;
    cout<<"enter n number :"<<endl;
    cin>>n;
    for(double i = 1;i<=n;i++){
        SumResult = SumResult + (1/(i*i));
    }
    cout<<"sum is : "<<SumResult<<endl;
    cout<<"[1] Repeat"<<endl<<"[2] Main Menue"<<endl<<"[3] Exit"<<endl;
    cin>>navOp;
    if (navOp == 1){
        Sum();
    }else if (navOp == 2){
        //main
    }else if (navOp == 3){
        exit(0);
    }
}
void Max(){
    int navOp,n,maxnum = 0;
    int nums[0];
    cout<<"return the maximum value of n integer numbers that input from the keyboard."<<endl;
    cout<<"enter n value :";
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"enter element "<<i + 1<<" :"<<endl;
        cin>>nums[i];
        }
    for(int x = 0;x<n;x++){
        if(nums[x]>maxnum){
            maxnum = nums[x];
        }
    }
    cout<<"maximum number is : "<<maxnum<<endl;
    cout<<"[1] Repeat"<<endl<<"[2] Main Menue"<<endl<<"[3] Exit"<<endl;
    cin>>navOp;
    if (navOp == 1){
        Max();
    }else if (navOp == 2){
        //main
    }else if (navOp == 3){
        exit(0);
    }
}
void SumSys(){
    int M,navOp,result,Mnum = 0;
    cout<<"A simple summing system that computes the sum and average of the even integer numbers from 1 to m."<<endl;
    cout<<"Enter M number :"<<endl;
    cin>>M;
    for (int x = 1;M>x;M--){
        if(M%2 == 0){
            Mnum = Mnum + 1;
            result += M;
        }   
    }
    cout<<"Sum is : "<<result<<endl;
    cout<<"Avrege is : "<<result/Mnum<<endl;
    cout<<"[1] Repeat"<<endl<<"[2] Main Menue"<<endl<<"[3] Exit"<<endl;
    cin>>navOp;
    if (navOp == 1){
        SumSys();
    }else if (navOp == 2){
        //main
    }else if (navOp == 3){
        exit(0);
    }
}
void Com(){
    int navOp;
    float x,y,z;
    cout<<"Enter x :"<<endl;
    cin>>x;
    cout<<"Enter y :"<<endl;
    cin>>y;
    cout<<"Enter z :"<<endl;
    cin>>z;
    if (x < y && x < z){
        cout<<"x = "<< x<<" is the minimum value"<<endl;
    }else if (y < x && y < z){
        cout<<"y = "<< y<<" is the minimum value"<<endl;
    }else if (z < x && z < y){
        cout<<"z = "<< z<<" is the minimum value"<<endl;
    }
    cout<<"[1] Repeat"<<endl<<"[2] Main Menue"<<endl<<"[3] Exit"<<endl;
    cin>>navOp;
    if (navOp == 1){
        Com();
    }else if (navOp == 2){
        //main
    }else if (navOp == 3){
        exit(0);
    }
}
void Calc(){
    float A,B;
    int CalcOp,navOp;
    cout<<"enter first Number :"<<endl;
    cin>>A;
    cout<<"enter second Number :"<<endl;
    cin>>B;
    cout<<"choose opreation number :"<<endl;
    cout<<"[1] +"<<endl<<"[2] -"<<endl<<"[3] *"<<endl<<"[4] /"<<endl;
    cin>>CalcOp;
    switch (CalcOp){
        case 1:
        cout<<"Answer is : "<<A+B<<endl;
        break;
        case 2:
        cout<<"Answer is : "<<A-B<<endl;
        break;
        case 3:
        cout<<"Answer is : "<<A*B<<endl;
        break;
        case 4:
        cout<<"Answer is : "<<A/B<<endl;
        break;
        default:
        cout<<"[Erorr] out of range !"<<endl;
        break;
    }
    cout<<"[1] Repeat"<<endl<<"[2] Main Menue"<<endl<<"[3] Exit"<<endl;
    cin>>navOp;
    if (navOp == 1){
        Calc();
    }else if (navOp == 2){
        //main
    }else if (navOp == 3){
        exit(0);
    }
}

int main()
{
    int OpNum;
    cout<<"select one of the fllowing applications :"<<endl;
    cout<<"[1] Standerd Calculator"<<endl;
    cout<<"[2] Standerd Comperator"<<endl;
    cout<<"[3] Summing System"<<endl;
    cout<<"[4] Maximum of m numbers"<<endl;
    cout<<"[5] Calculate sum of series"<<endl;
    cin>>OpNum;
    switch (OpNum){
        case 1 :
        Calc();
        break;
        case 2 :
        Com();
        break;
        case 3 :
        SumSys();
        break;
        case 4:
        Max();
        break;
        case 5:
        Sum();
        default:
        cout<<"[Erorr] out of range !"<<endl;
        break;
    }  
    main();
    return 0;
}
