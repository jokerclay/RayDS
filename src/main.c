#include "./ds/common.h"
#include "./ds/sequence_list_static.h"

void draw_sq_static_circles(SqList *circles) {
    for (int i = 0; i < circles->lenghth; i++) {
        Circle current_circle = circles->data[i];
        DrawCircle(current_circle.centerX, current_circle.centerY,
                   current_circle.radius, current_circle.color);

        // Convert index to string
        char index_text[4]; // Enough to hold numbers 0-999
        snprintf(index_text, sizeof(index_text), "%d", current_circle.index);

        // Calculate text position to center it inside the circle
        int text_width = MeasureText(index_text, 10); // Text width at font size 10
        int text_x = current_circle.centerX - text_width / 2;
        int text_y = current_circle.centerY - 5;

        // Draw the index inside the circle
        DrawText(index_text, text_x, text_y, 10,WHITE);
    }
}

void draw_sq_static_circles_status(SqList *circles)
{
    char status_text[100]; // Buffer to hold the concatenated string
    const char *status_discript = "sequence list static length: ";
    snprintf(status_text, sizeof(status_text), "%s %d", status_discript,
             circles->lenghth);

    int status_posX = 0;
    int status_posY = (int)(DS_SCREEN_HEIGHT / 2) - 2.2 * CIRCLE_RADIUS;
    int status_font_size = 20;
    DrawText(status_text, status_posX, status_posY, status_font_size, WHITE);

}

int main() {
    Color background = {26, 27, 38, 255};
    const char *title = "Data struct and algo implementation using raylib ";
    InitWindow(DS_SCREEN_WIDTH, DS_SCREEN_HEIGHT, title);

    SqList circles;
    sq_init(&circles);

    while (!WindowShouldClose()) {
        // Start drawing
        BeginDrawing();
        ClearBackground(background);

        draw_sq_static_circles(&circles);
        draw_sq_static_circles_status(&circles);

        // Finish drawing
        EndDrawing();
    }

    // Close the window
    CloseWindow();
    return 0;
}
