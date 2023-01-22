#include <stdio.h>
// Version 4.5
int main(){ 
    float EHP,Star,Legion,LegionP,MasterSkull;

    float BaseHealt,Healt,HealtL;
    float BaseArmor,Armor,ArmorL;
    
    float BlazePet,BlazePetB,BlazePetFmngB,BlazePetStatA;

    float BlessingofLifelvl,BlessingofLifePercent,BlessingMultiplictive;
    float BlessingofStonelvl,BlessingofStonePercent,BlessingofStoneNumber;

    float HelmetHealt,HelmetArmor;
    float ChestPHealt,ChestPArmor;
    float LeggingsHealt,LeggingsArmor;
    float BootHealt,BootArmor;
    float Catacomblvl,CatacombB;

    float Hecatomb=24;//Eklemekle uğraşmadım düz sayı girdim
    float Anicent=7;
    float Growth6=90,FmngG=60;
    float Protection6=25,FmngP=30;

    float BaseFrozenBHelmetArmor=105;
    float BaseFrozenBChestPArmor=180;
    float BaseFrozenBLeggingsArmor=140;
    float BaseFrozenBBootArmor=95;
    int N=4,i=0;
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
// Skills
        Catacomblvl=39;   Legion=7;  LegionP=4;  MasterSkull=5;
        BlessingofLifelvl=21;    BlessingofStonelvl=9;    BlessingMultiplictive=10;
//                        21                       9
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
{// Pets
        BlazePet=1;}
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
{// Base
       BaseHealt=1304.5;         BaseArmor=142.5;         Star=50;}
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
{// Prepare  
        if (BlazePet==1){BlazePetB=0.4;BlazePetFmngB=2;BlazePetStatA=30;}
        while (Catacomblvl!=i){CatacombB+=N;i++;if (i%5==0 && i<35){N+=1;}if (i%5==0 && i>=35 && i<45){N+=2;}if (i==45){N+=2;}if (i>45){N+=1;}}
        CatacombB=1+(CatacombB+Star)/100;
        Legion=1+(Legion*LegionP*0.07)/100;
        MasterSkull=1+MasterSkull/100;
        if (MasterSkull>1.04){MasterSkull+=0.01;}
        if (MasterSkull>1.06){MasterSkull+=0.01;}
        if (MasterSkull>1.08){MasterSkull+=0.01;}}
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
{// Frozen
// Helmet   
        HelmetHealt=(Growth6+(FmngG*BlazePetFmngB)+Anicent+Hecatomb)*(1+BlazePetB);     HelmetArmor=(BaseFrozenBHelmetArmor+Protection6+(FmngP*BlazePetFmngB)+Anicent)*(1+BlazePetB);
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
// ChestP
        ChestPHealt=(Growth6+(FmngG*BlazePetFmngB)+Anicent)*(1+BlazePetB);              ChestPArmor=(BaseFrozenBChestPArmor+Protection6+(FmngP*BlazePetFmngB)+Anicent)*(1+BlazePetB);
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
// Leggings
        LeggingsHealt=(Growth6+(FmngG*BlazePetFmngB)+Anicent)*(1+BlazePetB);            LeggingsArmor=(BaseFrozenBLeggingsArmor+Protection6+(FmngP*BlazePetFmngB)+Anicent)*(1+BlazePetB);
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
// Boots
        BootHealt=(Growth6+(FmngG*BlazePetFmngB)+Anicent)*(1+BlazePetB);                BootArmor=(BaseFrozenBBootArmor+Protection6+(FmngP*BlazePetFmngB)+Anicent)*(1+BlazePetB);}
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
{// Blessings
        BlessingMultiplictive=1+BlessingMultiplictive/100;

        BlessingofLifePercent=1+(BlessingofLifelvl*0.036)*BlessingMultiplictive; //?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  
        BlessingofStonePercent=1+(BlessingofStonelvl*0.024)*BlessingMultiplictive;
        BlessingofStoneNumber=BlessingofStonelvl*4.8*BlessingMultiplictive;}
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
{// Additional
        HelmetHealt*=CatacombB;    HelmetArmor*=CatacombB;
        ChestPHealt*=CatacombB;    ChestPArmor*=CatacombB;
        LeggingsHealt*=CatacombB;  LeggingsArmor*=CatacombB;
        BootHealt*=CatacombB;      BootArmor*=CatacombB;
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
        Healt=HelmetHealt+ChestPHealt+LeggingsHealt+BootHealt;
        Armor=HelmetArmor+ChestPArmor+LeggingsArmor+BootArmor;
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
        Healt+=BaseHealt;
        Armor+=BaseArmor+BlazePetStatA;
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
        Healt*=MasterSkull;
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
        HealtL=Healt;  
        ArmorL=Armor+BlessingofStoneNumber;
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
        HealtL*=BlessingofLifePercent;
        ArmorL*=BlessingofStonePercent; 
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
        HealtL*=Legion;
        ArmorL*=Legion; 
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
        EHP=HealtL*(1+ArmorL/100);}
//--------------------------------------------------------------------------------------------------------------------------------------------------------//
{// Print
printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("Buffs");
        printf("               CatacombB=  %0.2fx\n",CatacombB);
        printf("\t    BlessingofLifePercent=  %0.3fx\n",BlessingofLifePercent);
        printf("\t    BlessingofStonePercen=  %0.3fx\n",BlessingofStonePercent);
        printf("\t    BlessingofStoneNumber= +%0.3f\n",BlessingofStoneNumber);
        printf("\t    BlessingMultiplictive=  %0.2fx\n",BlessingMultiplictive);
printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("Gear");
        printf("\t\t\t  HelmetHealt= %0.2f",HelmetHealt);        printf("\t\t\t  HelmetArmor= %0.2f\n",HelmetArmor);        
        printf("\t\t\t\t  ChestPHealt= %0.2f",ChestPHealt);      printf("\t\t\t  ChestPArmor= %0.2f\n",ChestPArmor);
        printf("\t\t\t\tLeggingsHealt= %0.2f",LeggingsHealt);    printf("\t\t\tLeggingsArmor= %0.2f\n",LeggingsArmor);
        printf("\t\t\t\t    BootHealt= %0.2f",BootHealt);        printf("\t\t\t    BootArmor= %0.2f\n",BootArmor);
printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("\t\t\t\t           Start\t\t\t\t           Last\n");
        printf("\t\t\t\t        Healt= %0.2f",Healt);                printf("\t\t\t       HealtL= %0.2f\n",HealtL);
        printf("\t\t\t\t        Armor= %0.2f",Armor);                printf("\t\t\t       ArmorL= %0.2f\n",ArmorL);
printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t          EHP= %0.1f\n",EHP);
printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");}
    return 0;
}