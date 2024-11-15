#include<iostream>

using namespace std;

class Complex
{
    public:
        int a,b;
        void input(string s)
        {
            int v1=0;
            int i=0;
            while(s[i]!='+')
            {
                v1=v1*10+s[i]-'0';
                i++;
            }
            while(s[i]==' ' || s[i]=='+'||s[i]=='i')
            {
                i++;
            }
            int v2=0;
            while(i<s.length())
            {
                v2=v2*10+s[i]-'0';
                i++;
            }
            a=v1;
            b=v2;
        }

        friend Complex operator+(Complex num1, Complex num2)
        {
            Complex result;
            result.a = num1.a + num2.a;
            result.b = num1.b + num2.b;
            
            return result;
        }

        friend std::ostream& operator<<(std::ostream& os, Complex c)
        {
            os<<c.a<<"+i"<<c.b;
            return os;
        }
};

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}