#ifndef Component_h
#define Component_h
#include <vector>
#include <string>

class Component;
class GameObject
{
public:

	GameObject();
	~GameObject();


	 void init();
	 void update();
	 void render();
	 void destroy();
	 void setName(const std::string& name);
	 void addComponent(Component * component);
     const std::string& getName();
	 
protected:
	
	std::string m_Type;
    void setName();

private:

	std::string m_Name;
	std::vector<Component*>m_Components;

};

#endif