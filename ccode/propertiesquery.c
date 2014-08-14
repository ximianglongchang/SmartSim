/* propertiesquery.c generated by valac 0.24.0, the Vala compiler
 * generated from propertiesquery.vala, do not modify */

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
 *   Filename: propertiesquery.vala
 *   
 *   Copyright Ashley Newson 2013
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define TYPE_PROPERTIES_QUERY (properties_query_get_type ())
#define PROPERTIES_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTIES_QUERY, PropertiesQuery))
#define PROPERTIES_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTIES_QUERY, PropertiesQueryClass))
#define IS_PROPERTIES_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTIES_QUERY))
#define IS_PROPERTIES_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTIES_QUERY))
#define PROPERTIES_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTIES_QUERY, PropertiesQueryClass))

typedef struct _PropertiesQuery PropertiesQuery;
typedef struct _PropertiesQueryClass PropertiesQueryClass;
typedef struct _PropertiesQueryPrivate PropertiesQueryPrivate;

#define TYPE_PROPERTY_ITEM (property_item_get_type ())
#define PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM, PropertyItem))
#define PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM, PropertyItemClass))
#define IS_PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM))
#define IS_PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM))
#define PROPERTY_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM, PropertyItemClass))

typedef struct _PropertyItem PropertyItem;
typedef struct _PropertyItemClass PropertyItemClass;

#define TYPE_PROPERTY_SET (property_set_get_type ())
#define PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_SET, PropertySet))
#define PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_SET, PropertySetClass))
#define IS_PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_SET))
#define IS_PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_SET))
#define PROPERTY_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_SET, PropertySetClass))

typedef struct _PropertySet PropertySet;
typedef struct _PropertySetClass PropertySetClass;
#define _property_item_unref0(var) ((var == NULL) ? NULL : (var = (property_item_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _PropertyItemPrivate PropertyItemPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _PropertySetPrivate PropertySetPrivate;
typedef struct _ParamSpecPropertiesQuery ParamSpecPropertiesQuery;

struct _PropertiesQuery {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PropertiesQueryPrivate * priv;
};

struct _PropertiesQueryClass {
	GTypeClass parent_class;
	void (*finalize) (PropertiesQuery *self);
};

struct _PropertiesQueryPrivate {
	PropertySet* propertySet;
	GtkDialog* dialog;
	GtkLabel* titleNameLabel;
	GtkLabel* titleDescriptionLabel;
	GtkBox** propertyVBoxes;
	gint propertyVBoxes_length1;
	gint _propertyVBoxes_size_;
	GtkLabel** nameLabels;
	gint nameLabels_length1;
	gint _nameLabels_size_;
	GtkLabel** descriptionLabels;
	gint descriptionLabels_length1;
	gint _descriptionLabels_size_;
	GtkWidget** propertyWidgets;
	gint propertyWidgets_length1;
	gint _propertyWidgets_size_;
	GtkButton* applyButton;
	GtkButton* cancelButton;
};

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

struct _PropertySet {
	PropertyItem parent_instance;
	PropertySetPrivate * priv;
	PropertyItem** propertyItems;
	gint propertyItems_length1;
};

struct _PropertySetClass {
	PropertyItemClass parent_class;
};

struct _ParamSpecPropertiesQuery {
	GParamSpec parent_instance;
};


static gpointer properties_query_parent_class = NULL;

