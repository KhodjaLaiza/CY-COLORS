# Définition des variables
CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS =

# Liste des fichiers source
SRCS = main.c grid.c whoplay.c remove.c cellvalid.c addpawn.c

# Liste des fichiers objet générés à partir des fichiers source
OBJS = $(SRCS:.c=.o)

# Nom de l'exécutable
TARGET = kamisado

# Règle de construction de l'exécutable
$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) $^ -o $@

# Règle de compilation des fichiers source
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
	rm -f $(OBJS) $(TARGET)
