#include<stdio.h>
#include<conio.h>
struct phanso
{
    int tu,mau;
};
void nhapps(struct phanso *p)
{
    printf(" Nhap mot tu so ");scanf("%d",&p->tu);
    printf(" Nhap mot mau so ");scanf("%d",&p->mau);
}
void inps (struct phanso p)
{
    printf("phan so:%d/%d",p.tu,p.mau);
}
int sosanh (struct phanso a,struct phanso b)
{
    return a.tu*b.tu-a.mau*b.tu;
}
int kiemtra(struct phanso a)
{
    if(a.tu*a.mau>0)
        return 1;
    else if(a.tu*a.mau<0)
        return -1;
    return 0;
}
struct phanso cong(struct phanso a, struct phanso b)
{
    struct phanso kq;
    kq.tu=a.tu*b.mau+a.mau*b.tu;
    kq.mau=a.mau*b.mau;
    return kq;
}
struct phanso tru(struct phanso a, struct phanso b)
{
    struct phanso kq;
    kq.tu=a.tu*b.mau-a.mau*b.tu;
    kq.mau=a.mau*b.mau;
    return kq;
}
struct phanso nhan(struct phanso a, struct phanso b)
{
    struct phanso kq;
    kq.tu=a.tu*b.mau*a.mau*b.tu;
    kq.mau=a.mau*b.mau;
    return kq;
}
struct phanso chia(struct phanso a, struct phanso b)
{
    struct phanso kq;
    kq.tu=a.tu*b.mau/a.mau*b.tu;
    kq.mau=a.mau*b.mau;
    return kq;
}
int ucln (int a, int b) {
	if(b==0) return a;
	return ucln(b, a%b);
}

int bcnn (int a, int b) {
	return a/ucln(a, b)*b;
}

int quydong(struct phanso x, struct phanso y)
{
    x.tu=x.tu*bcnn(x.mau, y.mau)/x.mau;
	y.tu=y.tu*bcnn(x.mau, y.mau)/y.mau;
	x.mau=bcnn(x.mau, y.mau);
    return x.mau;
}
int main()
{
    struct phanso x,y,tong;
    nhapps(&x);
    nhapps(&y);
    int kq=sosanh(x,y);
    if(kq>0)
        printf("1");
    else if(kq<0)
        printf("-1");
    else
        printf("0");
    int ss1=kiemtra(x), ss2=kiemtra(y);
    printf("%d %d\n", ss1, ss2);
    tong=cong(x,y);
    inps(tong);
    tong=tru (x,y);
    inps(tong);
    tong=nhan(x,y);
    inps (tong);
    tong=chia (x,y);
    inps (tong);
    quydong(x, y);
    getch();   
    return 0;
}