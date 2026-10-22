#pragma once
#include<string>

class animal{
 
public:
    animal();
    ~animal();
    animal(const animal& other);
    animal(animal&& other);
    animal& operator= (const animal& other) = default;
    animal& operator =(animal&& other) = default;

    virtual void MakeSound();
    virtual void AskForFood();
    virtual void Move();
    virtual void Natural_Habitat();

};

class cat : public animal
{
public:
    cat();
    ~cat();
    cat(const cat& cat);
    cat(cat&& cat);
    cat& operator=(const cat& cat);
    cat& operator=(cat&& cat);

    virtual void MakeSound() override;
    virtual void AskForFood() override;
    virtual void Move() override;
    virtual void Natural_Habitat() override;
};

class vorobey : public animal
{

public:
    vorobey();
    ~vorobey();
    vorobey(const vorobey& vorobey);
    vorobey(vorobey&& vorobey);
    vorobey& operator=(const vorobey& vorobey);
    vorobey& operator=(vorobey&& vorobey);
    virtual void MakeSound() override;
    virtual void AskForFood() override;
    virtual void Move() override;
    virtual void Natural_Habitat() override;

};


class medoed : public animal
{

public:
    medoed();
    ~medoed();
    medoed(const medoed& medoed);
    medoed(medoed&& medoed);
    medoed& operator=(const medoed& medoed);
    medoed& operator=(medoed&& medoed);
    virtual void MakeSound() override;
    virtual void AskForFood() override;
    virtual void Move() override;
    virtual void Natural_Habitat() override;
};
 

class SBEU_KOMAR : public animal
{
public:
    SBEU_KOMAR();
    ~SBEU_KOMAR();
    SBEU_KOMAR(const SBEU_KOMAR& SBEU_KOMAR);
    SBEU_KOMAR(SBEU_KOMAR&& SBEU_KOMAR);
    SBEU_KOMAR& operator=(const SBEU_KOMAR& SBEU_KOMAR);
    SBEU_KOMAR& operator=(SBEU_KOMAR&& SBEU_KOMAR);
    virtual void MakeSound() override;
    virtual void AskForFood() override;
    virtual void Move() override;
    virtual void Natural_Habitat() override;

};

class fish : public animal
{
public:
    fish();
    ~fish();
    fish(const fish& fish);
    fish(fish&& fish);
    fish& operator=(const fish& fish);
    fish& operator=(fish&& fish);
    virtual void MakeSound() override;
    virtual void AskForFood() override;
    virtual void Move() override;
    virtual void Natural_Habitat() override;
};









