#ifndef GameObject_h
#define GameObject_h

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
private:

	std::string m_Name;
	std::vector<Component*>m_Components;

};

#endif