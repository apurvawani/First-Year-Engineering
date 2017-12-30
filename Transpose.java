/*
Given a 2D array A, convert all rows to columns and columns to rows.
*/



import java.util.*;
class Transpose {
    
	public static void main(String args[] ) throws Exception {

		Scanner scan = new Scanner(System.in);
        
		int N = scan.nextInt();
        
		int M = scan.nextInt();
        
		int[][] ar = new int[M][N];
        
		for(int i = 0 ; i < N ; i++){
            
			for(int j = 0 ; j < M ; j++){
                
				ar[j][i] = scan.nextInt();
            
			}
        
		}
        
		for(int i = 0 ; i < M ; i++){
            
			for(int j = 0 ; j < N ; j++){
                
				System.out.print(ar[i][j] + " ");
            
			}
            
			System.out.println();
        
		}
    
	}

}