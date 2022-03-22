#include <iostream.h>

class SoPhuc{
	private:
		int PhanThuc , PhanAo;
	public:
		void nhap(){
			cout <<" nhap vao phan thuc: ";
			cin>> PhanThuc;
			cout <<" nhap vao phan ao: ";
			cin>> PhanAo;
		}
		void in(){
			cout<<"\nA = "<<PhanThuc<<" + "<<PhanAo<<" *j"<<endl;
		}
		float getPA(){
			return PhanAo;
		}
		float getPT(){
			return PhanThuc;
		}
};
int main()
{
	SoPhuc a[2];
	for( int i=0; i < 2; i++)
	{
		a[i].nhap();
	}
	
	cout<<"\n Tong cua 2 so thuc vhua nhap la: "<<a[0].getPT()+a[1].getPT()<<" + "<<a[0].getPA()+a[1].getPA()<<" *j"<<endl;
	cout<<"\n Tong cua 2 so thuc vhua nhap la: "<<a[0].getPT()-a[1].getPT()<<" + "<<a[0].getPA()-a[1].getPA()<<" *j"<<endl;
	cout<<"\n Tong cua 2 so thuc vhua nhap la: "<<a[0].getPT()/a[1].getPT()<<" + "<<a[0].getPA()/a[1].getPA()<<" *j"<<endl;
	cout<<"\n Tong cua 2 so thuc vhua nhap la: "<<a[0].getPT()*a[1].getPT()<<" + "<<a[0].getPA()*a[1].getPA()<<" *j"<<endl;
	return 0;
}