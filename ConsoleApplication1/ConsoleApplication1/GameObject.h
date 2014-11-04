#ifndef Component_h
#define Component_h
#include <string>


class GameObject
{
public:

	GameObject();
	 void init();
	 void update();
	 void render();
	 void estroy();
	 void setName(const std::string& name);
	 void Component(Component*component);
     const std::string& getName();
	 
protected:
	
	std::string m_Type;
    void setName();

private:
};

#endif