import pygame


class pelota:
	def __init__(self, ventana, x, y):
		self.ventana = ventana
		self.x = x
		self.y = y
		self.vx = 0
		self.vy = 0

	def dibujar(self):
		pygame.draw.rect(self.ventana,(255,255,255),(self.x, self.y,10,10))

	def mover(self):
		self.x += self.vx
		self.y += self.vy

def refrescar(ventana):
	ventana.fill((0, 0, 0))
	bola.dibujar()

def main():

	global bola

	ventana = pygame.display.set_mode((600, 400))
	ventana.fill((0, 0, 0))
	
	bola=pelota(ventana,50,100)
	bola.vx = 0.5
	bola.vy = 0.2
	jugar = True
	while jugar:
		for event in pygame.event.get():
			if event.type == pygame.QUIT:
				jugar = False
		bola.mover()
		if bola.x >= 590:
			bola.vx *= -1
			bola.x = 590
		if bola.x <= 0:
			bola.vx *= -1
			bola.x = 0

		if bola.y >= 590:
			bola.vy *= -1
			bola.y = 590
		if bola.y <= 0:
			bola.vy *= -1
			bola.y = 0
		##ventana.fill((0,0,0))
		#bola.dibujar()
		refrescar(ventana)
		pygame.display.flip()
	pygame.quit()

if __name__ == '__main__':
	main()