gpointer properties_query_ref (gpointer instance);
void properties_query_unref (gpointer instance);
GParamSpec* param_spec_properties_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_properties_query (GValue* value, gpointer v_object);
void value_take_properties_query (GValue* value, gpointer v_object);
gpointer value_get_properties_query (const GValue* value);
GType properties_query_get_type (void) G_GNUC_CONST;
gpointer property_item_ref (gpointer instance);
void property_item_unref (gpointer instance);
GParamSpec* param_spec_property_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_property_item (GValue* value, gpointer v_object);
void value_take_property_item (GValue* value, gpointer v_object);
gpointer value_get_property_item (const GValue* value);
GType property_item_get_type (void) G_GNUC_CONST;
GType property_set_get_type (void) G_GNUC_CONST;
#define PROPERTIES_QUERY_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_PROPERTIES_QUERY, PropertiesQueryPrivate))
enum  {
	PROPERTIES_QUERY_DUMMY_PROPERTY
};
PropertiesQuery* properties_query_new (const gchar* title, GtkWindow* parent, PropertySet* propertySet);
PropertiesQuery* properties_query_construct (GType object_type, const gchar* title, GtkWindow* parent, PropertySet* propertySet);
static void _vala_array_add87 (GtkBox*** array, int* length, int* size, GtkBox* value);
static void _vala_array_add88 (GtkLabel*** array, int* length, int* size, GtkLabel* value);
static void _vala_array_add89 (GtkLabel*** array, int* length, int* size, GtkLabel* value);
GtkWidget* property_item_create_widget (PropertyItem* self);
static void _vala_array_add90 (GtkWidget*** array, int* length, int* size, GtkWidget* value);
void properties_query_response_handler (PropertiesQuery* self, gint response_id);
static void _properties_query_response_handler_gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self);
gboolean properties_query_apply_changes (PropertiesQuery* self);
gint properties_query_run (PropertiesQuery* self);
void property_item_read_widget (PropertyItem* self, GtkWidget* propertyWidget);
static void properties_query_finalize (PropertiesQuery* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


/**
 * Creates a new PropertyQuery with the title //title//, openned by
 * //parent//, to edit //propertySet//.
 */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static gpointer _property_item_ref0 (gpointer self) {
	return self ? property_item_ref (self) : NULL;
}


static void _vala_array_add87 (GtkBox*** array, int* length, int* size, GtkBox* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkBox*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add88 (GtkLabel*** array, int* length, int* size, GtkLabel* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkLabel*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add89 (GtkLabel*** array, int* length, int* size, GtkLabel* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkLabel*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add90 (GtkWidget*** array, int* length, int* size, GtkWidget* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkWidget*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _properties_query_response_handler_gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self) {
	properties_query_response_handler ((PropertiesQuery*) self, response_id);
}


PropertiesQuery* properties_query_construct (GType object_type, const gchar* title, GtkWindow* parent, PropertySet* propertySet) {
	PropertiesQuery* self = NULL;
	gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	GtkWindow* _tmp6_ = NULL;
	GtkDialog* _tmp7_ = NULL;
	GtkBox* content = NULL;
	GtkDialog* _tmp8_ = NULL;
	GtkBox* _tmp9_ = NULL;
	GtkBox* _tmp10_ = NULL;
	GtkDialog* _tmp11_ = NULL;
	GtkDialog* _tmp12_ = NULL;
	PropertySet* _tmp13_ = NULL;
	const gchar* _tmp14_ = NULL;
	GtkLabel* _tmp15_ = NULL;
	PropertySet* _tmp16_ = NULL;
	const gchar* _tmp17_ = NULL;
	GtkLabel* _tmp18_ = NULL;
	GtkBox* _tmp19_ = NULL;
	GtkLabel* _tmp20_ = NULL;
	GtkBox* _tmp21_ = NULL;
	GtkLabel* _tmp22_ = NULL;
	GtkDialog* _tmp71_ = NULL;
	GtkButton* _tmp72_ = NULL;
	GtkDialog* _tmp73_ = NULL;
	GtkButton* _tmp74_ = NULL;
	GtkButton* _tmp75_ = NULL;
	GtkDialog* _tmp76_ = NULL;
	GtkButton* _tmp77_ = NULL;
	PropertySet* _tmp78_ = NULL;
	PropertySet* _tmp79_ = NULL;
	GtkDialog* _tmp80_ = NULL;
	g_return_val_if_fail (propertySet != NULL, NULL);
	self = (PropertiesQuery*) g_type_create_instance (object_type);
	_tmp1_ = title;
	_tmp2_ = g_strdup (_tmp1_);
	_tmp0_ = _tmp2_;
	if (_tmp0_ == NULL) {
		PropertySet* _tmp3_ = NULL;
		const gchar* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		_tmp3_ = propertySet;
		_tmp4_ = ((PropertyItem*) _tmp3_)->name;
		_tmp5_ = g_strconcat ("Properties - ", _tmp4_, NULL);
		_g_free0 (_tmp0_);
		_tmp0_ = _tmp5_;
	}
	_tmp6_ = parent;
	_tmp7_ = (GtkDialog*) gtk_dialog_new_with_buttons (_tmp0_, _tmp6_, GTK_DIALOG_MODAL, NULL);
	g_object_ref_sink (_tmp7_);
	_g_object_unref0 (self->priv->dialog);
	self->priv->dialog = _tmp7_;
	_tmp8_ = self->priv->dialog;
	_tmp9_ = (GtkBox*) gtk_dialog_get_content_area (_tmp8_);
	_tmp10_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp9_, GTK_TYPE_BOX) ? ((GtkBox*) _tmp9_) : NULL);
	content = _tmp10_;
	_tmp11_ = self->priv->dialog;
	gtk_window_set_default_size ((GtkWindow*) _tmp11_, 200, 150);
	_tmp12_ = self->priv->dialog;
	gtk_container_set_border_width ((GtkContainer*) _tmp12_, (guint) 1);
	_tmp13_ = propertySet;
	_tmp14_ = ((PropertyItem*) _tmp13_)->name;
	_tmp15_ = (GtkLabel*) gtk_label_new (_tmp14_);
	g_object_ref_sink (_tmp15_);
	_g_object_unref0 (self->priv->titleNameLabel);
	self->priv->titleNameLabel = _tmp15_;
	_tmp16_ = propertySet;
	_tmp17_ = ((PropertyItem*) _tmp16_)->description;
	_tmp18_ = (GtkLabel*) gtk_label_new (_tmp17_);
	g_object_ref_sink (_tmp18_);
	_g_object_unref0 (self->priv->titleDescriptionLabel);
	self->priv->titleDescriptionLabel = _tmp18_;
	_tmp19_ = content;
	_tmp20_ = self->priv->titleNameLabel;
	gtk_box_pack_start (_tmp19_, (GtkWidget*) _tmp20_, FALSE, TRUE, (guint) 4);
	_tmp21_ = content;
	_tmp22_ = self->priv->titleDescriptionLabel;
	gtk_box_pack_start (_tmp21_, (GtkWidget*) _tmp22_, FALSE, TRUE, (guint) 1);
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp23_ = FALSE;
			_tmp23_ = TRUE;
			while (TRUE) {
				gint _tmp25_ = 0;
				PropertySet* _tmp26_ = NULL;
				PropertyItem** _tmp27_ = NULL;
				gint _tmp27__length1 = 0;
				GtkBox* _tmp28_ = NULL;
				GtkSeparator* _tmp29_ = NULL;
				GtkSeparator* _tmp30_ = NULL;
				PropertyItem* propertyItem = NULL;
				PropertySet* _tmp31_ = NULL;
				PropertyItem** _tmp32_ = NULL;
				gint _tmp32__length1 = 0;
				gint _tmp33_ = 0;
				PropertyItem* _tmp34_ = NULL;
				PropertyItem* _tmp35_ = NULL;
				gchar* name = NULL;
				PropertyItem* _tmp36_ = NULL;
				const gchar* _tmp37_ = NULL;
				gchar* _tmp38_ = NULL;
				gchar* description = NULL;
				PropertyItem* _tmp39_ = NULL;
				const gchar* _tmp40_ = NULL;
				gchar* _tmp41_ = NULL;
				GtkBox* propertyVBox = NULL;
				GtkBox* _tmp42_ = NULL;
				GtkBox** _tmp43_ = NULL;
				gint _tmp43__length1 = 0;
				GtkBox* _tmp44_ = NULL;
				GtkBox* _tmp45_ = NULL;
				GtkLabel* nameLabel = NULL;
				const gchar* _tmp46_ = NULL;
				GtkLabel* _tmp47_ = NULL;
				GtkLabel** _tmp48_ = NULL;
				gint _tmp48__length1 = 0;
				GtkLabel* _tmp49_ = NULL;
				GtkLabel* _tmp50_ = NULL;
				GtkLabel* descriptionLabel = NULL;
				const gchar* _tmp51_ = NULL;
				GtkLabel* _tmp52_ = NULL;
				GtkLabel* _tmp53_ = NULL;
				GtkLabel** _tmp54_ = NULL;
				gint _tmp54__length1 = 0;
				GtkLabel* _tmp55_ = NULL;
				GtkLabel* _tmp56_ = NULL;
				GtkBox* _tmp57_ = NULL;
				GtkLabel* _tmp58_ = NULL;
				const gchar* _tmp59_ = NULL;
				GtkWidget* propertyWidget = NULL;
				PropertyItem* _tmp62_ = NULL;
				GtkWidget* _tmp63_ = NULL;
				GtkWidget** _tmp64_ = NULL;
				gint _tmp64__length1 = 0;
				GtkWidget* _tmp65_ = NULL;
				GtkWidget* _tmp66_ = NULL;
				GtkBox* _tmp67_ = NULL;
				GtkWidget* _tmp68_ = NULL;
				GtkBox* _tmp69_ = NULL;
				GtkBox* _tmp70_ = NULL;
				if (!_tmp23_) {
					gint _tmp24_ = 0;
					_tmp24_ = i;
					i = _tmp24_ + 1;
				}
				_tmp23_ = FALSE;
				_tmp25_ = i;
				_tmp26_ = propertySet;
				_tmp27_ = _tmp26_->propertyItems;
				_tmp27__length1 = _tmp26_->propertyItems_length1;
				if (!(_tmp25_ < _tmp27__length1)) {
					break;
				}
				_tmp28_ = content;
				_tmp29_ = (GtkSeparator*) gtk_separator_new (GTK_ORIENTATION_HORIZONTAL);
				g_object_ref_sink (_tmp29_);
				_tmp30_ = _tmp29_;
				gtk_box_pack_start (_tmp28_, (GtkWidget*) _tmp30_, FALSE, FALSE, (guint) 3);
				_g_object_unref0 (_tmp30_);
				_tmp31_ = propertySet;
				_tmp32_ = _tmp31_->propertyItems;
				_tmp32__length1 = _tmp31_->propertyItems_length1;
				_tmp33_ = i;
				_tmp34_ = _tmp32_[_tmp33_];
				_tmp35_ = _property_item_ref0 (_tmp34_);
				propertyItem = _tmp35_;
				_tmp36_ = propertyItem;
				_tmp37_ = _tmp36_->name;
				_tmp38_ = g_strdup (_tmp37_);
				name = _tmp38_;
				_tmp39_ = propertyItem;
				_tmp40_ = _tmp39_->description;
				_tmp41_ = g_strdup (_tmp40_);
				description = _tmp41_;
				_tmp42_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 1);
				g_object_ref_sink (_tmp42_);
				propertyVBox = _tmp42_;
				_tmp43_ = self->priv->propertyVBoxes;
				_tmp43__length1 = self->priv->propertyVBoxes_length1;
				_tmp44_ = propertyVBox;
				_tmp45_ = _g_object_ref0 (_tmp44_);
				_vala_array_add87 (&self->priv->propertyVBoxes, &self->priv->propertyVBoxes_length1, &self->priv->_propertyVBoxes_size_, _tmp45_);
				_tmp46_ = name;
				_tmp47_ = (GtkLabel*) gtk_label_new (_tmp46_);
				g_object_ref_sink (_tmp47_);
				nameLabel = _tmp47_;
				_tmp48_ = self->priv->nameLabels;
				_tmp48__length1 = self->priv->nameLabels_length1;
				_tmp49_ = nameLabel;
				_tmp50_ = _g_object_ref0 (_tmp49_);
				_vala_array_add88 (&self->priv->nameLabels, &self->priv->nameLabels_length1, &self->priv->_nameLabels_size_, _tmp50_);
				_tmp51_ = description;
				_tmp52_ = (GtkLabel*) gtk_label_new (_tmp51_);
				g_object_ref_sink (_tmp52_);
				descriptionLabel = _tmp52_;
				_tmp53_ = descriptionLabel;
				g_object_set (_tmp53_, "wrap", TRUE, NULL);
				_tmp54_ = self->priv->descriptionLabels;
				_tmp54__length1 = self->priv->descriptionLabels_length1;
				_tmp55_ = descriptionLabel;
				_tmp56_ = _g_object_ref0 (_tmp55_);
				_vala_array_add89 (&self->priv->descriptionLabels, &self->priv->descriptionLabels_length1, &self->priv->_descriptionLabels_size_, _tmp56_);
				_tmp57_ = propertyVBox;
				_tmp58_ = nameLabel;
				gtk_box_pack_start (_tmp57_, (GtkWidget*) _tmp58_, FALSE, TRUE, (guint) 4);
				_tmp59_ = description;
				if (g_strcmp0 (_tmp59_, "") != 0) {
					GtkBox* _tmp60_ = NULL;
					GtkLabel* _tmp61_ = NULL;
					_tmp60_ = propertyVBox;
					_tmp61_ = descriptionLabel;
					gtk_box_pack_start (_tmp60_, (GtkWidget*) _tmp61_, FALSE, TRUE, (guint) 1);
				}
				_tmp62_ = propertyItem;
				_tmp63_ = property_item_create_widget (_tmp62_);
				propertyWidget = _tmp63_;
				_tmp64_ = self->priv->propertyWidgets;
				_tmp64__length1 = self->priv->propertyWidgets_length1;
				_tmp65_ = propertyWidget;
				_tmp66_ = _g_object_ref0 (_tmp65_);
				_vala_array_add90 (&self->priv->propertyWidgets, &self->priv->propertyWidgets_length1, &self->priv->_propertyWidgets_size_, _tmp66_);
				_tmp67_ = propertyVBox;
				_tmp68_ = propertyWidget;
				gtk_box_pack_start (_tmp67_, _tmp68_, FALSE, TRUE, (guint) 1);
				_tmp69_ = content;
				_tmp70_ = propertyVBox;
				gtk_box_pack_start (_tmp69_, (GtkWidget*) _tmp70_, FALSE, TRUE, (guint) 1);
				_g_object_unref0 (propertyWidget);
				_g_object_unref0 (descriptionLabel);
				_g_object_unref0 (nameLabel);
				_g_object_unref0 (propertyVBox);
				_g_free0 (description);
				_g_free0 (name);
				_property_item_unref0 (propertyItem);
			}
		}
	}
	_tmp71_ = self->priv->dialog;
	g_signal_connect (_tmp71_, "response", (GCallback) _properties_query_response_handler_gtk_dialog_response, self);
	_tmp72_ = (GtkButton*) gtk_button_new_with_label ("Cancel");
	g_object_ref_sink (_tmp72_);
	_g_object_unref0 (self->priv->cancelButton);
	self->priv->cancelButton = _tmp72_;
	_tmp73_ = self->priv->dialog;
	_tmp74_ = self->priv->cancelButton;
	gtk_dialog_add_action_widget (_tmp73_, (GtkWidget*) _tmp74_, (gint) GTK_RESPONSE_CANCEL);
	_tmp75_ = (GtkButton*) gtk_button_new_with_label ("Apply");
	g_object_ref_sink (_tmp75_);
	_g_object_unref0 (self->priv->applyButton);
	self->priv->applyButton = _tmp75_;
	_tmp76_ = self->priv->dialog;
	_tmp77_ = self->priv->applyButton;
	gtk_dialog_add_action_widget (_tmp76_, (GtkWidget*) _tmp77_, (gint) GTK_RESPONSE_APPLY);
	_tmp78_ = propertySet;
	_tmp79_ = _property_item_ref0 (_tmp78_);
	_property_item_unref0 (self->priv->propertySet);
	self->priv->propertySet = _tmp79_;
	_tmp80_ = self->priv->dialog;
	gtk_widget_show_all ((GtkWidget*) _tmp80_);
	_g_object_unref0 (content);
	_g_free0 (_tmp0_);
	return self;
}


