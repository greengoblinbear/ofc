#include <ofc/sema.h>

static void ofc_sema_label__delete(
	ofc_sema_label_t* label)
{
	if (!label)
		return;

	free(label);
}

static ofc_sema_label_t* ofc_sema_label__stmt(
	unsigned number, unsigned offset)
{
	ofc_sema_label_t* label
		= (ofc_sema_label_t*)malloc(
			sizeof(label));
	if (!label) return NULL;

	label->type   = OFC_SEMA_LABEL_STMT;
	label->number = number;
	label->offset = offset;

	return label;
}

static const unsigned* ofc_sema_label__number(
	const ofc_sema_label_t* label)
{
	return (label ? &label->number : NULL);
}

static bool ofc_sema_label__compare(
	const unsigned* a, const unsigned* b)
{
	if (!a || !b)
		return false;
	return (*a == *b);
}

static uint8_t ofc_sema_label__hash(const unsigned* label)
{
	if (!label)
		return 0;

	unsigned h = *label;
	h ^= (h >> (sizeof(h) * 4));
	h ^= (h >> (sizeof(h) * 2));

	return (h & 0xFF);
}

ofc_hashmap_t* ofc_sema_label_map_create(void)
{
	return ofc_hashmap_create(
		(void*)ofc_sema_label__hash,
		(void*)ofc_sema_label__compare,
		(void*)ofc_sema_label__number,
		(void*)ofc_sema_label__delete);
}

bool ofc_sema_label_map_add_stmt(
	ofc_hashmap_t* map, unsigned label, unsigned offset)
{
	if (!map)
		return false;

	const ofc_sema_label_t* duplicate
		= ofc_hashmap_find(map, &label);
	if (duplicate)
	{
		/* TODO - Error: Re-definition of label LABEL. */
		return false;
	}

	if (label == 0)
	{
		/* TODO - Warning: Label zero isn't supported in standard Fortran. */
	}

	ofc_sema_label_t* l
		= ofc_sema_label__stmt(label, offset);
	if (!l) return false;

	if (!ofc_hashmap_add(map, l))
	{
		ofc_sema_label__delete(l);
		return false;
	}

	return true;
}

bool ofc_sema_label_map_add_format(
	ofc_hashmap_t* map, unsigned label, const void* format)
{
	if (!map || !format)
		return false;

	const ofc_sema_label_t* duplicate
		= ofc_hashmap_find(map, &label);
	if (duplicate)
	{
		/* TODO - Error: Re-definition of label LABEL. */
		return false;
	}

	if (label == 0)
	{
		/* TODO - Warning: Label zero isn't supported in standard Fortran. */
	}

	/* TODO - Implement. */
	return false;
}

const ofc_sema_label_t* ofc_sema_label_map_find(
	const ofc_hashmap_t* map, unsigned label)
{
	return ofc_hashmap_find(map, &label);
}
