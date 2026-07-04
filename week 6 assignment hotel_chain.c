/*
Description: program to calculate total occupied rooms across all branches of a hotel chain(3D arrays)
Name:Bett Chepgneno
Reg No:BCS-03-0065/2026
Date;28/06/2026
Version 1
*/

#include <stdio.h>

int main(){
	int chain[3][5][10];
	int branch, floor, room;
	int totalOccupied =0;
	
	for(branch = 0; branch < 3; branch++)
	{
				
     printf("Branch %d\n",branch + 1);
     
     for (floor = 0; floor < 5; floor++)
	 {
		 printf("Floor %d\n", floor + 1);
	 
     for(room = 0; room < 10; room++){
		 printf(" Room %d(1=Occupied, 0=Vacant): ",room + 1);
		 scanf("%d", &chain[branch][floor][room]);
		 if(chain[branch][floor]==1){
			 totalOccupied++;
		    }  
		 }
	 }
}	
    printf("Total Occupied Rooms Across All Branches: %d\n",totalOccupied) ;
return 0;
}
	 
