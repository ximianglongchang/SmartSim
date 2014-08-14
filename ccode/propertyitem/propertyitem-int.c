/* propertyitem-int.c generated by valac 0.24.0, the Vala compiler
 * generated from propertyitem-int.vala, do not modify */

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
 *   Filename: propertyitem/propertyitem-int.vala
 *   
 *   Copyright Ashley Newson 2013
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>


#define TYPE_PROPERTY_ITEM (property_item_get_type ())
#define PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM, PropertyItem))
#define PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM, PropertyItemClass))
#define IS_PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM))
#define IS_PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM))
#define PROPERTY_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM, PropertyItemClass))

typedef struct _PropertyItem PropertyItem;
typedef struct _PropertyItemClass PropertyItemClass;
typedef struct _PropertyItemPrivate PropertyItemPrivate;

#define TYPE_PROPERTY_ITEM_INT (property_item_int_get_type ())
#define PROPERTY_ITEM_INT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM_INT, PropertyItemInt))
#define PROPERTY_ITEM_INT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM_INT, PropertyItemIntClass))
#define IS_PROPERTY_ITEM_INT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM_INT))
#define IS_PROPERTY_ITEM_INT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM_INT))
#define PROPERTY_ITEM_INT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM_INT, PropertyItemIntClass))

typedef struct _PropertyItemInt PropertyItemInt;
typedef struct _PropertyItemIntClass PropertyItemIntClass;
typedef struct _PropertyItemIntPrivate PropertyItemIntPrivate;

#define TYPE_PROPERTY_SET (property_set_get_type ())
#define PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_SET, PropertySet))
#define PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_SET, PropertySetClass))
#define IS_PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_SET))
#define IS_PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_SET))
#define PROPERTY_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_SET, PropertySetClass))

typedef struct _PropertySet PropertySet;
typedef struct _PropertySetClass PropertySetClass;
#define _property_item_unref0(var) ((var == NULL) ? NULL : (var = (property_item_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _PropertyItem {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PropertyItemPrivate * priv;
	gchar* name;
	gchar* description;
};

struct _PropertyItemClass {
	GTypeClass parent_class;
	void (*finalize) (PropertyItem *self);
	GtkWidget* (*create_widget) (PropertyItem* self);
	void (*read_widget) (PropertyItem* self, GtkWidget* propertyWidget);
};

struct _PropertyItemInt {
	PropertyItem parent_instance;
	PropertyItemIntPrivate * priv;
	gint data;
};

struct _PropertyItemIntClass {
	PropertyItemClass parent_class;
};

struct _PropertyItemIntPrivate {
	gint min;
	gint max;
};

typedef enum  {
	PROPERTY_ITEM_ERROR_ITEM_NOT_FOUND
} PropertyItemError;
#define PROPERTY_ITEM_ERROR property_item_error_quark ()

static gpointer property_item_int_parent_class = NULL;

gpointer property_item_ref (gpointer instance);
void property_item_unref (gpointer instance);
GParamSpec* param_spec_property_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_property_item (GValue* value, gpointer v_object);
void value_take_property_item (GValue* value, gpointer v_object);
gpointer value_get_property_item (const GValue* value);
GType property_item_get_type (void) G_GNUC_CONST;
GType property_item_int_get_type (void) G_GNUC_CONST;
#define PROPERTY_ITEM_INT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_PROPERTY_ITEM_INT, PropertyItemIntPrivate))
enum  {
	PROPERTY_ITEM_INT_DUMMY_PROPERTY
};
GType property_set_get_type (void) G_GNUC_CONST;
GQuark property_item_error_quark (void);
gint property_item_int_get_data_throw (PropertySet* propertySet, const gchar* name, GError** error);
PropertyItem* property_set_get_item (PropertySet* self, const gchar* name);
void property_item_int_set_data_throw (PropertySet* propertySet, const gchar* name, gint data, GError** error);
gint property_item_int_get_data (PropertySet* propertySet, const gchar* name);
void property_item_int_set_data (PropertySet* propertySet, const gchar* name, gint data);
PropertyItemInt* property_item_int_new (const gchar* name, const gchar* description, gint data, gint min, gint max);
PropertyItemInt* property_item_int_construct (GType object_type, const gchar* name, const gchar* description, gint data, gint min, gint max);
PropertyItem* property_item_construct (GType object_type, const gchar* name, const gchar* description);
PropertyItemInt* property_item_int_new_copy (PropertyItemInt* source);
PropertyItemInt* property_item_int_construct_copy (GType object_type, PropertyItemInt* source);
static GtkWidget* property_item_int_real_create_widget (PropertyItem* base);
static void property_item_int_real_read_widget (PropertyItem* base, GtkWidget* propertyWidget);
static void property_item_int_finalize (PropertyItem* obj);


