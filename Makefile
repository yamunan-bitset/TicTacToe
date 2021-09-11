CXX      = c++
LDFLAGS  = -lsfml-window -lsfml-system -lsfml-graphics
CXXFLAGS = -g -std=c++17
OBJS     = board.o main.o
OUT      = tictactoe

all:     build
build:   compile link
compile: $(OBJS)
link:
	$(CXX) $(OBJS) $(CXXFLAGS) $(LDFLAGS) -o $(OUT)
clean:
	rm -rf $(OUT) $(OBJS)

