#include<iostream>
#include<cmath>
using namespace std;

void question1(){
    cout<<"Question 1\n";
    int a,b,c;
    cout<<"Enter 3 numbers : ";
    cin>>a>>b>>c;
    cout<<"Max of 3 numbers is ";
    cout<<(a>b ? (a>c ? a : c) : (b>c ? b : c))<<endl<<endl;
    return;
}

void question2(){
    cout<<"Question 2\n";
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a<0) a *= -1; // method 1
    //a = abs(a); method 2
    cout<<"Absolute value is "<<a<<"\n\n";
    return;
}

void question3(){
    cout<<"Question 3\n";
    int n;
    cout<<"Enter number of unique products : ";
    cin>>n;
    float total = 0;
    cout<<"Enter count and price of each product\n";
    for(int i = 0; i<n; i++){
        float count, price;
        cin>>count>>price;
        total += count*price;
    }
    cout<<"Total with discount will be"<< (total>5000 ? total*0.9 : total)<<"\n\n";
    return;
}

void question4(){
    cout<<"Question 4\n";
    int sp, cp;
    cout<<"Enter Selling Price and Cost Price : ";
    cin>>sp>>cp;
    int diff = sp - cp;
    cout<< ( diff > 0 ? "Profit = " : "Loss = ");
    cout<<abs(diff)<<"\n\n";
    return;
}

void question5(){
    cout<<"Question 5\n";
    int a,b,c;
    cout<<"Enter angles of triangle : ";
    cin>>a>>b>>c;
    cout<< (a+b+c == 180 ? "Valid\n\n" : "Not Valid\n\n");
    return;    
}

void question6(){
    cout<<"Question 6\n";
    int a;
    cout<<"Enter a year : ";
    cin>>a;
    cout<<(a%4 ? "Not a Leap Year\n\n" : "Leap Year\n\n");
    return;
}

void question7(){
    cout<<"Question 7\n";
    float salary;
    cout<<"Enter Salary : ";
    cin>>salary;
    cout<< (salary < 1500 ? salary : 500 + 0.98*salary)<< "\n\n";
    return;
}

void question8(){
    cout<<"Question 8\n";
    float a,b,c;
    cout<<"Enter a,b,c : ";
    cin>>a>>b>>c;
    float d = b*b - 4*a*c;
    if(d > 0){
        cout<<"Real roots are "<< (-b + sqrt(d))/(2*a) <<" "<< (-b - sqrt(d))/(2*a) <<"\n\n";
    }else if(d == 0) cout<< -b/(2*a)<<"\n\n";
    else cout<<"Imaginary roots\n\n";
    return;
}

void question9(){
    cout<<"Question 9\n";
    float a[5], sum = 0;
    cout<<"Enter marks in 5 subjects";
    for(int i = 0; i < 5; i++){
        cin>>a[i];
        sum += a[i];
    }
    float percent = sum/5;
    if(percent>= 60) cout<<"First Division";
    else if(percent >= 50) cout<<"Second Division";
    else if(percent >= 40) cout<<"Third Division";
    else cout<<"Fail";
    cout<<"\n\n";
    return;
}

void question10(){
    cout<<"Question 10\n";
    char c;
    cout<<"Enter a char : ";
    cin>>c;
    if(c - 'A' < 26 && c - 'A' >= 0) cout<<c<<" is upper case letter\n\n";
    else if(c - 'a' < 26 && c - 'a' >= 0) cout<<c<<" is lower case letter\n\n";
    else if(c - '0' < 26 && c - '0' >= 0) cout<<c<<" is a number\n\n";
    else cout<<c<<" is a special symbol";
    return;
}

int main(){
    char c = 'y';
    do{
        int i;
    cout<<"Enter Question Number ";
    cin>>i;
    switch (i)
    {
    case 1:
        question1();
        break;
    case 2:
        question2();
        break;
    case 3:
        question3();
        break;
    case 4:
        question4();
        break;
    case 5:
        question5();
        break;
    case 6:
        question6();
        break;
    case 7:
        question7();
        break;
    case 8:
        question8();
        break;
    case 9:
        question9();
        break;
    case 10:
        question10();
        break;
    default:
        cout<<"Wrong question selected";
        break;
    }
    cout<<"Do you want to test another question : y/n \n";
    cin>>c;
    }while(c == 'y' || c == 'Y');
}