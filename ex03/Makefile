
CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SOURCES		= \
	ClapTrap.cpp \
	DiamondTrap.cpp \
	FragTrap.cpp \
	main.cpp \
	ScavTrap.cpp \

OBJECTS		= $(SOURCES:.cpp=.o)

TARGET		= diamondtrap

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJECTS)

fclean:clean
	$(RM) $(TARGET)

re: fclean
	make all

.PHONY: all clean fclean re
