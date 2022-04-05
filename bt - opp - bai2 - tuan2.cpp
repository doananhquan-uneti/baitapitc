#include <iostream.h>
#include <iomanip.h>
	class GiaoVien{
		private:
		char hoten[30], bc[15], cnganh[20];
		int t;
		float bluong, luong;
		public:
		friend istream& operator >> (istream& is, GiaoVien &a)
		{
			cout<<" nhap ho ten: ";
			is.getline(a.hoten, 30);
			cout<<"\n nhap bang cap: ";
			is.getline(a.bc, 15);
			cout<<"\n nhap chuyen nganh: ";
			is.getline(a.cnganh, 20);
			cout<<"\n nhap tuoi: ";
			is>>a.t;
			cout<<"\n nhap bac luong: ";
			is>>a.bluong;
		}
		void lcb(){
			luong= bluong*610;
		}
		void tieude(){
			cout<<setw(9)<<" ho ten "
				<<setw(12)<<" bang cap "
				<<setw(15)<<" chuyen nganh"
				<<setw(7)<<" tuoi "
				<<setw(12)<<" bac luong "
				<<setw(10)<<" luong "<<endl;
		}
		friend ostream& operator << (ostream& os, GiaoVien &a)
		{
			os<<setw(9)<<a.hoten
				<<setw(12)<<a.bc
				<<setw(15)<<a.cnganh
				<<setw(7)<<a.t
				<<setw(12)<<a.bluong
				<<setw(10)<<a.luong<<endl;
		}
		char *bangcap(){
			return bc;
		}
		
	};
int main(int argc, char *argv[])
{
	GiaoVien a[100];
	int n;
	cout<<" nhap so luong giao vien ";
	cin>>n;
	cout<<" bat dau nhap danh sch giao vien "<<endl;
	for( int i=0; i < n; i++)
	{
		cout<<" danh sach giao vien thu "<<i+1<<endl;
		fflush(stdin);
		cin>>a[i];
	}
	cout<<" xuat danh sach "<<endl;
	a->tieude();
	for( int i=0; i < n; i++)
	{
		cout<<a[i];
	}
	a->tieude();
	for(int i=0; i < n; i++)
	{
		GiaoVien temp;
		for(int j=i+1; j < n; j++)
		{
			if(strcmpi(a[i].bangcap() , a[j].bangcap()) > 0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		cout<<a[i];
	}

	return 0;
}