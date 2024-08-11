import java.io.*;
import java.util.*;

public class Person {
    public int age;	
  
	public Person(int initialAge) {
        this.age=initialAge;
	}

	public void amIOld() {
        if(age<0){
            System.out.println("Age is not valid, setting age to 0.");
            this.age=0;
        }
  		if(age>=18)
        System.out.println("You are old.");
        else if(age<13)
        {
            System.out.println("You are young.");
        }
        else if(age>=13&&age<18)
        {
            System.out.println("You are a teenager.");
        }
	}

	public void yearPasses() {
  		this.age++;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		for (int i = 0; i < T; i++) {
			int age = sc.nextInt();
			Person p = new Person(age);
			p.amIOld();
			for (int j = 0; j < 3; j++) {
				p.yearPasses();
			}
			p.amIOld();
			System.out.println();
        }
		sc.close();
    }
}