PropertiesQuery* properties_query_new (const gchar* title, GtkWindow* parent, PropertySet* propertySet) {
	return properties_query_construct (TYPE_PROPERTIES_QUERY, title, parent, propertySet);
}


/**
 * Handles any action which closes the dialog (apply or cancel).
 */
void properties_query_response_handler (PropertiesQuery* self, gint response_id) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = response_id;
	switch (_tmp0_) {
		case GTK_RESPONSE_APPLY:
		{
			properties_query_apply_changes (self);
			break;
		}
		case GTK_RESPONSE_CANCEL:
		{
			break;
		}
		default:
		break;
	}
}


/**
 * Makes the dialog modal, and waits for the dialog to close.
 */
gint properties_query_run (PropertiesQuery* self) {
	gint result = 0;
	gint response_id = 0;
	GtkDialog* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	GtkDialog* _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->dialog;
	_tmp1_ = gtk_dialog_run (_tmp0_);
	response_id = _tmp1_;
	_tmp2_ = self->priv->dialog;
	gtk_widget_destroy ((GtkWidget*) _tmp2_);
	result = response_id;
	return result;
}


/**
 * Copies the values stored in GTK widgets into the PropertySet.
 */
gboolean properties_query_apply_changes (PropertiesQuery* self) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp0_ = FALSE;
			_tmp0_ = TRUE;
			while (TRUE) {
				gint _tmp2_ = 0;
				PropertySet* _tmp3_ = NULL;
				PropertyItem** _tmp4_ = NULL;
				gint _tmp4__length1 = 0;
				PropertyItem* propertyItem = NULL;
				PropertySet* _tmp5_ = NULL;
				PropertyItem** _tmp6_ = NULL;
				gint _tmp6__length1 = 0;
				gint _tmp7_ = 0;
				PropertyItem* _tmp8_ = NULL;
				PropertyItem* _tmp9_ = NULL;
				GtkWidget* propertyWidget = NULL;
				GtkWidget** _tmp10_ = NULL;
				gint _tmp10__length1 = 0;
				gint _tmp11_ = 0;
				GtkWidget* _tmp12_ = NULL;
				GtkWidget* _tmp13_ = NULL;
				PropertyItem* _tmp14_ = NULL;
				GtkWidget* _tmp15_ = NULL;
				if (!_tmp0_) {
					gint _tmp1_ = 0;
					_tmp1_ = i;
					i = _tmp1_ + 1;
				}
				_tmp0_ = FALSE;
				_tmp2_ = i;
				_tmp3_ = self->priv->propertySet;
				_tmp4_ = _tmp3_->propertyItems;
				_tmp4__length1 = _tmp3_->propertyItems_length1;
				if (!(_tmp2_ < _tmp4__length1)) {
					break;
				}
				_tmp5_ = self->priv->propertySet;
				_tmp6_ = _tmp5_->propertyItems;
				_tmp6__length1 = _tmp5_->propertyItems_length1;
				_tmp7_ = i;
				_tmp8_ = _tmp6_[_tmp7_];
				_tmp9_ = _property_item_ref0 (_tmp8_);
				propertyItem = _tmp9_;
				_tmp10_ = self->priv->propertyWidgets;
				_tmp10__length1 = self->priv->propertyWidgets_length1;
				_tmp11_ = i;
				_tmp12_ = _tmp10_[_tmp11_];
				_tmp13_ = _g_object_ref0 (_tmp12_);
				propertyWidget = _tmp13_;
				_tmp14_ = propertyItem;
				_tmp15_ = propertyWidget;
				property_item_read_widget (_tmp14_, _tmp15_);
				_g_object_unref0 (propertyWidget);
				_property_item_unref0 (propertyItem);
			}
		}
	}
	result = FALSE;
	return result;
}


