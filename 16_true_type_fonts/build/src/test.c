/* test.c generated by valac 0.28.1, the Vala compiler
 * generated from test.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_rect.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

#define TYPE_MY_TEXTURE (my_texture_get_type ())
#define MY_TEXTURE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MY_TEXTURE, MyTexture))
#define MY_TEXTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MY_TEXTURE, MyTextureClass))
#define IS_MY_TEXTURE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MY_TEXTURE))
#define IS_MY_TEXTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MY_TEXTURE))
#define MY_TEXTURE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MY_TEXTURE, MyTextureClass))

typedef struct _MyTexture MyTexture;
typedef struct _MyTextureClass MyTextureClass;
#define _SDL_DestroyWindow0(var) ((var == NULL) ? NULL : (var = (SDL_DestroyWindow (var), NULL)))
#define _SDL_DestroyRenderer0(var) ((var == NULL) ? NULL : (var = (SDL_DestroyRenderer (var), NULL)))
#define _TTF_CloseFont0(var) ((var == NULL) ? NULL : (var = (TTF_CloseFont (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
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
	SDL_Renderer* renderer;
	TTF_Font* font;
	MyTexture* textTexture;
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
GType my_texture_get_type (void) G_GNUC_CONST;
#define HELLO_WORLD_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_HELLO_WORLD, HelloWorldPrivate))
enum  {
	HELLO_WORLD_DUMMY_PROPERTY
};
#define HELLO_WORLD_SCREEN_WIDTH 640
#define HELLO_WORLD_SCREEN_HEIGHT 480
void hello_world_run (HelloWorld* self);
void my_texture_render (MyTexture* self, SDL_Renderer* renderer, gint x, gint y, SDL_Rect* clip, gdouble angle, SDL_Point* center, SDL_RendererFlip flip);
gint my_texture_get_width (MyTexture* self);
gint my_texture_get_height (MyTexture* self);
gboolean hello_world_init (HelloWorld* self);
gboolean hello_world_load_media (HelloWorld* self);
MyTexture* my_texture_from_rendered_text (SDL_Renderer* renderer, TTF_Font* font, const gchar* textureText, SDL_Color textColor);
void hello_world_main (void);
HelloWorld* hello_world_new (void);
HelloWorld* hello_world_construct (GType object_type);
static void hello_world_finalize (HelloWorld* obj);


void hello_world_run (HelloWorld* self) {
	gboolean quit = FALSE;
	SDL_Event e = {0};
	g_return_if_fail (self != NULL);
	quit = FALSE;
	while (TRUE) {
		gboolean _tmp0_ = FALSE;
		SDL_Renderer* _tmp5_ = NULL;
		SDL_Renderer* _tmp6_ = NULL;
		MyTexture* _tmp7_ = NULL;
		SDL_Renderer* _tmp8_ = NULL;
		MyTexture* _tmp9_ = NULL;
		gint _tmp10_ = 0;
		gint _tmp11_ = 0;
		MyTexture* _tmp12_ = NULL;
		gint _tmp13_ = 0;
		gint _tmp14_ = 0;
		SDL_Renderer* _tmp15_ = NULL;
		_tmp0_ = quit;
		if (!(!_tmp0_)) {
			break;
		}
		while (TRUE) {
			SDL_Event _tmp1_ = {0};
			gint _tmp2_ = 0;
			SDL_Event _tmp3_ = {0};
			SDL_EventType _tmp4_ = 0;
			_tmp2_ = SDL_PollEvent (&_tmp1_);
			 (e);
			e = _tmp1_;
			if (!(_tmp2_ != 0)) {
				break;
			}
			_tmp3_ = e;
			_tmp4_ = _tmp3_.type;
			if (_tmp4_ == SDL_QUIT) {
				quit = TRUE;
			}
		}
		_tmp5_ = self->priv->renderer;
		SDL_SetRenderDrawColor (_tmp5_, (guint8) 0xFF, (guint8) 0xFF, (guint8) 0xFF, (guint8) SDL_ALPHA_OPAQUE);
		_tmp6_ = self->priv->renderer;
		SDL_RenderClear (_tmp6_);
		_tmp7_ = self->priv->textTexture;
		_tmp8_ = self->priv->renderer;
		_tmp9_ = self->priv->textTexture;
		_tmp10_ = my_texture_get_width (_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp12_ = self->priv->textTexture;
		_tmp13_ = my_texture_get_height (_tmp12_);
		_tmp14_ = _tmp13_;
		my_texture_render (_tmp7_, _tmp8_, (HELLO_WORLD_SCREEN_WIDTH - _tmp11_) / 2, (HELLO_WORLD_SCREEN_HEIGHT - _tmp14_) / 2, NULL, 0.0, NULL, SDL_FLIP_NONE);
		_tmp15_ = self->priv->renderer;
		SDL_RenderPresent (_tmp15_);
	}
	 (e);
}


gboolean hello_world_init (HelloWorld* self) {
	gboolean result = FALSE;
	gint _tmp0_ = 0;
	gint _tmp3_ = 0;
	gboolean _tmp6_ = FALSE;
	SDL_Window* _tmp8_ = NULL;
	SDL_Window* _tmp9_ = NULL;
	SDL_Window* _tmp12_ = NULL;
	SDL_Renderer* _tmp13_ = NULL;
	SDL_Renderer* _tmp14_ = NULL;
	SDL_Renderer* _tmp17_ = NULL;
	gint imgInitFlags = 0;
	gint initResult = 0;
	gint _tmp18_ = 0;
	gint _tmp19_ = 0;
	gint _tmp20_ = 0;
	gint _tmp21_ = 0;
	gint _tmp22_ = 0;
	gint _tmp25_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = SDL_Init ((guint32) SDL_INIT_VIDEO);
	if (_tmp0_ < 0) {
		FILE* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
		_tmp1_ = stdout;
		_tmp2_ = SDL_GetError ();
		fprintf (_tmp1_, "SDL could not initialize! SDL Error: %s\n", _tmp2_);
		result = FALSE;
		return result;
	}
	_tmp3_ = IMG_Init ((gint) IMG_INIT_PNG);
	if (_tmp3_ < 0) {
		FILE* _tmp4_ = NULL;
		const gchar* _tmp5_ = NULL;
		_tmp4_ = stdout;
		_tmp5_ = IMG_GetError ();
		fprintf (_tmp4_, "SDL_image could not initialize! SDL_image Error: %s\n", _tmp5_);
		result = FALSE;
		return result;
	}
	_tmp6_ = SDL_SetHint ("SDL_RENDER_SCALE_QUALITY", "1");
	if (!_tmp6_) {
		FILE* _tmp7_ = NULL;
		_tmp7_ = stdout;
		fputs ("Warining: Linear texture filtering not enabled!", _tmp7_);
	}
	_tmp8_ = SDL_CreateWindow ("SDL Tutorial", (gint) SDL_WINDOWPOS_CENTERED_MASK, (gint) SDL_WINDOWPOS_CENTERED_MASK, HELLO_WORLD_SCREEN_WIDTH, HELLO_WORLD_SCREEN_HEIGHT, (guint32) SDL_WINDOW_SHOWN);
	_SDL_DestroyWindow0 (self->priv->window);
	self->priv->window = _tmp8_;
	_tmp9_ = self->priv->window;
	if (_tmp9_ == NULL) {
		FILE* _tmp10_ = NULL;
		const gchar* _tmp11_ = NULL;
		_tmp10_ = stdout;
		_tmp11_ = SDL_GetError ();
		fprintf (_tmp10_, "Window could not be created! SDL Error: %s\n", _tmp11_);
		result = FALSE;
		return result;
	}
	_tmp12_ = self->priv->window;
	_tmp13_ = SDL_CreateRenderer (_tmp12_, -1, (guint32) (SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC));
	_SDL_DestroyRenderer0 (self->priv->renderer);
	self->priv->renderer = _tmp13_;
	_tmp14_ = self->priv->renderer;
	if (_tmp14_ == NULL) {
		FILE* _tmp15_ = NULL;
		const gchar* _tmp16_ = NULL;
		_tmp15_ = stdout;
		_tmp16_ = SDL_GetError ();
		fprintf (_tmp15_, "Renderer could not be created! SDL Error: %s\n", _tmp16_);
		result = FALSE;
		return result;
	}
	_tmp17_ = self->priv->renderer;
	SDL_SetRenderDrawColor (_tmp17_, (guint8) 0xFF, (guint8) 0xFF, (guint8) 0xFF, (guint8) SDL_ALPHA_OPAQUE);
	imgInitFlags = (gint) IMG_INIT_PNG;
	_tmp18_ = imgInitFlags;
	_tmp19_ = IMG_Init (_tmp18_);
	initResult = _tmp19_;
	_tmp20_ = initResult;
	_tmp21_ = imgInitFlags;
	_tmp22_ = imgInitFlags;
	if ((_tmp20_ & _tmp21_) != _tmp22_) {
		FILE* _tmp23_ = NULL;
		const gchar* _tmp24_ = NULL;
		_tmp23_ = stdout;
		_tmp24_ = IMG_GetError ();
		fprintf (_tmp23_, "SDL_image could not initialize! SDL_image Error: %s\n", _tmp24_);
		result = FALSE;
		return result;
	}
	_tmp25_ = TTF_Init ();
	if (_tmp25_ == (-1)) {
		FILE* _tmp26_ = NULL;
		const gchar* _tmp27_ = NULL;
		_tmp26_ = stdout;
		_tmp27_ = TTF_GetError ();
		fprintf (_tmp26_, "SDL_ttf could not initialize! SDL_ttf Error: %s\n", _tmp27_);
		result = FALSE;
		return result;
	}
	result = TRUE;
	return result;
}


gboolean hello_world_load_media (HelloWorld* self) {
	gboolean result = FALSE;
	TTF_Font* _tmp0_ = NULL;
	TTF_Font* _tmp1_ = NULL;
	SDL_Color textColor = {0};
	SDL_Color _tmp4_ = {0};
	SDL_Renderer* _tmp5_ = NULL;
	TTF_Font* _tmp6_ = NULL;
	SDL_Color _tmp7_ = {0};
	MyTexture* _tmp8_ = NULL;
	MyTexture* _tmp9_ = NULL;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = TTF_OpenFont ("resources/lazy.ttf", 28);
	_TTF_CloseFont0 (self->priv->font);
	self->priv->font = _tmp0_;
	_tmp1_ = self->priv->font;
	if (_tmp1_ == NULL) {
		FILE* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
		_tmp2_ = stdout;
		_tmp3_ = TTF_GetError ();
		fprintf (_tmp2_, "Failed to load lazy font!, SDL_ttf Error: %s\n", _tmp3_);
		result = FALSE;
		return result;
	}
	_tmp4_.r = (guint8) 0;
	_tmp4_.g = (guint8) 0;
	_tmp4_.b = (guint8) 0;
	textColor = _tmp4_;
	_tmp5_ = self->priv->renderer;
	_tmp6_ = self->priv->font;
	_tmp7_ = textColor;
	_tmp8_ = my_texture_from_rendered_text (_tmp5_, _tmp6_, "The quick brown fox jumps over the lazy dog", _tmp7_);
	_g_object_unref0 (self->priv->textTexture);
	self->priv->textTexture = _tmp8_;
	_tmp9_ = self->priv->textTexture;
	if (_tmp9_ == NULL) {
		FILE* _tmp10_ = NULL;
		_tmp10_ = stdout;
		fputs ("Failet to render text texture!\n", _tmp10_);
		result = FALSE;
		return result;
	}
	result = TRUE;
	return result;
}


void hello_world_main (void) {
	HelloWorld* app = NULL;
	HelloWorld* _tmp0_ = NULL;
	HelloWorld* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	_tmp0_ = hello_world_new ();
	app = _tmp0_;
	_tmp1_ = app;
	_tmp2_ = hello_world_init (_tmp1_);
	if (!_tmp2_) {
		FILE* _tmp3_ = NULL;
		_tmp3_ = stdout;
		fputs ("failed to initialize!\n", _tmp3_);
	} else {
		HelloWorld* _tmp4_ = NULL;
		gboolean _tmp5_ = FALSE;
		_tmp4_ = app;
		_tmp5_ = hello_world_load_media (_tmp4_);
		if (!_tmp5_) {
			FILE* _tmp6_ = NULL;
			_tmp6_ = stdout;
			fputs ("Failed to load media!\n", _tmp6_);
		} else {
			HelloWorld* _tmp7_ = NULL;
			_tmp7_ = app;
			hello_world_run (_tmp7_);
		}
	}
	_hello_world_unref0 (app);
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,32,0)
	g_thread_init (NULL);
#endif
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
	IMG_Quit ();
	_SDL_DestroyWindow0 (self->priv->window);
	_SDL_DestroyRenderer0 (self->priv->renderer);
	_TTF_CloseFont0 (self->priv->font);
	_g_object_unref0 (self->priv->textTexture);
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


