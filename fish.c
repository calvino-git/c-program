#include <stdio.h>

struct exercise {
  char description[80];
  float duration;
};
struct meal {
  char ingredients[80];
  float weight;
};
struct preference {
  struct meal food;
  struct exercise exercise;
};
typedef struct {
  char name[20];
  char species[20];
  int teeth;
  int age;
  struct preference care;
} fish;

void happy_birthday(fish *t){
  (*t).age = (*t).age + 1;
  printf("\n you are now %i\n", (*t).age);
}

void label(fish f){
  printf("Name: %s\nSpecies: %s\nTeeth: %i\nAge: %i\nFood: %f of %s\nExercise: %s for %f hours\n", f.name, f.species, f.teeth,f.age, f.care.food.weight, f.care.food.ingredients, f.care.exercise.description, f.care.exercise.duration);
}

int main()
{
  puts("Welcome to national fish agency recording database\nPlease, record the fish here:\n");
  fish f/* = {"", "", 0, 0, {{"", 0.0}, {"",0.0}}}*/;
  puts("\nName: ");
  scanf("%s", f.name);
  puts("\nSpecies: ");
  scanf("%s", f.species);
  puts("\nTeeth: ");
  scanf("%i", &f.teeth);
  puts("\nAge: ");
  scanf("%i", &f.age);
  puts("\nFOOD\nIngredients: ");
  scanf("%s", f.care.food.ingredients);
  puts("\nWeight: ");
  scanf("%f", &f.care.food.weight);
  puts("\nEXERCISE\nDescription: ");
  scanf("%s", f.care.exercise.description);
  puts("\nDuration: ");
  scanf("%f", &f.care.exercise.duration);
  puts("\nThese are informations about the fish you've just recorded, thank you!\n");
  label(f);
  happy_birthday(&f);
  printf("new age: %i\n", f.age);
  return 0;
}
  
