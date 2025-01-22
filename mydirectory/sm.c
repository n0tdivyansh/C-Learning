#include <gtk/gtk.h>
#include <string.h>

#define MAX_POSTS 100
#define MAX_CONTENT_LENGTH 256

typedef struct {
    char type[10];
    char content[MAX_CONTENT_LENGTH];
} Post;

Post posts[MAX_POSTS];
int postCount = 0;

void addPost(const char *type, const char *content) {
    if (postCount < MAX_POSTS) {
        strcpy(posts[postCount].type, type);
        strcpy(posts[postCount].content, content);
        postCount++;
    } else {
        g_print("Post limit reached.\n");
    }
}

void displayPosts(GtkWidget *widget, gpointer data) {
    GtkTextBuffer *buffer = GTK_TEXT_BUFFER(data);
    gtk_text_buffer_set_text(buffer, "", -1); // Clear the buffer

    for (int i = 0; i < postCount; i++) {
        char post[300];
        snprintf(post, sizeof(post), "Post %d: [%s] %s\n", i + 1, posts[i].type, posts[i].content);
        gtk_text_buffer_insert_at_cursor(buffer, post, -1);
    }
}

void on_post_button_clicked(GtkWidget *widget, gpointer data) {
    GtkEntry **entries = (GtkEntry **)data;
    const char *type = gtk_entry_get_text(entries[0]);
    const char *content = gtk_entry_get_text(entries[1]);

    addPost(type, content);
    gtk_entry_set_text(entries[1], ""); // Clear the content entry
}

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *post_type_label;
    GtkWidget *post_type_entry;
    GtkWidget *post_content_label;
    GtkWidget *post_content_entry;
    GtkWidget *post_button;
    GtkWidget *display_button;
    GtkWidget *text_view;
    GtkTextBuffer *buffer;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Post Manager");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    post_type_label = gtk_label_new("Post Type:");
    gtk_grid_attach(GTK_GRID(grid), post_type_label, 0, 0, 1, 1);

    post_type_entry = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), post_type_entry, 1, 0, 1, 1);

    post_content_label = gtk_label_new("Content:");
    gtk_grid_attach(GTK_GRID(grid), post_content_label, 0, 1, 1, 1);

    post_content_entry = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), post_content_entry, 1, 1, 1, 1);

    post_button = gtk_button_new_with_label("Add Post");
    gtk_grid_attach(GTK_GRID(grid), post_button, 0, 2, 2, 1);

    display_button = gtk_button_new_with_label("Display Posts");
    gtk_grid_attach(GTK_GRID(grid), display_button, 0, 3, 2, 1);

    text_view = gtk_text_view_new();
    buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(text_view));
    gtk_grid_attach(GTK_GRID(grid), text_view, 0, 4, 2, 1);

    GtkEntry *entries[2] = {GTK_ENTRY(post_type_entry), GTK_ENTRY(post_content_entry)};
    g_signal_connect(post_button, "clicked", G_CALLBACK(on_post_button_clicked), entries);
    g_signal_connect(display_button, "clicked", G_CALLBACK(displayPosts), buffer);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}