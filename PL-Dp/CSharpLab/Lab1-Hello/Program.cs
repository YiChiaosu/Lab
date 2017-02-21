using System;

namespace ConsoleApplication
{
    public class Program
    {
		public interface ISortable
		{
			void Sort();
		}
		public class SortUtil<T> where T:ISortable
		{
			public void Sort(T obj)
			{
				obj.Sort();
			}
		}

		public class MyObj : ISortable
		{
			public void Sort()
			{
				Console.WriteLine("This is a Sort Class");
			}
		}

        public static void Main(string[] args)
        {
			var util = new SortUtil<MyObj>();
			MyObj s1 = new MyObj();
			util.Sort(s1);
            Console.WriteLine("Hello World!");
        }
    }
}