gint property_item_int_get_data_throw (PropertySet* propertySet, const gchar* name, GError** error) {
	gint result = 0;
	PropertyItem* propertyItem = NULL;
	PropertySet* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	PropertyItem* _tmp2_ = NULL;
	PropertyItem* _tmp3_ = NULL;
	PropertySet* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	gchar* _tmp10_ = NULL;
	gchar* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	const gchar* _tmp13_ = NULL;
	gchar* _tmp14_ = NULL;
	gchar* _tmp15_ = NULL;
	gchar* _tmp16_ = NULL;
	gchar* _tmp17_ = NULL;
	GError* _tmp18_ = NULL;
	GError* _tmp19_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (propertySet != NULL, 0);
	g_return_val_if_fail (name != NULL, 0);
	_tmp0_ = propertySet;
	_tmp1_ = name;
	_tmp2_ = property_set_get_item (_tmp0_, _tmp1_);
	propertyItem = _tmp2_;
	_tmp3_ = propertyItem;
	if (_tmp3_ != NULL) {
		PropertyItem* _tmp4_ = NULL;
		_tmp4_ = propertyItem;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, TYPE_PROPERTY_ITEM_INT)) {
			PropertyItem* _tmp5_ = NULL;
			gint _tmp6_ = 0;
			_tmp5_ = propertyItem;
			_tmp6_ = (G_TYPE_CHECK_INSTANCE_TYPE (_tmp5_, TYPE_PROPERTY_ITEM_INT) ? ((PropertyItemInt*) _tmp5_) : NULL)->data;
			result = _tmp6_;
			_property_item_unref0 (propertyItem);
			return result;
		}
	}
	_tmp7_ = propertySet;
	_tmp8_ = ((PropertyItem*) _tmp7_)->name;
	_tmp9_ = g_strconcat ("\"", _tmp8_, NULL);
	_tmp10_ = _tmp9_;
	_tmp11_ = g_strconcat (_tmp10_, "\" does not contain an int named \"", NULL);
	_tmp12_ = _tmp11_;
	_tmp13_ = name;
	_tmp14_ = g_strconcat (_tmp12_, _tmp13_, NULL);
	_tmp15_ = _tmp14_;
	_tmp16_ = g_strconcat (_tmp15_, "\"", NULL);
	_tmp17_ = _tmp16_;
	_tmp18_ = g_error_new_literal (PROPERTY_ITEM_ERROR, PROPERTY_ITEM_ERROR_ITEM_NOT_FOUND, _tmp17_);
	_tmp19_ = _tmp18_;
	_g_free0 (_tmp17_);
	_g_free0 (_tmp15_);
	_g_free0 (_tmp12_);
	_g_free0 (_tmp10_);
	_inner_error_ = _tmp19_;
	if (_inner_error_->domain == PROPERTY_ITEM_ERROR) {
		g_propagate_error (error, _inner_error_);
		_property_item_unref0 (propertyItem);
		return 0;
	} else {
		_property_item_unref0 (propertyItem);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return 0;
	}
	_property_item_unref0 (propertyItem);
}


