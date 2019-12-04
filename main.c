/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char name[500][100];
    int n,distance_of_destination[100],distance[100],firstcity[100],secondcity[100],node,destination,sol_secondcity[100];
    int dss[100];
            int calculate_first_min_destance[1000];
                        int counter=0;


    printf("enter number of citys\n");
    scanf("%d",&n);
    
    for (int i = 0; i <n ; i++) {
        scanf("%s",name[i]);
    }
    printf("the of citys is\n");
    for (int i = 0; i <n ; i++) {
        
        printf("%d-%s\n",i,name[i]);
    }
    printf("enter distance between every citys by enter the  number of first city and the number of second city after that the distance  \n");
    for (int i = 0; i < n; i++) 
    {   
        printf("enter number of firstcity :");
        scanf("%d",&firstcity[i]);
        printf("\nenter number of secondcity :");
        scanf("%d",&secondcity[i]);
        printf("\nenter distance between two citys :");
        scanf("%d",&distance[i]);
        printf("distance between %s and %s is %d\n",name[firstcity[i]],name[secondcity[i]],distance[i]);
    }
    printf("Enter number of the city that is the node :");
    scanf("%d",&node);
    printf("Enter number of the city that is the destination :");
    scanf("%d",&destination);
    printf("enter distance between every city and %s by enter the  number of first city and the number of second city after that the distance :",name[destination]);
    for (int i = 0; i < n; i++) 
    {   
        printf("enter number of city :");
        scanf("%d",&firstcity[i]);
        printf("\nenter distance between two city and destination :");
        scanf("%d",&distance_of_destination[i]);
        printf("distance between %s and %s is %d\n",name[firstcity[i]],name[destination],distance_of_destination[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        if (node == firstcity[i])
        {
            sol_secondcity[counter]=secondcity[i];
             dss[counter]= distance[i];
            counter++;
        }
        
    }
    for (int i = 0; i <= counter; i++) 
    {
        calculate_first_min_destance[i]=dss[i]+distance_of_destination[i];
    }
    for (int i = 0; i <= counter; i++) {
        printf("min destination is %d",calculate_first_min_destance[i]);
    }
    
    
    return 0;
}
/*void repeted(int node)
{
    for (int i = 0; i < n; i++) 
    {
        if (node == firstcity[i])
        {
            int counter=0;
            sol_secondcity[counter]=secondcity[i];
            int dss[counter]= destination[i];
            coounter++;
        }
        
    }
    for (int i = 0; i <= counter; i++) 
    {
        int calculate_first_min_destance[1000];
        calculate_first_min_destance[i]=dss[i]+distance_of_destinationd[i];
    }
    for (int i = 0; i <= counter; i++) {
        printf("min destination is %d",calculate_first_min_destance[i])
    }
}*/
