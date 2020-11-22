# -------------------------------------------------------------------------------
# Name:        Heater
# Purpose:     OOP Lab 1
#
# Author:      Mohsin
#
# Created:     22/11/2020
# Copyright:   (c) Mohsin 2020
# Licence:     <your licence>
# -------------------------------------------------------------------------------

class Heater:
    temperature = 0

    def __init__(self):
        self.temperature = 20

    def warmer(self):
        self.temperature += 5

    def cooler(self):
        self.temperature -= 5

    def display(self):
        print("Temperature is ", self.temperature)


h1 = Heater()

h1.display()
h1.cooler()
h1.display()
h1.warmer()
h1.display()
