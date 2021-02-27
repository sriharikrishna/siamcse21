test: driver
	./driver 10000 1
	./driver 1 10000

driver: driver.c fun.c
	gcc $^ -o $@

clean:
	rm driver
