all: mainapp

mainapp:main.cpp liba.so
	g++ -Wl,--export-dynamic $< -o $@ -L. -la

liba.so:liba.cpp liba.h
	g++ -shared -fPIC -I . -Bdynamic $< -o $@

.PHONY:clean
clean:
	rm -rf mainapp liba.so