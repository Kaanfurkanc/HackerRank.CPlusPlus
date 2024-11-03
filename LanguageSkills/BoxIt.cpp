#include<bits/stdc++.h>

using namespace std;

class Box{
    
    
    public:
    
        long getLength(){
            return this->length;
        }
        long getBreadth(){
            return this->breadth;
        }
        long getHeight(){
            return this->height;
        }
        long long CalculateVolume(){
            long long volume = length * breadth * height;
            return volume;
        }
        
        Box(){
            this->length = 0;
            this->breadth = 0;
            this->height = 0;
        }
        Box(int length, int breadth, int height){
            this->length = length;
            this->height = height;
            this->breadth = breadth;
        }
        Box(const Box& B){
            this->breadth = B.breadth;
            this->height = B.height;
            this->length = B.length;
        }
        
        bool operator<(const Box& b){
            bool result = false;
            
            if (length < b.length){
                result = true;
            }
            else if (breadth < b.breadth && length == b.length){
                result = true;
            }
            else if (height < b.height && breadth == b.breadth && length == b.length){
                result = true;
            }
            return result;
        }
        
        friend ostream& operator<<(ostream& out, const Box& B){
            out << B.length << " " << B.breadth << " " << B.height;
            return out;
        }
    private:
    
        long length;
        long breadth;
        long height;
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}