#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int minimum_of_two(int x,int y){
	if (x > y)
	    return y;
	else return x;
}

int minimum(int x, int y, int z){
    return minimum_of_two(minimum_of_two(x, y), z);
}

int m;
int n;

int Convert(char * str1, char * str2){
    int dp[m+1][n+1];
    int i=0;
    int j=0;

    for (i=0; i<=m; i++){
	 for (j=0; j<=n; j++){
	    if (i == 0){
		    dp[i][j] = j;
	    }
	    else if (j==0){
		    dp[i][j] = i;
	    }
	    else if (str1[i-1] == str2[j-1]){
		    dp[i][j] = dp[i-1][j-1];
	    }
	    else
		    dp[i][j] =  minimum(dp[i][j-1]+1, dp[i-1][j]+1, dp[i-1][j-1]+1);
	}
    }

    i = m; 
    j = n;

    while (i!=0 && j!=0) {
       if (str1[i-1] == str2[j-1]){
                    	i--;
			j--;
        }		
	else{
		if (dp[i-1][j-1]+1==dp[i][j]){
              		printf( "Replace '%c' from position %d with '%c'.\n", str1[i-1],i,str2[j-1]);
              		i--;
			j--;
  	        }
		else if (dp[i-1][j]+1==dp[i][j]){
   	           printf("Remove '%c' from position %d. \n", str1[i-1],i);
        	      i--;
            	}		
		else{
	              printf( "Insert '%c' at position %d. \n", str2[j-1],j );
            	      j--;
            	}
        }
    }

    while(j!=0){
      	printf( "Insert '%c' at position %d. \n" , str2[j-1],j);
	j--;
    }	
    while(i!=0){
	printf( "Remove '%c' from position %d. \n", str1[i-1],i);
        i--;
    }
	
    return dp[m][n];
}

int main(){
        char *str1=(char *)malloc(sizeof(char));
        char *str2=(char *)malloc(sizeof(char));
		
	printf("Please enter the first string:\n");
	scanf("%s",str1);
 	printf("Please enter the second string:\n");
	scanf("%s",str2);
	m=strlen(str1);
	n=strlen(str2);
	printf("\n\nThe set of required operations are:\n\n");
	int minm=Convert(str1,str2);
	printf("\nThe minimum cost incurred: %d\n",minm);

       return 0;
}


/*
Test case :
sunday
saturday
Output:  3
Last three and first characters are same.  We basically
need to convert "un" to "atur".  This can be done using
below three operations. 
Replace 'n' with 'r', insert t, insert a
*/
