public class Student {
    int mark;
    String name;

    public static void main(String[] args){
        Student s1 = new Student();
        s1.mark = 100;
        s1.name = "Avishek Rauniyar";

        System.out.println(s1.mark + " " + s1.name);
    }
}