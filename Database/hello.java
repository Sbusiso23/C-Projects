public class Student
{
    int stdNum;
    string name; 
    public void display(){
        System.out.println("Student Number: "+ stdNum);
        System.out.printls("Student Name: " + name);
    }

};

public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
        Student std = new Student();
        std.display();
	}
}