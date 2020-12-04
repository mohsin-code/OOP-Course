package task3;

public class IntegerSet {
	private int set[] = new int[50];
	
	public IntegerSet() {
		for(int i = 0; i < 50; i++) {
			set[i] = 0;
		}
	}
	
	public void NewIntegerSet(int arr[]) {
		for(int n = 0; n < 50; n++) {
			this.set[n] = arr[n];
		}
	}
	
	public IntegerSet UnionOfIntegerSets(IntegerSet i) {
		IntegerSet j = new IntegerSet();
		for(int n = 0; n < 50; n++) {
			boolean x = (this.set[n] != 0) || (i.set[n] != 0);
			j.set[n] = x ? 1 : 0;
		}
		return j;
	}
	
	public IntegerSet IntersectionOfIntegerSets(IntegerSet i) {
		IntegerSet j = new IntegerSet();
		for(int n = 0; n < 50; n++) {
			boolean x = (this.set[n] != 0) && (i.set[n] != 0);
			j.set[n] = x ? 1 : 0;
		}
		return j;
	}
	
	public void InsertElement(int k) {
		this.set[k] = 1;
	}
	
	public void DeleteElement(int m) {
		this.set[m] = 0;
	}
	
	public void SetPrint() {
		for(int i = 0; i < 50; i++) {
			System.out.print(set[i] + " ");
		}
		System.out.println();
	}
	
	public boolean IsEqualTo(IntegerSet i) {
		for(int n = 0; n < 50; n++) {
			if(this.set[n] != i.set[n])
				return false;
		}
		return true;
	}
}