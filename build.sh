#!/bin/bash
g++ cedit.cpp `wx-config --libs` `wx-config --cxxflags` -o first
