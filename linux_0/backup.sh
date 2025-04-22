#!/bin/bash
#task_0 
mkdir syria-cities
cd syria-cities
mkdir Damascus Latakia Aleppo Homs
rm -r *
cd ..

#task_1
mkdir egypt_cities
mkdir egypt_cities/Alexandria egypt_cities/Cairo egypt_cities/Port\ said egypt_cities/Aswan egypt_cities/Delta
touch egypt_cities/Alexandria/data.txt egypt_cities/Cairo/data.txt egypt_cities/Port\ said/data.txt egypt_cities/Aswan/data.txt egypt_cities/Delta/data.txt
rm -r egypt_cities

#task_2
cp task-4.sh backup.sh

