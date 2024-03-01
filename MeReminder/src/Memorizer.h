#pragma once

class Momirizer
{
  public:
    Momirizer(int status);
    void Remember();

  protected:
    int m_Status;
};