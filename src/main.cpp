#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
int main () {

  sf::RenderWindow window(sf::VideoMode({800,600}), "SFML Window");




  while(window.isOpen()){

    while(const std::optional event = window.pollEvent()){

      if(event->is<sf::Event::Closed>())
          window.close();
    }
    
    window.clear();
  }



  return 0;
}
