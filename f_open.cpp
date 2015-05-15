#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct obstacle{
	//double under_x1,under_y1,under_z1,under_x2,under_y2,under_z2,under_x3,under_y3,under_z3,under_x4,under_y4,under_z4;
	double upper_x1,upper_y1,upper_z1,upper_x2,upper_y2,upper_z2,upper_x3,upper_y3,upper_z3,upper_x4,upper_y4,upper_z4;
};

int main() {
 ifstream inf("test.txt");
 vector <string> stringvector;
 vector <obstacle> obstaclelist;
 string inStr;

 double sender_x, sender_y, sender_z,  receiver_x, receiver_y, receiver_z;
 double u[5], v[5];
 double d_x1, d_y1, d_z1, d_x2, d_y2, d_z2, d_x3, d_y3, d_z3, d_x4, d_y4, d_z4;
	sender_x=5;
	sender_y=0;
	sender_z=0;
	receiver_x=11;
	receiver_y=16;
	receiver_z=2;

 while(! inf.eof() ) {
  inf >> inStr;
  //inStr을 배열,vector,list등에 저장
  stringvector.push_back(inStr);
  std::cout << inStr << std::endl;
 }
 inf.close();

 while(!stringvector.empty())
 {
//	 std::cout << "<!--Flag1" << std::endl;
	 obstacle new_ob;
	 string current_str;
	 char tok_str;
	 string x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;
		stringstream ss;
	 current_str = stringvector.back();

	 //std::cout << stringvector.back() << std::endl;
	 //while(current_str.find(tok_str, 0)!=string::npos)//??? 지금 당장은 좀 아니지??
	 {
		 tok_str = ':';
		 std::cout << current_str<<std::endl;
		 x1 = current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 y1 =  current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 z1 =  current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 x2 = current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 y2 =  current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 z2 =  current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 x3 = current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 y3 =  current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 z3 =  current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 x4 = current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 y4 =  current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 z4 =  current_str.substr(0, current_str.find(tok_str, 0));
		 current_str = current_str.substr(current_str.find(tok_str, 0)+1);
		 //x1 = current_str.substr(current_str.find(tok_str, 0));
		 //std::cout << "<!--Flag3" << std::endl;
		 std::cout << x1 << " : ";
		 std::cout << y1 << " : ";
		 std::cout << z1 << " : ";
		 std::cout << x2 << " : ";
		 std::cout << y2 << " : ";
		 std::cout << z2 << " : ";
		 std::cout << x3 << " : ";
		 std::cout << y3 << " : ";
		 std::cout << z3 << " : ";
		 std::cout << x4 << " : ";
		 std::cout << y4 << " : ";
		 std::cout << z4 << std::endl;
		 new_ob.upper_x1=stod(x1);
		 new_ob.upper_y1=stod(y1);
		 new_ob.upper_z1=stod(z1);
		 new_ob.upper_x2=stod(x2);
		 new_ob.upper_y2=stod(y2);
		 new_ob.upper_z2=stod(z2);
		 new_ob.upper_x3=stod(x3);
		 new_ob.upper_y3=stod(y3);
		 new_ob.upper_z3=stod(z3);
		 new_ob.upper_x4=stod(x4);
		 new_ob.upper_y4=stod(y4);
		 new_ob.upper_z4=stod(z4);
		 obstaclelist.push_back(new_ob);
	 }
	 stringvector.pop_back();

	 
 }

 while (!obstaclelist.empty())
 {
	 std::cout << obstaclelist.back().upper_x1 << ", " << obstaclelist.back().upper_y1 << ", " << obstaclelist.back().upper_z1 << ", "
		 << obstaclelist.back().upper_x2 << ", " << obstaclelist.back().upper_y2 << ", " << obstaclelist.back().upper_z2 << ", "
		 << obstaclelist.back().upper_x3 << ", " << obstaclelist.back().upper_y3 << ", " << obstaclelist.back().upper_z3 << ", "
		 << obstaclelist.back().upper_x4 << ", " << obstaclelist.back().upper_y4 << ", " << obstaclelist.back().upper_z4
		 << std::endl;

	d_x1=sender_x;
	d_y1=sender_y;
	d_z1=sender_z;
	d_x2=receiver_x;
	d_y2=receiver_y;
	d_z2=receiver_z;

	d_x3=obstaclelist.back().upper_x1;
	d_y3=obstaclelist.back().upper_y1;
	d_z3=obstaclelist.back().upper_z1;
	d_x4=obstaclelist.back().upper_x2;
	d_y4=obstaclelist.back().upper_y2;
	d_z4=obstaclelist.back().upper_z2;

	u[0] = ((d_x4-d_x3)*(d_y1-d_y3)-(d_y4-d_y3)*(d_x1-d_x3)) / ((d_x2-d_x1)*(d_y4-d_y3)-(d_x4-d_x3)*(d_y2-d_y1));
	v[0] = ((d_x2-d_x1)*(d_y1-d_y3)-(d_y2-d_y1)*(d_x1-d_x3)) / ((d_x2-d_x1)*(d_y4-d_y3)-(d_x4-d_x3)*(d_y2-d_y1));
	
	d_x3=obstaclelist.back().upper_x2;
	d_y3=obstaclelist.back().upper_y2;
	d_z3=obstaclelist.back().upper_z2;
	d_x4=obstaclelist.back().upper_x4;
	d_y4=obstaclelist.back().upper_y4;
	d_z4=obstaclelist.back().upper_z4;

	u[1] = ((d_x4-d_x3)*(d_y1-d_y3)-(d_y4-d_y3)*(d_x1-d_x3)) / ((d_x2-d_x1)*(d_y4-d_y3)-(d_x4-d_x3)*(d_y2-d_y1));
	v[1] = ((d_x2-d_x1)*(d_y1-d_y3)-(d_y2-d_y1)*(d_x1-d_x3)) / ((d_x2-d_x1)*(d_y4-d_y3)-(d_x4-d_x3)*(d_y2-d_y1));
	
	d_x3=obstaclelist.back().upper_x3;
	d_y3=obstaclelist.back().upper_y3;
	d_z3=obstaclelist.back().upper_z3;
	d_x4=obstaclelist.back().upper_x4;
	d_y4=obstaclelist.back().upper_y4;
	d_z4=obstaclelist.back().upper_z4;

	u[2] = ((d_x4-d_x3)*(d_y1-d_y3)-(d_y4-d_y3)*(d_x1-d_x3)) / ((d_x2-d_x1)*(d_y4-d_y3)-(d_x4-d_x3)*(d_y2-d_y1));
	v[2] = ((d_x2-d_x1)*(d_y1-d_y3)-(d_y2-d_y1)*(d_x1-d_x3)) / ((d_x2-d_x1)*(d_y4-d_y3)-(d_x4-d_x3)*(d_y2-d_y1));

	d_x3=obstaclelist.back().upper_x3;
	d_y3=obstaclelist.back().upper_y3;
	d_z3=obstaclelist.back().upper_z3;
	d_x4=obstaclelist.back().upper_x1;
	d_y4=obstaclelist.back().upper_y1;
	d_z4=obstaclelist.back().upper_z1;

	u[3] = ((d_x4-d_x3)*(d_y1-d_y3)-(d_y4-d_y3)*(d_x1-d_x3)) / ((d_x2-d_x1)*(d_y4-d_y3)-(d_x4-d_x3)*(d_y2-d_y1));
	v[3] = ((d_x2-d_x1)*(d_y1-d_y3)-(d_y2-d_y1)*(d_x1-d_x3)) / ((d_x2-d_x1)*(d_y4-d_y3)-(d_x4-d_x3)*(d_y2-d_y1));

/*
	 u[0] = ((obstaclelist.back().upper_x2-obstaclelist.back().upper_x1)*(sender_y-obstaclelist.back().upper_y1)-(obstaclelist.back().upper_y2-obstaclelist.back().upper_y1)*(sender_x-obstaclelist.back().upper_x1)) / ((receiver_x-sender_x)*(obstaclelist.back().upper_y2-obstaclelist.back().upper_y1)-(obstaclelist.back().upper_x2-obstaclelist.back().upper_x1)*(receiver_y-sender_y));
     v[0] = ((receiver_x-sender_x)*(sender_y-obstaclelist.back().upper_y1)-(receiver_y-sender_y)*(sender_x-obstaclelist.back().upper_x1)) / ((receiver_x-sender_x)*(obstaclelist.back().upper_y2-obstaclelist.back().upper_y1)-(obstaclelist.back().upper_x2-obstaclelist.back().upper_x1)*(receiver_y-sender_y));
	 u[1] = ((obstaclelist.back().upper_x3-obstaclelist.back().upper_x2)*(sender_y-obstaclelist.back().upper_y2)-(obstaclelist.back().upper_y3-obstaclelist.back().upper_y2)*(sender_x-obstaclelist.back().upper_x2)) / ((receiver_x-sender_x)*(obstaclelist.back().upper_y3-obstaclelist.back().upper_y2)-(obstaclelist.back().upper_x3-obstaclelist.back().upper_x2)*(receiver_y-sender_y));
     v[1] = ((receiver_x-sender_x)*(sender_y-obstaclelist.back().upper_y2)-(receiver_y-sender_y)*(sender_x-obstaclelist.back().upper_x2)) / ((receiver_x-sender_x)*(obstaclelist.back().upper_y3-obstaclelist.back().upper_y2)-(obstaclelist.back().upper_x3-obstaclelist.back().upper_x2)*(receiver_y-sender_y));
	 u[2] = ((obstaclelist.back().upper_x4-obstaclelist.back().upper_x3)*(sender_y-obstaclelist.back().upper_y3)-(obstaclelist.back().upper_y4-obstaclelist.back().upper_y3)*(sender_x-obstaclelist.back().upper_x3)) / ((receiver_x-sender_x)*(obstaclelist.back().upper_y4-obstaclelist.back().upper_y3)-(obstaclelist.back().upper_x4-obstaclelist.back().upper_x3)*(receiver_y-sender_y));
     v[2] = ((receiver_x-sender_x)*(sender_y-obstaclelist.back().upper_y3)-(receiver_y-sender_y)*(sender_x-obstaclelist.back().upper_x3)) / ((receiver_x-sender_x)*(obstaclelist.back().upper_y4-obstaclelist.back().upper_y3)-(obstaclelist.back().upper_x4-obstaclelist.back().upper_x3)*(receiver_y-sender_y));
	 u[4] = ((obstaclelist.back().upper_x1-obstaclelist.back().upper_x4)*(sender_y-obstaclelist.back().upper_y4)-(obstaclelist.back().upper_y1-obstaclelist.back().upper_y4)*(sender_x-obstaclelist.back().upper_x4)) / ((receiver_x-sender_x)*(obstaclelist.back().upper_y1-obstaclelist.back().upper_y4)-(obstaclelist.back().upper_x1-obstaclelist.back().upper_x4)*(receiver_y-sender_y));
     v[4] = ((receiver_x-sender_x)*(sender_y-obstaclelist.back().upper_y4)-(receiver_y-sender_y)*(sender_x-obstaclelist.back().upper_x4)) / ((receiver_x-sender_x)*(obstaclelist.back().upper_y1-obstaclelist.back().upper_y4)-(obstaclelist.back().upper_x1-obstaclelist.back().upper_x4)*(receiver_y-sender_y));
	*/ 
	 for(int i=0;i<4;i++)
		std::cout <<"("<< u[i] << " " << v[i]<< ") \n";

	 obstaclelist.pop_back();
 }
 return 0;
}