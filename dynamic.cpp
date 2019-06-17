using namespace std;

class DynamicArray{
	int* data;
	int nextIndex;
	int capacity;

	public:

	DynamicArray(){
		data = new int[5];
		nextIndex=0;
		capacity=5;
	}
	DynamicArray(DynamicArray const &d){
		this -> data =new int[d.capacity];
		for (int i = 0; i < d.nextIndex; ++i)
		{
			this -> data[i]= d.data[i];

			/* code */
		}
		this -> nextIndex = d.nextIndex;
		this -> capacity = d.capacity;
	}

	void add(int element){
		if (nextIndex==capacity)
		{
			int* newData = new int[2*capacity];
			for (int i = 0; i < capacity; ++i)
			{
				newData[i]=data[i];
				/* code */
			}
			delete [] data;
			data = newData;
			capacity=2*capacity;
			/* code */
		}
		data[nextIndex]=element;
		nextIndex++;
	}

	int get(int i){
		if (i<nextIndex)
		{
			return data[i];
		}else{
			return -1;
		}
	}

	void add(int i, int element){
			if (i<nextIndex)
			{
				data[i]=element;
				/* code */
			}else if (i== nextIndex)
			{
				add(element);
			}else{
				return;
			}
	}
	void print(){
		for (int i = 0; i < nextIndex; ++i)
		{
			std::cout << data[i] << " ";
			/* code */
		}
		cout << '\n';
	}
};