static void value_properties_query_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void value_properties_query_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		properties_query_unref (value->data[0].v_pointer);
	}
}


static void value_properties_query_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = properties_query_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer value_properties_query_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* value_properties_query_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		PropertiesQuery* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = properties_query_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* value_properties_query_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	PropertiesQuery** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = properties_query_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* param_spec_properties_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecPropertiesQuery* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_PROPERTIES_QUERY), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer value_get_properties_query (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTIES_QUERY), NULL);
	return value->data[0].v_pointer;
}


void value_set_properties_query (GValue* value, gpointer v_object) {
	PropertiesQuery* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTIES_QUERY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_PROPERTIES_QUERY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		properties_query_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		properties_query_unref (old);
	}
}


void value_take_properties_query (GValue* value, gpointer v_object) {
	PropertiesQuery* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTIES_QUERY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_PROPERTIES_QUERY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		properties_query_unref (old);
	}
}


static void properties_query_class_init (PropertiesQueryClass * klass) {
	properties_query_parent_class = g_type_class_peek_parent (klass);
	PROPERTIES_QUERY_CLASS (klass)->finalize = properties_query_finalize;
	g_type_class_add_private (klass, sizeof (PropertiesQueryPrivate));
}


static void properties_query_instance_init (PropertiesQuery * self) {
	self->priv = PROPERTIES_QUERY_GET_PRIVATE (self);
	self->ref_count = 1;
}


