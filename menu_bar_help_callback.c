#include <gtk/gtk.h>

void menu_bar_help_callback(GtkWidget *widget, gpointer main_window)
{
    GtkWidget *dialog_about;
    
    dialog_about = gtk_about_dialog_new();
    gtk_about_dialog_set_name(GTK_ABOUT_DIALOG(dialog_about), "FWD");
    gtk_about_dialog_set_version(GTK_ABOUT_DIALOG(dialog_about), "0.9");
    gtk_about_dialog_set_copyright(GTK_ABOUT_DIALOG(dialog_about), "(c) 西电开源社区FWD小组");
    gtk_about_dialog_set_comments(GTK_ABOUT_DIALOG(dialog_about),
            "FWD是一个简易的流浪汉信息管理系统");
    gtk_about_dialog_set_website(GTK_ABOUT_DIALOG(dialog_about), "http://serif.us");
    gtk_dialog_run(GTK_DIALOG(dialog_about));
    gtk_widget_destroy(dialog_about);
}


