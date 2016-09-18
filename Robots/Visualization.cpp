#include "Visualization.h"
//#include <chrono>



/*void Visualization::itemsToVis(std::vector<Robots::Object*> objects)
{
	//std::thread t(&Draw, objects);
	System::Threading::Thread^ oThread = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(Visualization::Draw));
	oThread->Start(objects);

}

void Draw(System::Object^ data)
{

}*/

/*void Visualization::Vis(System::Windows::Forms::Panel^ panel, std::vector<ModelOFEnvironment::Object*> objects)
{
	std::thread t(&Visualization::Draw, objects);
	t.join();
}*/

void Visualization::Draw(std::vector<ModelOFEnvironment::Object*, std::allocator<ModelOFEnvironment::Object*>> objects)
{
	if (panel)
	{
		System::Drawing::Graphics^ g = panel->CreateGraphics();
		System::Drawing::Pen ^p = gcnew System::Drawing::Pen(System::Drawing::Color::Black, 2);
		g->Clear(System::Drawing::Color::White);
		for (auto val : objects)
		{
			g->DrawRectangle(p, val->GetCoord()[0], val->GetCoord()[1], val->GetCoord()[2], val->GetCoord()[3]);
		}
	}
}