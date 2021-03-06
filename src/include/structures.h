#ifndef STRUCTURES_H_
# define STRUCTURES_H_

# define SCREEN 0
# define BKG    1
# define RDD    2
# define GRD    3

enum type
{
	RONDOUDOU,
};

typedef struct body
{
	SDL_Rect position;
	enum type type;
	int selected;
} s_body;

typedef struct list
{
	int id;
	struct list *next;
	s_body *body;
} s_list;

#endif /* !STRUCTURES_H_ */
