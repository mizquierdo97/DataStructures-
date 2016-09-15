typedef unsigned int uint;
#define DYN_ARRAY_BLOCK_SIZE 16


template <class TYPE>
class DynArray {
private:

	TYPE* data = nullptr;
	unsigned int	mem_capacity = 0;
	unsigned int	num_elements = 0;

public:
	DynArray()
	{
		Alloc(DYN_ARRAY_BLOCK_SIZE);
	}

	DynArray(uint capacity)
	{
		Alloc(capacity);
	}

	//Operators
	TYPE& operator[](uint index)
	{
		assert(index < num_elements);
		return data[index];
	}
	const TYPE& operator[](uint index) const
	{
		assert(index < num_elements);
		return data[index];
	}


	//Methods

	void push_back(const TYPE& element)
	{
		if (num_elements >= mem_capacity)
		{
			Alloc(mem_capacity + DYN_ARRAY_BLOCK_SIZE);
		}

		data[num_elements++] = element;
	}

	bool pop_back()
	{
		if (num_elements > 0)
		{
			data[--num_elements];
			return true;
		}
		return false;
	}


	private:
	void Alloc(unsigned int mem)
	{
		TYPE* tmp = data;
		data = new TYPE[mem];

		mem_capacity = mem;
		//num_elements = MIN(mem_capacity, num_elements);

		for (uint i = 0; i < num_elements; ++i)
			data[i] = tmp[i];

		//RELEASE_ARRAY(tmp);
	}

};