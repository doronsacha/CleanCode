// Bad Code
double make_pizza() {
    // Mix the ingredients for the dough
    double flour = 2.0;  // cups
    double water = 1.0;  // cup
    double yeast = 0.25;  // teaspoon
    double salt = 1.0;  // teaspoon
    double dough = flour + water + yeast + salt;

    // Knead the dough
    for (int i = 0; i < 10; i++) {
        dough *= 2;  // Knead the dough by doubling its volume
    }

    // Roll out the dough
    double dough_thickness = 0.25;  // inch
    dough = dough / dough_thickness;

    // Apply the tomato sauce
    double sauce = 0.5;  // cups
    double pizza = dough + sauce;  // Add sauce to the dough

    // Add the cheese
    double cheese = 1.5;  // cups
    pizza += cheese;  // Add cheese to the pizza

    // Preheat the oven
    double oven_temperature = 450;  // Fahrenheit

    // Set the timer for baking
    double timer = 20;  // 20 minutes

    // Bake the pizza in the oven
    double baking_time = 0;
    while (baking_time < timer) {
        pizza += oven_temperature;  // This is a very crude representation of baking
        baking_time += 1;
    }

    return pizza;
}

//Good Code

void make_pizza();

void prepare_dough();
void mix_ingredients();
void knead_dough();
void roll_out_dough();

void apply_tomato_sauce();
void add_cheese();

void bake_in_oven();
void preheat_oven();
void set_timer();
void place_pizza_in_oven();

int main() {
    make_pizza();
    return 0;
}

void make_pizza() {
    prepare_dough();
    apply_tomato_sauce();
    add_cheese();
    bake_in_oven();
}

void prepare_dough() {
    mix_ingredients();
    knead_dough();
    roll_out_dough();
}

void mix_ingredients() {
    // Details of mixing flour, water, yeast, etc.
}

void knead_dough() {
    // Details of kneading the dough to make it smooth
}

void roll_out_dough() {
    // Details of rolling the dough to the right thickness
}

void apply_tomato_sauce() {
    // Details of applying tomato sauce on the rolled-out dough
}

void add_cheese() {
    // Details of adding cheese on the tomato sauce
}

void bake_in_oven() {
    preheat_oven();
    set_timer();
    place_pizza_in_oven();
}

void preheat_oven() {
    // Details of preheating the oven to the right temperature
}

void set_timer() {
    // Details of setting the timer to the correct baking time
}

void place_pizza_in_oven() {
    // Details of placing the pizza in the oven safely
}
