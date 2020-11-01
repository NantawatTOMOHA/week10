#include<iostream>
using namespace std;
void cal(int,int,int,int,int);
struct num {
	int sum = 1;
	int digit = 0;
	int last = 0;
	int x[2] = { 0,0 };
};
int main() {
	num num;
	cout << "ENTER NUMBER : ";
	cin >> num.x[0];
	cal(num.x[0],num.x[1],num.sum,num.digit,num.last);

	return 0;
}
void cal(int x,int j,int sum,int digit,int last) {
	int all[3] = { 0,0,0 };
	 sum = 1;
     digit = 0;
	 last = 0;
	while (digit != 3)
	{ 
		sum = 1;
		j = x % 10;
		if(j!=0)
		{
			for (int k=1;k<=j;k++)
			{
				sum = sum * k;
		  }
			all[digit] = sum;
			digit = digit + 1;
			x = x / 10;
		}
		else {
			sum = 0;
			all[digit] = sum;
			digit = digit + 1;
			x = x / 10;
		}

	}
	last = all[0] + all[1] + all[2];
	cout << "SUMMARY : " << last << endl;
	
}