//Hashing Webinar

//umordered_map

#include<iostream>
#include<unordered_map> //items are printed in random order and in average searching is done in O(1)
                        //if we use map here in place of unordered map, searching would be done in O(logn) time and list will be printed in ordered way
						//coz its having tree like DS                       

using namespace std;

int main(){  

 unordered_map<string,int> menu;

	//Insert key value pairs inside hashtable O(1) operation

	menu["maggie"] = 15;
	menu["colddrink"] = 12;
	menu["dosa"] = 2;

	//Searching inside a collection of key value pairs (stored inside a hashtable)
	cout<<"Enter the name of item"<<endl;
	
	string item;
	cin>>item;

	//update value
	menu["dosa"] = (1 + 0.1)*menu["dosa"];

	//Deletion
	menu.erase("dosa");

	if(menu.count(item) == 0){
		cout<<item<<" is not available";
	}
	else{
		cout<<item <<" is available and it's cost is "<<menu[item]<<endl;
	}

	//we can iterate all the key-value pairs that are present
	//pair is a inbuild class in cpp, having attribute first represent key and second represent value
	for(pair<string,int> item: menu)
	{
		cout<<item.first <<" - " <<item.second<<endl;
	}
return 0;
}