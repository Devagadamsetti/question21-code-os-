#include <iostream> 
#include <queue> 
struct Semaphore { 
    int value; 
    int q[100];
};
int P(Semaphore s) 
{ 
    s.value = s.value - 1; 
    if (s.value < 0) { 
        s.q[0]=s.value; 
       
    } 
    else
        return 1; 
} 	
  
int V(Semaphore s) 
{ 
    s.value = s.value + 1; 
    if (s.value <= 0) { 
  
        // remove process p from queue 
        s.q[1]=s.value; 
    } 
    else
        return -1; 
} 

int main()
{
    int  p1=1,p2=2,p3=3,p4=4;
        if((p1+p2+p3+p4)%2==0)
        {
            printf("%d",1);
        }
        else
        {
            printf("%d",-1);
        }
}
