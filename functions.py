import pygame
import random
pygame.init()#initializes Pygame
pygame.display.set_caption("Mouse events")#sets the window title
screen = pygame.display.set_mode((800, 800))#creates game screen

#function definition 
def slope(x1, y1, x2, y2):
   return(y2-y1)/(x2-x1)


#function call
num = slope(10, 5, -12, 20)
print(num)

#function definition 
def average(a, b, c):
   return(a+b+c/3)


#function call
num = average(11, 6, 30)
print(num)

def circles():
    num1 = random.randrange(0, 800)
    num2 = random.randrange(0, 800)
    pygame.draw.circle(screen, (250, 0, 0), (num1, num2), 59)
    pygame.draw.circle(screen, (250, 250, 0), (num1, num2), 40)
    pygame.draw.circle(screen, (250, 0, 250), (num1, num2), 20)
circles()
circles()
circles()
circles()
circles()
circles()
circles()
circles()
pygame.display.flip()