void property_item_int_set_data_throw (PropertySet* propertySet, const gchar* name, gint data, GError** error) {
	PropertyItem* propertyItem = NULL;
	PropertySet* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	PropertyItem* _tmp2_ = NULL;
	PropertyItem* _tmp3_ = NULL;
	PropertySet* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	gchar* _tmp10_ = NULL;
	gchar* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	const gchar* _tmp13_ = NULL;
	gchar* _tmp14_ = NULL;
	gchar* _tmp15_ = NULL;
	gchar* _tmp16_ = NULL;
	gchar* _tmp17_ = NULL;
	GError* _tmp18_ = NULL;
	GError* _tmp19_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (propertySet != NULL);
	g_return_if_fail (name != NULL);
	_tmp0_ = propertySet;
	_tmp1_ = name;
	_tmp2_ = property_set_get_item (_tmp0_, _tmp1_);
	propertyItem = _tmp2_;
	_tmp3_ = propertyItem;
	if (_tmp3_ != NULL) {
		PropertyItem* _tmp4_ = NULL;
		_tmp4_ = propertyItem;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, TYPE_PROPERTY_ITEM_INT)) {
			PropertyItem* _tmp5_ = NULL;
			gint _tmp6_ = 0;
			_tmp5_ = propertyItem;
			_tmp6_ = data;
			(G_TYPE_CHECK_INSTANCE_TYPE (_tmp5_, TYPE_PROPERTY_ITEM_INT) ? ((PropertyItemInt*) _tmp5_) : NULL)->data = _tmp6_;
			_property_item_unref0 (propertyItem);
			return;
		}
	}
	_tmp7_ = propertySet;
	_tmp8_ = ((PropertyItem*) _tmp7_)->name;
	_tmp9_ = g_strconcat ("\"", _tmp8_, NULL);
	_tmp10_ = _tmp9_;
	_tmp11_ = g_strconcat (_tmp10_, "\" does not contain an int named \"", NULL);
	_tmp12_ = _tmp11_;
	_tmp13_ = name;
	_tmp14_ = g_strconcat (_tmp12_, _tmp13_, NULL);
	_tmp15_ = _tmp14_;
	_tmp16_ = g_strconcat (_tmp15_, "\"", NULL);
	_tmp17_ = _tmp16_;
	_tmp18_ = g_error_new_literal (PROPERTY_ITEM_ERROR, PROPERTY_ITEM_ERROR_ITEM_NOT_FOUND, _tmp17_);
	_tmp19_ = _tmp18_;
	_g_free0 (_tmp17_);
	_g_free0 (_tmp15_);
	_g_free0 (_tmp12_);
	_g_free0 (_tmp10_);
	_inner_error_ = _tmp19_;
	if (_inner_error_->domain == PROPERTY_ITEM_ERROR) {
		g_propagate_error (error, _inner_error_);
		_property_item_unref0 (propertyItem);
		return;
	} else {
		_property_item_unref0 (propertyItem);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_property_item_unref0 (propertyItem);
}


gint property_item_int_get_data (PropertySet* propertySet, const gchar* name) {
	gint result = 0;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (propertySet != NULL, 0);
	g_return_val_if_fail (name != NULL, 0);
	{
		gint _tmp0_ = 0;
		PropertySet* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
		gint _tmp3_ = 0;
		_tmp1_ = propertySet;
		_tmp2_ = name;
		_tmp3_ = property_item_int_get_data_throw (_tmp1_, _tmp2_, &_inner_error_);
		_tmp0_ = _tmp3_;
		if (_inner_error_ != NULL) {
			goto __catch64_g_error;
		}
		result = _tmp0_;
		return result;
	}
	goto __finally64;
	__catch64_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
		result = 0;
		return result;
	}
	__finally64:
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
	g_clear_error (&_inner_error_);
	return 0;
}


void property_item_int_set_data (PropertySet* propertySet, const gchar* name, gint data) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (propertySet != NULL);
	g_return_if_fail (name != NULL);
	{
		PropertySet* _tmp0_ = NULL;
		const gchar* _tmp1_ = NULL;
		gint _tmp2_ = 0;
		_tmp0_ = propertySet;
		_tmp1_ = name;
		_tmp2_ = data;
		property_item_int_set_data_throw (_tmp0_, _tmp1_, _tmp2_, &_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch65_g_error;
		}
	}
	goto __finally65;
	__catch65_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
	}
	__finally65:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


PropertyItemInt* property_item_int_construct (GType object_type, const gchar* name, const gchar* description, gint data, gint min, gint max) {
	PropertyItemInt* self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (description != NULL, NULL);
	_tmp0_ = name;
	_tmp1_ = description;
	self = (PropertyItemInt*) property_item_construct (object_type, _tmp0_, _tmp1_);
	_tmp2_ = data;
	self->data = _tmp2_;
	_tmp3_ = min;
	self->priv->min = _tmp3_;
	_tmp4_ = max;
	self->priv->max = _tmp4_;
	return self;
}


PropertyItemInt* property_item_int_new (const gchar* name, const gchar* description, gint data, gint min, gint max) {
	return property_item_int_construct (TYPE_PROPERTY_ITEM_INT, name, description, data, min, max);
}


