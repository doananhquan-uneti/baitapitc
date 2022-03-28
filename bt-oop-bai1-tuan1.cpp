#include <iostream.h>
#include <iomanip.h>
struct sinhnhat{
	int ngay, thang ,nam;
};
	class khachhang{
		private:
		char ht[30], cmt[20], hokhau[50];
		sinhnhat sn;
		public:
		void nhap(){
			cout<<" \nnhap ho ten: ";
			cin.getline(ht, 30);
			cout<<" \nnhap cmt: ";
			cin.getline(cmt , 20);
			cout<<" \nnhap hkhau: ";
			cin.getline(hokhau, 50);
			cout<<" \nnhap ngay ";
			cin>>sn.ngay;
			cout<<" \nnhap thang: ";
			cin>>sn.thang;
			cout<< " \nnhap nam: ";
			cin>>sn.nam;
		}
		void tieude(){
			cout<<setw(15)<<" ho ten "
				<<setw(10)<<" cmt "
				<<setw(10)<<" ho khau "
				<<setw(5)<<" ngay "
				<<setw(7)<<" thang "
				<<setw(5)<<" nam "<<endl;
		}
		void xuat(){
			cout<<setw(15)<<ht
				<<setw(10)<<cmt
				<<setw(10)<<hokhau
				<<setw(5)<<sn.ngay
				<<setw(7)<<sn.thang
				<<setw(5)<<sn.nam<<endl;
		}
		char *name(){
			return ht;
		}
		int month(){
			return sn.thang;
		}
	
};
int main(int argc, char *argv[])
{
	khachhang a[100];
	int n;
	cout<<" nhap so luong khach hang: ";
	cin>>n;
	for(int i=0; i < n; i++)
	{
		cout<<" \ndanh sach khach hang thu : "<<i+1<<endl;
		fflush(stdin);
		a[i].nhap();
	}
	cout<<"\n\nxuat danh sach khach hang vua nhap!! "<<endl;
	a->tieude();
	for(int i=0; i < n ; i++)
	{
	
		a[i].xuat();
	}
	cout<<" \n\nxuat danh sach theo ho ten tang dan!! "<<endl;
	a->tieude();
	for(int i=0; i < n; i++)
	{ 
		khachhang temp;
		for(int j=i+1; j < n; j++)
		{
			if(strcmpi(a[i].name(), a[j].name()) > 0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		a[i].xuat();
	}	
	cout<<" \n\nxuat danh sach khach hang sinh thang 12!! "<<endl;
	a->tieude();
	for(int i=0; i < n; i++)
	{
		if( a[i].month() == 12 )
		{
			a[i].xuat();
		}
	}
	return 0;
}