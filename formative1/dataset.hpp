// COMP2811 Coursework 1: QuakeDataset class

#pragma once

#include <vector>
#include "quake.hpp"
#include <string>
#include <iostream>

class QuakeDataset
{
  public:
    QuakeDataset(){};
    QuakeDataset(const std::string&) loadData(string){};


  private:
    std::vector<Quake> data;
};
