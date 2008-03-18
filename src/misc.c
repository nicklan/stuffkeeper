#include <glib.h>
#include "misc.h"


void open_url(const char *uri)
{
    gchar *data = g_strdup_printf("xdg-open '%s'", uri);
    g_spawn_command_line_async(data, NULL);
    g_free(data);
}
