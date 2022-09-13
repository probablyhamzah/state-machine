#include "AssetManager.hpp"

AssetManager::AssetManager() {}

AssetManager::~AssetManager()
{
    for (auto it = textures.begin(); it != textures.end(); it++)
    {
        delete textures[it];
    }
}

void AssetManager::setTexture(int id, const std::string file, bool repeat)
{
    sf::Texture* texture = new sf::Texture;

    if (texture->loadFromFile(file))
    {
        texture->setRepeated(repeat);
        textures[id] = texture;
    }
}

void AssetManager::setPlayerTexture(int id, const std::vector<std::string> files)
{
    for(int i = 0; i < int(files.size()); i++)
    {
        sf::Texture* texture = new sf::Texture;

        if(texture->loadFromFile(files[i]))
        {
            playerTextures[id].push_back(texture);
        }
    }
}

    
const sf::Texture& AssetManager::getTexture(int id) const
{
    return *(textures.at(id).get());
}
const sf::Texture& AssetManager::getPlayerTexture(int id, int frame) const
{
    return *(playerTextures.at(id)[frame].get());
}
