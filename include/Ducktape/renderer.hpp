#pragma once

class Renderer
{
    public:
        static void DrawSprite(std::string path, Vector2 pos, sf::RenderWindow* screen)
        {
            sf::Texture texture;
            if (!texture.loadFromFile(path))
            {
                Debug::LogError("Error loading sprite from " + path);
                return;
            }

            sf::Image image;
            texture.update(image);
            texture.setSmooth(true);

            sf::Sprite sprite;
            sprite.setTexture(texture);
            sprite.setPosition(pos.ToSFMLVector());

            screen->draw(sprite);
        }
};