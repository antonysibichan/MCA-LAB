/*Define a class ‘product’ with data members pcode, pname and price. Create 3
objects of the class and find the product having the lowest price.*/
public class product{
int pcode;
String pname;
int price;
product(int code,String name,int rate)
{
pcode = code;
pname = name;
price = rate;
}
static int lowest(int p1,int p2,int p3)
{
if(p1<p2&&p1<p3)
{
System.out.println("PRODUCT 1 HAS LOWER PRICE");
}
else if(p2<p1&&p2<p3)
{
System.out.println("PRODUCT 2 HAS LOWER PRICE");
}
else if(p3<p2&&p3<p1)
{
System.out.println("PRODUCT 3 HAS LOWER PRICE");
}
return 0;
}
public static void main(String args[])
{
product obj1=new product(1,"Detergent",200);
product obj2=new product(2,"Soap",20);
product obj3=new product(3,"Box",203);
lowest(obj1.price,obj2.price,obj3.price);
}
}