PropertyItemInt* property_item_int_construct_copy (GType object_type, PropertyItemInt* source) {
	PropertyItemInt* self = NULL;
	PropertyItemInt* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	PropertyItemInt* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	PropertyItemInt* _tmp4_ = NULL;
	gint _tmp5_ = 0;
	PropertyItemInt* _tmp6_ = NULL;
	gint _tmp7_ = 0;
	PropertyItemInt* _tmp8_ = NULL;
	gint _tmp9_ = 0;
	g_return_val_if_fail (source != NULL, NULL);
	_tmp0_ = source;
	_tmp1_ = ((PropertyItem*) _tmp0_)->name;
	_tmp2_ = source;
	_tmp3_ = ((PropertyItem*) _tmp2_)->description;
	self = (PropertyItemInt*) property_item_construct (object_type, _tmp1_, _tmp3_);
	_tmp4_ = source;
	_tmp5_ = _tmp4_->data;
	self->data = _tmp5_;
	_tmp6_ = source;
	_tmp7_ = _tmp6_->priv->min;
	self->priv->min = _tmp7_;
	_tmp8_ = source;
	_tmp9_ = _tmp8_->priv->max;
	self->priv->max = _tmp9_;
	return self;
}


PropertyItemInt* property_item_int_new_copy (PropertyItemInt* source) {
	return property_item_int_construct_copy (TYPE_PROPERTY_ITEM_INT, source);
}


static GtkWidget* property_item_int_real_create_widget (PropertyItem* base) {
	PropertyItemInt * self;
	GtkWidget* result = NULL;
	GtkSpinButton* intSpinButton = NULL;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	GtkSpinButton* _tmp2_ = NULL;
	gint _tmp3_ = 0;
	self = (PropertyItemInt*) base;
	_tmp0_ = self->priv->min;
	_tmp1_ = self->priv->max;
	_tmp2_ = (GtkSpinButton*) gtk_spin_button_new_with_range ((gdouble) _tmp0_, (gdouble) _tmp1_, (gdouble) 1);
	g_object_ref_sink (_tmp2_);
	intSpinButton = _tmp2_;
	_tmp3_ = self->data;
	gtk_spin_button_set_value (intSpinButton, (gdouble) _tmp3_);
	gtk_spin_button_set_snap_to_ticks (intSpinButton, TRUE);
	result = (GtkWidget*) intSpinButton;
	return result;
}


static void property_item_int_real_read_widget (PropertyItem* base, GtkWidget* propertyWidget) {
	PropertyItemInt * self;
	GtkWidget* _tmp0_ = NULL;
	self = (PropertyItemInt*) base;
	g_return_if_fail (propertyWidget != NULL);
	_tmp0_ = propertyWidget;
	if (_tmp0_ != NULL) {
		GtkWidget* _tmp1_ = NULL;
		_tmp1_ = propertyWidget;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, GTK_TYPE_SPIN_BUTTON)) {
			GtkWidget* _tmp2_ = NULL;
			gint _tmp3_ = 0;
			_tmp2_ = propertyWidget;
			_tmp3_ = gtk_spin_button_get_value_as_int (G_TYPE_CHECK_INSTANCE_TYPE (_tmp2_, GTK_TYPE_SPIN_BUTTON) ? ((GtkSpinButton*) _tmp2_) : NULL);
			self->data = _tmp3_;
		}
	}
}


static void property_item_int_class_init (PropertyItemIntClass * klass) {
	property_item_int_parent_class = g_type_class_peek_parent (klass);
	PROPERTY_ITEM_CLASS (klass)->finalize = property_item_int_finalize;
	g_type_class_add_private (klass, sizeof (PropertyItemIntPrivate));
	PROPERTY_ITEM_CLASS (klass)->create_widget = property_item_int_real_create_widget;
	PROPERTY_ITEM_CLASS (klass)->read_widget = property_item_int_real_read_widget;
}


static void property_item_int_instance_init (PropertyItemInt * self) {
	self->priv = PROPERTY_ITEM_INT_GET_PRIVATE (self);
}


static void property_item_int_finalize (PropertyItem* obj) {
	PropertyItemInt * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_PROPERTY_ITEM_INT, PropertyItemInt);
	PROPERTY_ITEM_CLASS (property_item_int_parent_class)->finalize (obj);
}


GType property_item_int_get_type (void) {
	static volatile gsize property_item_int_type_id__volatile = 0;
	if (g_once_init_enter (&property_item_int_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PropertyItemIntClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) property_item_int_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PropertyItemInt), 0, (GInstanceInitFunc) property_item_int_instance_init, NULL };
		GType property_item_int_type_id;
		property_item_int_type_id = g_type_register_static (TYPE_PROPERTY_ITEM, "PropertyItemInt", &g_define_type_info, 0);
		g_once_init_leave (&property_item_int_type_id__volatile, property_item_int_type_id);
	}
	return property_item_int_type_id__volatile;
}



