/* componentstate.c generated by valac 0.24.0, the Vala compiler
 * generated from componentstate.vala, do not modify */

/* 
 * SmartSim - Digital Logic Circuit Designer and Simulator
 *   
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *   
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *   
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *   
 *   Filename: componentstate.vala
 *   
 *   Copyright Ashley Newson 2013
 */

#include <glib.h>
#include <glib-object.h>
#include <cairo.h>
#include <gobject/gvaluecollector.h>


#define TYPE_COMPONENT_STATE (component_state_get_type ())
#define COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COMPONENT_STATE, ComponentState))
#define COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COMPONENT_STATE, ComponentStateClass))
#define IS_COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COMPONENT_STATE))
#define IS_COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COMPONENT_STATE))
#define COMPONENT_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COMPONENT_STATE, ComponentStateClass))

typedef struct _ComponentState ComponentState;
typedef struct _ComponentStateClass ComponentStateClass;
typedef struct _ComponentStatePrivate ComponentStatePrivate;

#define TYPE_COMPILED_CIRCUIT (compiled_circuit_get_type ())
#define COMPILED_CIRCUIT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COMPILED_CIRCUIT, CompiledCircuit))
#define COMPILED_CIRCUIT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COMPILED_CIRCUIT, CompiledCircuitClass))
#define IS_COMPILED_CIRCUIT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COMPILED_CIRCUIT))
#define IS_COMPILED_CIRCUIT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COMPILED_CIRCUIT))
#define COMPILED_CIRCUIT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COMPILED_CIRCUIT, CompiledCircuitClass))

typedef struct _CompiledCircuit CompiledCircuit;
typedef struct _CompiledCircuitClass CompiledCircuitClass;

#define TYPE_COMPONENT_INST (component_inst_get_type ())
#define COMPONENT_INST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COMPONENT_INST, ComponentInst))
#define COMPONENT_INST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COMPONENT_INST, ComponentInstClass))
#define IS_COMPONENT_INST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COMPONENT_INST))
#define IS_COMPONENT_INST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COMPONENT_INST))
#define COMPONENT_INST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COMPONENT_INST, ComponentInstClass))

typedef struct _ComponentInst ComponentInst;
typedef struct _ComponentInstClass ComponentInstClass;
#define _component_inst_unref0(var) ((var == NULL) ? NULL : (var = (component_inst_unref (var), NULL)))
typedef struct _ParamSpecComponentState ParamSpecComponentState;

/**
 * Errors involving any ComponentState, such as compile errors.
 */
typedef enum  {
	COMPONENT_STATE_ERROR_COMPILE
} ComponentStateError;
#define COMPONENT_STATE_ERROR component_state_error_quark ()
struct _ComponentState {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ComponentStatePrivate * priv;
	CompiledCircuit* compiledCircuit;
	ComponentInst** ancestry;
	gint ancestry_length1;
	ComponentInst* componentInst;
	gint renderQueueID;
	gint processQueueID;
	gboolean display;
};

struct _ComponentStateClass {
	GTypeClass parent_class;
	void (*finalize) (ComponentState *self);
	void (*update) (ComponentState* self);
	void (*click) (ComponentState* self);
	void (*render) (ComponentState* self, cairo_t* context);
	gboolean (*get_alwaysUpdate) (ComponentState* self);
};

struct _ParamSpecComponentState {
	GParamSpec parent_instance;
};


static gpointer component_state_parent_class = NULL;

