// Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z,
// а потоа последователно се внесуваат парови цели броеви (a, b). 
// Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0).
// Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b,
// како и колкав процент од вкупниот број внесени парови (a, b) даваат збир z 
//(ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).


#include <stdio.h>

int main(){
    
    int zbir;
    scanf("%d",&zbir);

    int br1,br2,tocni=0,vkupno=0;

    while(br1!=0 || br2!=0){
        scanf("%d%d",&br1,&br2);
        if(br1==0 && br2==0) break;
        if(br1+br2==zbir) tocni++;
        vkupno++;
    }
    printf("Vnesovte %d parovi od broevi chij zbir e %d\n",tocni,zbir);
    printf("Procentot na parovi so zbir %d e %.2f%%",zbir,((float) tocni/vkupno)*100);
    

    return 0;
}