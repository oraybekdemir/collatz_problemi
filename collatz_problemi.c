#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <sys/wait.h>
int main()
{
    int sayi = 0;
    int pid,calisma_durumu;
 
    printf("Lütfen 1'den büyük bir sayi giriniz: \n");
    scanf("%d", &sayi);
 
    pid = fork();
 
     if(pid == 0)
    {
             do
        {
        if(sayi%2 != 0)
        {
          sayi = (sayi*3)+1;
                }
         
        else if(sayi%2 == 0)
        {
          sayi = sayi/2;
        }
 
        printf("%d \n",sayi);
        }while(sayi != 1);
    }
 
    else
    {
 
        printf("pid= %d \n",pid);
    printf("Çocuk görevin bitmesi bekleniyor... \n");
      wait(&calisma_durumu);
      }     
     
     
return 0;   
}
