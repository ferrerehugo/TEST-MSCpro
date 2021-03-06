
#include <stdio.h>
void star(int taille){
if(taille==0){return ;}
else{
for(int i=0;i<taille;i++){
                   for(int j=i;j<taille+6+3;j++){
                                    printf(" ");// espace pour decaller le triangle a droite
                                    }
                   printf("*");
                   for(int k=0;k<i;k++){
                                    printf(" ");//espace interrieur gauche
                                    }    
                    for(int k=1;k<i;k++){
                                    printf(" ");//espace interrieur droit 
                                    }                      
              if(i>0){printf("*");} // pour evité d avoir ** au premier tour de la boucle
                   printf("\n");   
                   }
       
       
        for(int j=0 ;j<taille+6;j++){// premier bar *********
            printf("*");
        }
        for(int i=0;i<taille+2;i++){// espace entre 
         printf(" ");
        }
        for(int j=0 ;j<taille+6;j++){// deuxieme bar *********
            printf("*");
        }
  printf("\n");
        int k=0;
    for(int i=taille; i>=1; i--)// triangle inversé vide
  {
    for(int j=0; j<=k; j++) 
      printf(" ");
     printf("*"); 
    for(int j=1; j<i; j++) 
      printf(" ");
      
   
    for(int i=0; i<=taille+6+5; i++){// on met de l espace au milieu pour ecarte les droites du triangle pour avoir ca\  /
        printf(" ");
    }

    for(int j=i-1; j>=1; j--)
      printf(" ");
      if(i>0){printf("*");}
    
    printf("\n");
    k++;
  }

  ///////////////////////////////////////////////////////////////// REPLIQUE DU CODE EN HAUT MAIS INVERSE//////////
/*on reprend la meme formule du tringale mais pas inversé pour faire / \ */ 
  for(int i=0;i<taille;i++){
                   for(int j=i;j<taille;j++){
                                    printf(" ");
                                    }
                   printf("*");
                   for(int k=0;k<i;k++){
                                    printf(" ");
                                    }  
                    for(int z=0;z<=taille+11;z++){
                                    printf(" "); }
                    for(int k=0;k<i;k++){
                                    printf(" ");
                                    }                      
                   printf("*");
                   printf("\n");   
                   }
   
  for(int j=0 ;j<taille+6;j++){// bar __
            printf("*");
        }
        for(int i=0;i<taille+2;i++){// espace
         printf(" ");
        }
        for(int j=0 ;j<taille+6;j++){// bar __
            printf("*");
        }
        printf("\n");

 int x=0; 
   for(int i=taille; i>=1; i--)// triangle inversé  pour \/
  {
    for(int j=1; j<=x+taille+5; j++) 
      printf(" ");
    printf("*");
    for(int j=3; j<=i; j++) 
      printf(" ");
    
    for(int j=i-1; j>=1; j--)
      printf(" ");
      if(x!=4){printf("*");}
    
    printf("\n");
    x++;
  } }     
        
        
       
    }


void main ( ) {// je nes pas vu les arguments en C
int taille=0;
 printf("quelle taille pour le triangle ?");
 scanf("%d",&taille) ;

star(taille);

  

  return  ;

}