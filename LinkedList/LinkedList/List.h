template <class TYPE>
class List {
public:
	struct node {
		friend class List<TYPE>;
	public:
		mutable TYPE data;
		node* next = nullptr;
		node(const TYPE& data) : data(data) {}

	};

private: 
	node* start = nullptr;

public:

	node* Push_Back(const TYPE& data) {
		node* item = new node(data);
		node* temp = start;
		if (start == nullptr) {
			start = item;
			return item;
		}
		else {
			while (temp->next != nullptr) {
				temp = temp->next;
			}
			temp->next = item;

			return item;
		}
	}

	bool Pop_Back() {
		if (start != nullptr) {
			node* temp = start;
			while (temp->next->next != nullptr) {
				temp = temp->next;
			}
			delete temp->next;
			temp->next = nullptr;
			return true;
		}
		else return false;
	}

	node* Push_Front(const TYPE& data) {
		node* item = new node(data);
		item->next = start;
		start = item;
		return item;
	}

	bool Pop_Front() {
		if (start != nullptr) {
			node* temp = start->next;
			delete start;
			start = temp;
			return true;
		}
		else return false;

	}


};
