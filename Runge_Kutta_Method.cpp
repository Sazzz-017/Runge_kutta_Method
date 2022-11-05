#include<stdio.h>
#include<math.h>
#define f(i,j) i+j;
int main(){
	float x,x0,y0,h,k1,k2,k3,k4,k,res,a,b,temp;
    int i,n;
    printf("Enter the intial x value: ");
    scanf("%f",&x0);
    printf("Enter the intial y value: ");
    scanf("%f",&y0);
    printf("Enter the x value: ");
    scanf("%f",&x);
    printf("Enter the h value: ");
    scanf("%f",&h);
    printf("Enter the order: ");
    scanf("%d",&n);
    if(n==1){
    	temp=f(x0,y0);
    	res=y0+h*temp;
    	printf("Y[%.1f]=%f",x,res);
    }
	else if(n==3){
	    temp=f(x0,y0);
		k1=h*temp;
		printf("k1 = %f\n",k1);
		a=x0+h/2;
		b=y0+k1/2;
		temp=f(a,b);
		k2=h*temp;
		printf("k2 = %f\n",k2);
		a=x0+h;
		b=y0+2*k2-k1;
		temp=f(a,b);
		k3=h*temp;
		printf("k3 = %f\n",k3);
		k=0.167*(k1+4*k2+k3);
		printf("k = %f\n",k);
		res=y0+k;
		printf("Y[%.1f]=%f",x,res);
	}
	else if(n==2){
		temp=f(x0,y0);
		k1=h*temp;
		printf("k1 = %f\n",k1);
		a=x0+h;
		b=y0+k1;
		temp=f(a,b);
		k2=h*temp;
		printf("k2 = %f\n",k2);
		k=0.5*(k1+k2);
		printf("k = %f\n",k);
		res=y0+k;
		printf("Y[%.1f]=%f",x,res);
	}
	else if(n==4){
		temp=f(x0,y0);
		k1=h*temp;
		printf("k1 = %f\n",k1);
		a=x0+h/2;
		b=y0+k1/2;
		temp=f(a,b);
		k2=h*temp;
		printf("k2 = %f\n",k2);
		a=x0+h/2;
		b=y0+k2/2;
		temp=f(a,b)
		k3=h*temp;
		printf("k3 = %f\n",k3);
		a=x0+h;
		b=y0+k3;
		temp=f(a,b);
		k4=h*temp;
		printf("k4 = %f\n",k4);
		k=0.167*(k1+2*k2+2*k3+k4);
		printf("k = %f\n",k);
		res=y0+k;
		printf("Y[%.1f]=%f",x,res);
		
	}

return 0;
}

