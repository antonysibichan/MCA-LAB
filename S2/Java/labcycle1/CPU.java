/*Create CPU with attribute price. Create inner class Processor (no. of cores,
manufacturer) and static nested class RAM (memory, manufacturer). Create
an object of CPU and print information of Processor and RAM.*/
public class CPU{
	double price;

	public class Processor
		{
			int cores;
			String manufacturer;
			void info(int c,String m)
				{
					cores=c;
					manufacturer=m;
					System.out.println("\n__PROCESSOR INFORMATION__");

					System.out.println("NO.of cores="+cores+"\nManufacturer Name="+manufacturer);
				}
		}
	static class RAM
		{
		double memory;
		String manufacturer;
		void info(double num,String man)
			{
				memory=num;
				manufacturer=man;
				System.out.println("\n__RAM InFORMATION__");

				System.out.println("Memory="+memory+"GB\n"+"Manufacturer Name="+manufacturer);
			}
		}
public static void main(String[] args){
	CPU cpu= new CPU();
	CPU.Processor processor= cpu.new Processor();
	CPU.RAM ram=new CPU.RAM();
	
	processor.info(12,"AMD");
	ram.info(126,"INTEL");
}
}

