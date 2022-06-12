#!/bin/bash
#!g++ cedit.cpp `wx-config --libs` `wx-config --cxxflags` -o first
g++ cedit.cpp `wx-config --libs` `wx-config --cxxflags` -o first -I /usr/include/CCfits