GQuark component_state_error_quark (void);
gpointer component_state_ref (gpointer instance);
void component_state_unref (gpointer instance);
GParamSpec* param_spec_component_state (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_component_state (GValue* value, gpointer v_object);
void value_take_component_state (GValue* value, gpointer v_object);
gpointer value_get_component_state (const GValue* value);
GType component_state_get_type (void) G_GNUC_CONST;
gpointer compiled_circuit_ref (gpointer instance);
void compiled_circuit_unref (gpointer instance);
GParamSpec* param_spec_compiled_circuit (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_compiled_circuit (GValue* value, gpointer v_object);
void value_take_compiled_circuit (GValue* value, gpointer v_object);
gpointer value_get_compiled_circuit (const GValue* value);
GType compiled_circuit_get_type (void) G_GNUC_CONST;
gpointer component_inst_ref (gpointer instance);
void component_inst_unref (gpointer instance);
GParamSpec* param_spec_component_inst (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_component_inst (GValue* value, gpointer v_object);
void value_take_component_inst (GValue* value, gpointer v_object);
gpointer value_get_component_inst (const GValue* value);
GType component_inst_get_type (void) G_GNUC_CONST;
enum  {
	COMPONENT_STATE_DUMMY_PROPERTY
};
void component_state_update (ComponentState* self);
static void component_state_real_update (ComponentState* self);
void component_state_click (ComponentState* self);
static void component_state_real_click (ComponentState* self);
void component_state_render (ComponentState* self, cairo_t* context);
static void component_state_real_render (ComponentState* self, cairo_t* context);
ComponentState* component_state_construct (GType object_type);
gboolean component_state_get_alwaysUpdate (ComponentState* self);
static void component_state_finalize (ComponentState* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


GQuark component_state_error_quark (void) {
	return g_quark_from_static_string ("component_state_error-quark");
}


/**
 * Called for every simulation iteration. Causes the component to
 * update its internal state and outputs.
 */
static void component_state_real_update (ComponentState* self) {
	g_critical ("Type `%s' does not implement abstract method `component_state_update'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void component_state_update (ComponentState* self) {
	g_return_if_fail (self != NULL);
	COMPONENT_STATE_GET_CLASS (self)->update (self);
}


/**
 * Action to perform when a component has been clicked.
 */
static void component_state_real_click (ComponentState* self) {
}


void component_state_click (ComponentState* self) {
	g_return_if_fail (self != NULL);
	COMPONENT_STATE_GET_CLASS (self)->click (self);
}


/**
 * If the component has extra elements to display (such as a live
 * number value), it must be done here. Called every visual refresh.
 */
static void component_state_real_render (ComponentState* self, cairo_t* context) {
	g_return_if_fail (context != NULL);
}


void component_state_render (ComponentState* self, cairo_t* context) {
	g_return_if_fail (self != NULL);
	COMPONENT_STATE_GET_CLASS (self)->render (self, context);
}


ComponentState* component_state_construct (GType object_type) {
	ComponentState* self = NULL;
	self = (ComponentState*) g_type_create_instance (object_type);
	return self;
}


gboolean component_state_get_alwaysUpdate (ComponentState* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return COMPONENT_STATE_GET_CLASS (self)->get_alwaysUpdate (self);
}


static gboolean component_state_real_get_alwaysUpdate (ComponentState* base) {
	gboolean result;
	ComponentState* self;
	self = base;
	result = FALSE;
	return result;
}


static void value_component_state_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void value_component_state_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		component_state_unref (value->data[0].v_pointer);
	}
}


static void value_component_state_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = component_state_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer value_component_state_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* value_component_state_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		ComponentState* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = component_state_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* value_component_state_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	ComponentState** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = component_state_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* param_spec_component_state (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecComponentState* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_COMPONENT_STATE), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer value_get_component_state (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_COMPONENT_STATE), NULL);
	return value->data[0].v_pointer;
}


void value_set_component_state (GValue* value, gpointer v_object) {
	ComponentState* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_COMPONENT_STATE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_COMPONENT_STATE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		component_state_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		component_state_unref (old);
	}
}


void value_take_component_state (GValue* value, gpointer v_object) {
	ComponentState* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_COMPONENT_STATE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_COMPONENT_STATE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		component_state_unref (old);
	}
}


static void component_state_class_init (ComponentStateClass * klass) {
	component_state_parent_class = g_type_class_peek_parent (klass);
	COMPONENT_STATE_CLASS (klass)->finalize = component_state_finalize;
	COMPONENT_STATE_CLASS (klass)->update = component_state_real_update;
	COMPONENT_STATE_CLASS (klass)->click = component_state_real_click;
	COMPONENT_STATE_CLASS (klass)->render = component_state_real_render;
	COMPONENT_STATE_CLASS (klass)->get_alwaysUpdate = component_state_real_get_alwaysUpdate;
}


static void component_state_instance_init (ComponentState * self) {
	self->ref_count = 1;
}


static void component_state_finalize (ComponentState* obj) {
	ComponentState * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_COMPONENT_STATE, ComponentState);
	self->ancestry = (_vala_array_free (self->ancestry, self->ancestry_length1, (GDestroyNotify) component_inst_unref), NULL);
	_component_inst_unref0 (self->componentInst);
}


/**
 * A primitive compiled component.
 * 
 * A ComponentState is a fully compiled primitive component as part of a
 * compiled circuit.
 * They handle their own execution within the circuit after being called
 * by a CompiledCircuit.
 * They are constructed with the aid of a corrisponding ComponentDef,
 * which identifies the necessary connections and properties.
 */
GType component_state_get_type (void) {
	static volatile gsize component_state_type_id__volatile = 0;
	if (g_once_init_enter (&component_state_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_component_state_init, value_component_state_free_value, value_component_state_copy_value, value_component_state_peek_pointer, "p", value_component_state_collect_value, "p", value_component_state_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ComponentStateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) component_state_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ComponentState), 0, (GInstanceInitFunc) component_state_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType component_state_type_id;
		component_state_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ComponentState", &g_define_type_info, &g_define_type_fundamental_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&component_state_type_id__volatile, component_state_type_id);
	}
	return component_state_type_id__volatile;
}


gpointer component_state_ref (gpointer instance) {
	ComponentState* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void component_state_unref (gpointer instance) {
	ComponentState* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		COMPONENT_STATE_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



