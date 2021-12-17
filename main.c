
#include <stdio.h>
#include <gtk/gtk.h>

static void on_activate(GtkApplication *app) {
    GtkWidget *window = gtk_application_window_new(app);
    gtk_window_present(GTK_WINDOW(window));
    gtk_window_set_title(GTK_WINDOW(window), "Bind API ");
    gtk_window_resize(GTK_WINDOW(window), 800, 500);
}

int main(int argc, char *argv[]) {
    GtkApplication *app = gtk_application_new("bind-api.lif.ink.GtkApplication", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(on_activate), NULL);
    return g_application_run(G_APPLICATION(app), argc, argv);
}
