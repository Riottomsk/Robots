#pragma once
#include <vector>
#include "Environment.h"


ref class Visualization
{
	static Visualization ^p_instance;
	bool run = false;
	System::Windows::Forms::Panel^ panel;	
	Visualization() {}
public:
	//static Visualization^ instance();
	static Visualization^ Instance()
	{
		if (!p_instance)
			p_instance = gcnew Visualization();		
		return p_instance;
	}
		

	

	//void itemsToVis(std::vector<Robots::Object*> objects);
	//static void Draw(System::Object^ data);
	
	void addPanel(System::Windows::Forms::Panel ^p1)
	{
		panel = p1;
	}
	
	//void addToVis(System::Windows::Forms::Panel^ p1);
	void Draw(std::vector<ModelOFEnvironment::Object*, std::allocator<ModelOFEnvironment::Object*>> objects);
	void Start()
	{
		run = true;
	}
	void Finish()
	{
		run = false;
	}
};