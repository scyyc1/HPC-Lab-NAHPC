public class exercise1{
	public static void main(String[] args){
		int N=20;
		integer a=2;
		myLoop(a,N);
	}
	public static<T extends Number> void myLoop(T a, int N){
		for(int i=0;i<N;i++){
			System.out.print(a+" ");
			T b=add(a,2);
			System.out.print(b+" ");
			T c=addb+2;
			System.out.print(c+" ");
			T d=c/2;
			System.out.print(d+" ");
			a=a*10;
		}
		return;
	}
}