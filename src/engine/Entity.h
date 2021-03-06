//
// Created by Tre on 6/20/2020.
//

#ifndef OGLEXPERIMENTS_ENTITY_H
#define OGLEXPERIMENTS_ENTITY_H

#include <memory>
#include "Triple.h"
#include "Color.h"
#include "buffer/Buffer.h"
#include "texture/Texture.h"
#include "model/Model.h"

class Entity {
    float x;
    float y;
    float width;
    float height;
    Color color;
    Model *model;
    Texture *texture;
public:
    float getX() const;

    void setX(int x);

    float getY() const;

    void setY(int y);

    float getWidth() const;

    void setWidth(float width);

    float getHeight() const;

    void setHeight(float height);

    Color const &getColor() const;

    void setColor(Color const &color);

    Model &getModel() const;

    void setModel(Model *model);

    Texture &getTexture() const;

    void setTexture(Texture &texture);

protected:
    Entity(Model &model, Texture &texture);
};


#endif //OGLEXPERIMENTS_ENTITY_H
