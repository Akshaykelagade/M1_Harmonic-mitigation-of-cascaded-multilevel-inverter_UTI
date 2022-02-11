#include "code.h"

void main(){ 
    //float matrix[10][10],inv[10][10], ratio,a;     
    float ratio;     
    float m=0.47;     
    float j1,j2,j3,j4,j5;     
    float theeta1deg=7.06;    
     float theeta2deg=17.44;   
       float theeta3deg=26.19;    
        float theeta4deg=35.84; 
    float theeta5deg=71.38;    
     float sqval,thd,THD; 
    float initial,f5,f7,f11,f13,v1,v5,v7,v11,v13;     
    int i, j, k,l,n=5; 
    float theeta1=(7.06*3.142)/180;    
    float theeta2=(17.44*3.142)/180;    
    float theeta3=(26.19*3.142)/180;   
    float theeta4=(35.84*3.142)/180;  
    float theeta5=(71.38*3.142)/180; 
printf("----the switching angle..0 iteration------\n"); 
printf("theeta1=%f\n",theeta1deg); printf("theeta2=%f\n",theeta2deg); 
printf("theeta3=%f\n",theeta3deg); printf("theeta4=%f\n",theeta4deg); 
printf("theeta5=%f\n",theeta5deg); 
v1=(400/3.142)*(1.07*cos(theeta1)+1.00*cos(theeta2)+0.97*cos(theeta3)+0.90*cos(theeta4)+
0.5*cos(theeta5)); 
v5=(400/(5*3.142))*(1.07*cos(5*theeta1))+(1.00*cos(5*theeta2))+(0.97*cos(5*theeta3))+(0.9
0*cos(5*theeta4))+(0.5*cos(5*theeta5)); 
v7=(400/(7*3.142))*(1.07*cos(7*theeta1))+(1.00*cos(7*theeta2))+(0.97*cos(7*theeta3))+(0.9
0*cos(7*theeta4))+(0.5*cos(7*theeta5)); 
v11=(400/(11*3.142))*(1.07*cos(11*theeta1))+(1.00*cos(11*theeta2))+(0.97*cos(11*theeta3)
)+(0.90*cos(11*theeta4))+(0.5*cos(11*theeta5)); 
v13=(400/(13*3.142))*(1.07*cos(13*theeta1))+(1.00*cos(13*theeta2))+(0.97*cos(13*theeta3)
)+(0.90*cos(13*theeta4))+(0.5*cos(13*theeta5));           
    printf("the harmonics are  v5=%f\tv7=%f\tv11=%f\tv13=%f\n",v5,v7,v11,v13);  
    	sqval=((v5*v5)+(v7*v7)+(v11*v11)+(v13*v13)); thd=sqrt(sqval); 
printf("total harmonics distortion=%f\n",((thd/v1)*100)); 
 float a[25][25], d; 
	 	//int i, j; 
    //n=5; 
	// 	printf("Enter the order of the matrix:\n"); 
	// 	scanf("%f", &n); 
/* 	printf("Enter the elemnts into the matrix:\n");  	for (i = 0; i< n; i++) {  	 	for (j = 0; j < n; j++) { 
	 	 	 	scanf("%f", &a[i][j]); 
	 	 	} 
 
	 	}*/ 
     for(l=1;l<15;l++) 
    { 
   a[0][0]=-sin(theeta1);   
    a[0][1]=-sin(theeta2);   
     a[0][2]=-sin(theeta3);    
     a[0][3]=-sin(theeta4);    
     a[0][4]=-sin(theeta5);    
     a[1][0]=-5.35*sin(5*theeta1);    
     a[1][1]=-5*sin(5*theeta2);    
     a[1][2]=-4.85*sin(5*theeta3);    
     a[1][3]=-4.5*sin(5*theeta4);    
     a[1][4]=-2.5*sin(5*theeta5);    
     a[2][0]=-7.49*sin(7*theeta1);    
     a[2][1]=-7*sin(7*theeta2);    
     a[2][2]=-6.79*sin(7*theeta3);    
     a[2][3]=-6.3*sin(7*theeta4);    
     a[2][4]=-3.5*sin(7*theeta5);    
     a[3][0]=-11.7*sin(11*theeta1);    
     a[3][1]=-11*sin(11*theeta2);    
     a[3][2]=-10.67*sin(11*theeta3);   
      a[3][3]=-9.91*sin(11*theeta4);   
       a[3][4]=-5.5*sin(11*theeta5);    
       a[4][0]=-13.91*sin(13*theeta1);    
       a[4][1]=-13*sin(13*theeta2);    
       a[4][2]=-12.61*sin(13*theeta3);   
        a[4][3]=-11.7*sin(13*theeta4);   
         a[4][4]=-6.5*sin(13*theeta5);  	
         d = detrminant(a, n);  	
         cofactors(a, n); 
 //   for(i=0;i<n;i++){ 
   // for(j=0;j<n;j++) 
   // { 
    //    printf("%0.3f\t",matrix[i][j]); 
   // } 
   // printf("\n"); 
   //}/ 
	 	//printf("%.2f\n",matrix[0][0]); 
    
initial=1.07*cos(theeta1)+1.00*cos(theeta2)+0.97*cos(theeta3)+0.90*cos(theeta4)+0.5*cos(th eeta5)-(3.92*m); 
f5=(1.07*cos(5*theeta1))+(1.00*cos(5*theeta2))+(0.97*cos(5*theeta3))+(0.90*cos(5*theeta4)
)+(0.5*cos(5*theeta5)); 
f7=(1.07*cos(7*theeta1))+(1.00*cos(7*theeta2))+(0.97*cos(7*theeta3))+(0.90*cos(7*theeta4)
)+(0.5*cos(7*theeta5)); 
f11=(1.07*cos(11*theeta1))+(1.00*cos(11*theeta2))+(0.97*cos(11*theeta3))+(0.90*cos(11*th eeta4))+(0.5*cos(11*theeta5)); 
f13=(1.07*cos(13*theeta1))+(1.00*cos(13*theeta2))+(0.97*cos(13*theeta3))+(0.90*cos(13*th eeta4))+(0.5*cos(13*theeta5));    
j1=(matrix[0][0]*(3.92*m))+(matrix[0][1]*0)+(matrix[0][2]*0)+(matrix[0][3]*0)+(matrix[0][4
]*0); 
j2=(matrix[1][0]*(3.92*m))+(matrix[1][1]*0)+(matrix[1][2]*0)+(matrix[1][3]*0)+(matrix[1][4
]*0);  
j3=(matrix[2][0]*(3.92*m))+(matrix[2][1]*0)+(matrix[2][2]*0)+(matrix[2][3]*0)+(matrix[2][4
]*0); 
j4=(matrix[3][0]*(3.92*m))+(matrix[3][1]*0)+(matrix[3][2]*0)+(matrix[3][3]*0)+(matrix[3][4 ]*0); j5=(matrix[4][0]*(3.92*m))+(matrix[4][1]*0)+(matrix[4][2]*0)+(matrix[4][3]*0)+(matrix[4][4
]*0); 
    theeta1deg=(theeta1deg)-j1;     
    theeta2deg=(theeta2deg)-j2;     
    theeta3deg=(theeta3deg)-j3;     
    theeta4deg=(theeta4deg)-j4;     
    theeta5deg=(theeta5deg)-j5;     
    theeta1=(theeta1deg*3.142)/180;     
    theeta2=(theeta2deg*3.142)/180;     
    theeta3=(theeta3deg*3.142)/180;     
    theeta4=(theeta4deg*3.142)/180;     
    theeta5=(theeta5deg*3.142)/180;     
    if(theeta5deg<90) 
    { 
printf("------the switching angles after %d iteration------\n",l); printf("theeta1=%f\n",theeta1deg); printf("theeta2=%f\n",theeta2deg); printf("theeta3=%f\n",theeta3deg); printf("theeta4=%f\n",theeta4deg); printf("theeta5=%f\n",theeta5deg); 
    
v1=(400/3.142)*(1.07*cos(theeta1)+1.00*cos(theeta2)+0.97*cos(theeta3)+0.90*cos(theeta4)+
0.5*cos(theeta5));     m=(v1/500); 
v5=(400/(5*3.142))*(1.07*cos(5*theeta1))+(1.00*cos(5*theeta2))+(0.97*cos(5*theeta3))+(0.9
0*cos(5*theeta4))+(0.5*cos(5*theeta5)); 
v7=(400/(7*3.142))*(1.07*cos(7*theeta1))+(1.00*cos(7*theeta2))+(0.97*cos(7*theeta3))+(0.9
0*cos(7*theeta4))+(0.5*cos(7*theeta5));    
v11=(400/(11*3.142))*(1.07*cos(11*theeta1))+(1.00*cos(11*theeta2))+(0.97*cos(11*theeta3)
)+(0.90*cos(11*theeta4))+(0.5*cos(11*theeta5)); 
v13=(400/(13*3.142))*(1.07*cos(13*theeta1))+(1.00*cos(13*theeta2))+(0.97*cos(13*theeta3)
)+(0.90*cos(13*theeta4))+(0.5*cos(13*theeta5)); sqval=((v5*v5)+(v7*v7)+(v11*v11)+(v13*v13)); thd=sqrt(sqval); 
THD=thd/v1; 
    //printf("the function value is v1=%f",v1); 
printf("value of fundamental v5=%f\tv7=%f\tv11=%f\tv13=%f\n",v5,v7,v11,v13); printf("the modulation index=%f\n",m); printf("total harmonic distortion :%f\n",(THD*100)); 
    }     
    else        
    continue; 
       } 
    } 