static void properties_query_finalize (PropertiesQuery* obj) {
	PropertiesQuery * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_PROPERTIES_QUERY, PropertiesQuery);
	_property_item_unref0 (self->priv->propertySet);
	_g_object_unref0 (self->priv->dialog);
	_g_object_unref0 (self->priv->titleNameLabel);
	_g_object_unref0 (self->priv->titleDescriptionLabel);
	self->priv->propertyVBoxes = (_vala_array_free (self->priv->propertyVBoxes, self->priv->propertyVBoxes_length1, (GDestroyNotify) g_object_unref), NULL);
	self->priv->nameLabels = (_vala_array_free (self->priv->nameLabels, self->priv->nameLabels_length1, (GDestroyNotify) g_object_unref), NULL);
	self->priv->descriptionLabels = (_vala_array_free (self->priv->descriptionLabels, self->priv->descriptionLabels_length1, (GDestroyNotify) g_object_unref), NULL);
	self->priv->propertyWidgets = (_vala_array_free (self->priv->propertyWidgets, self->priv->propertyWidgets_length1, (GDestroyNotify) g_object_unref), NULL);
	_g_object_unref0 (self->priv->applyButton);
	_g_object_unref0 (self->priv->cancelButton);
}


/**
 * User interface to edit a PropertySet.
 * 
 * Creates a GTK Dialog which allows the editting of a PropertySet.
 */
GType properties_query_get_type (void) {
	static volatile gsize properties_query_type_id__volatile = 0;
	if (g_once_init_enter (&properties_query_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_properties_query_init, value_properties_query_free_value, value_properties_query_copy_value, value_properties_query_peek_pointer, "p", value_properties_query_collect_value, "p", value_properties_query_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (PropertiesQueryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) properties_query_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PropertiesQuery), 0, (GInstanceInitFunc) properties_query_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType properties_query_type_id;
		properties_query_type_id = g_type_register_fundamental (g_type_fundamental_next (), "PropertiesQuery", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&properties_query_type_id__volatile, properties_query_type_id);
	}
	return properties_query_type_id__volatile;
}


gpointer properties_query_ref (gpointer instance) {
	PropertiesQuery* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void properties_query_unref (gpointer instance) {
	PropertiesQuery* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		PROPERTIES_QUERY_GET_CLASS (self)->finalize (self);
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



