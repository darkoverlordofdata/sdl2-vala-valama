/* test.c generated by valac 0.28.1, the Vala compiler
 * generated from test.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <gobject/gvaluecollector.h>


#define TYPE_HELLO_WORLD (hello_world_get_type ())
#define HELLO_WORLD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_HELLO_WORLD, HelloWorld))
#define HELLO_WORLD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_HELLO_WORLD, HelloWorldClass))
#define IS_HELLO_WORLD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_HELLO_WORLD))
#define IS_HELLO_WORLD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_HELLO_WORLD))
#define HELLO_WORLD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_HELLO_WORLD, HelloWorldClass))

typedef struct _HelloWorld HelloWorld;
typedef struct _HelloWorldClass HelloWorldClass;
typedef struct _HelloWorldPrivate HelloWorldPrivate;
#define _SDL_DestroyWindow0(var) ((var == NULL) ? NULL : (var = (SDL_DestroyWindow (var), NULL)))
#define _SDL_FreeSurface0(var) ((var == NULL) ? NULL : (var = (SDL_FreeSurface (var), NULL)))
#define _hello_world_unref0(var) ((var == NULL) ? NULL : (var = (hello_world_unref (var), NULL)))
typedef struct _ParamSpecHelloWorld ParamSpecHelloWorld;

struct _HelloWorld {
	GTypeInstance parent_instance;
	volatile int ref_count;
	HelloWorldPrivate * priv;
};

struct _HelloWorldClass {
	GTypeClass parent_class;
	void (*finalize) (HelloWorld *self);
};

struct _HelloWorldPrivate {
	SDL_Window* window;
	SDL_Surface* surface;
	SDL_Surface* helloSurface;
};

struct _ParamSpecHelloWorld {
	GParamSpec parent_instance;
};


static gpointer hello_world_parent_class = NULL;

gpointer hello_world_ref (gpointer instance);
void hello_world_unref (gpointer instance);
GParamSpec* param_spec_hello_world (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_hello_world (GValue* value, gpointer v_object);
void value_take_hello_world (GValue* value, gpointer v_object);
gpointer value_get_hello_world (const GValue* value);
GType hello_world_get_type (void) G_GNUC_CONST;
#define HELLO_WORLD_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_HELLO_WORLD, HelloWorldPrivate))
enum  {
	HELLO_WORLD_DUMMY_PROPERTY
};
void hello_world_run (HelloWorld* self);
void hello_world_load_media (HelloWorld* self);
void hello_world_init (HelloWorld* self);
void hello_world_main (void);
HelloWorld* hello_world_new (void);
HelloWorld* hello_world_construct (GType object_type);
static void hello_world_finalize (HelloWorld* obj);


void hello_world_run (HelloWorld* self) {
	SDL_Surface* _tmp0_ = NULL;
	SDL_Surface* _tmp1_ = NULL;
	SDL_Window* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->helloSurface;
	_tmp1_ = self->priv->surface;
	SDL_BlitSurface (_tmp0_, NULL, _tmp1_, NULL);
	_tmp2_ = self->priv->window;
	SDL_UpdateWindowSurface (_tmp2_);
	SDL_Delay ((guint32) 2000);
}


void hello_world_load_media (HelloWorld* self) {
	SDL_Surface* _tmp0_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = SDL_LoadBMP ("resources/hello_world.bmp");
	_SDL_FreeSurface0 (self->priv->helloSurface);
	self->priv->helloSurface = _tmp0_;
}


void hello_world_init (HelloWorld* self) {
	SDL_Window* _tmp0_ = NULL;
	SDL_Window* _tmp1_ = NULL;
	SDL_Surface* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	SDL_Init ((guint32) SDL_INIT_EVERYTHING);
	_tmp0_ = SDL_CreateWindow ("SDL Tutorial", (gint) SDL_WINDOWPOS_CENTERED_MASK, (gint) SDL_WINDOWPOS_CENTERED_MASK, 640, 480, (guint32) SDL_WINDOW_SHOWN);
	_SDL_DestroyWindow0 (self->priv->window);
	self->priv->window = _tmp0_;
	_tmp1_ = self->priv->window;
	_tmp2_ = SDL_GetWindowSurface (_tmp1_);
	self->priv->surface = _tmp2_;
	hello_world_load_media (self);
}


void hello_world_main (void) {
	HelloWorld* app = NULL;
	HelloWorld* _tmp0_ = NULL;
	_tmp0_ = hello_world_new ();
	app = _tmp0_;
	hello_world_init (app);
	hello_world_run (app);
	_hello_world_unref0 (app);
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
	hello_world_main ();
	return 0;
}


HelloWorld* hello_world_construct (GType object_type) {
	HelloWorld* self = NULL;
	self = (HelloWorld*) g_type_create_instance (object_type);
	return self;
}


HelloWorld* hello_world_new (void) {
	return hello_world_construct (TYPE_HELLO_WORLD);
}


static void value_hello_world_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void value_hello_world_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		hello_world_unref (value->data[0].v_pointer);
	}
}


static void value_hello_world_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = hello_world_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer value_hello_world_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* value_hello_world_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		HelloWorld* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = hello_world_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* value_hello_world_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	HelloWorld** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = hello_world_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* param_spec_hello_world (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecHelloWorld* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_HELLO_WORLD), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer value_get_hello_world (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_HELLO_WORLD), NULL);
	return value->data[0].v_pointer;
}


void value_set_hello_world (GValue* value, gpointer v_object) {
	HelloWorld* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_HELLO_WORLD));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_HELLO_WORLD));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		hello_world_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		hello_world_unref (old);
	}
}


void value_take_hello_world (GValue* value, gpointer v_object) {
	HelloWorld* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_HELLO_WORLD));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_HELLO_WORLD));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		hello_world_unref (old);
	}
}


static void hello_world_class_init (HelloWorldClass * klass) {
	hello_world_parent_class = g_type_class_peek_parent (klass);
	((HelloWorldClass *) klass)->finalize = hello_world_finalize;
	g_type_class_add_private (klass, sizeof (HelloWorldPrivate));
}


static void hello_world_instance_init (HelloWorld * self) {
	self->priv = HELLO_WORLD_GET_PRIVATE (self);
	self->ref_count = 1;
}


static void hello_world_finalize (HelloWorld* obj) {
	HelloWorld * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_HELLO_WORLD, HelloWorld);
	g_signal_handlers_destroy (self);
	SDL_Quit ();
	_SDL_DestroyWindow0 (self->priv->window);
	_SDL_FreeSurface0 (self->priv->helloSurface);
}


GType hello_world_get_type (void) {
	static volatile gsize hello_world_type_id__volatile = 0;
	if (g_once_init_enter (&hello_world_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_hello_world_init, value_hello_world_free_value, value_hello_world_copy_value, value_hello_world_peek_pointer, "p", value_hello_world_collect_value, "p", value_hello_world_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (HelloWorldClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) hello_world_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (HelloWorld), 0, (GInstanceInitFunc) hello_world_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType hello_world_type_id;
		hello_world_type_id = g_type_register_fundamental (g_type_fundamental_next (), "HelloWorld", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&hello_world_type_id__volatile, hello_world_type_id);
	}
	return hello_world_type_id__volatile;
}


gpointer hello_world_ref (gpointer instance) {
	HelloWorld* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void hello_world_unref (gpointer instance) {
	HelloWorld* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		HELLO_WORLD_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



